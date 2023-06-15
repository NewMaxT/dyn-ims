//
// Created by zenta on 2023-06-15.
//

#include <stdexcept>
#include "dbHandler.h"

bool dbHandler::query(std::string dbQuery) {

  return false;
}


bool dbHandler::editConnectionDetails(std::string secureToken) {
  if(secureToken != srv_token) { throw std::invalid_argument("SECURITY - BAD TOKEN"); }

  return true;
}
