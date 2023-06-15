#include <iostream>


#include "dbHandler.h"
#include "AuthSys.h"
#include <thread>

#define NUM_WORKERS 2

void getValues() {

};

void parseValues() {

};


int main() {

  AuthSys auth;
  dbHandler db;

  std::thread workers[NUM_WORKERS];


  workers[0] = std::thread(getValues);
  workers[1] = std::thread(parseValues);

  for(auto & worker : workers) {
    try {
      if (worker.joinable()) {
        worker.join();
      } else {
        throw std::system_error(ECANCELED, std::system_category(), "Threads could not join");
      }
    } catch (const std::system_error &ex) {
      printf("%s \n", ex.what());
    }
  }

  return 0;
}