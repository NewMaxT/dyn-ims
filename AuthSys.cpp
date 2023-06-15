//
// Created by zenta on 2023-06-15.
//

#include "AuthSys.h"

AuthSys::AuthSys() = default;

bool AuthSys::login() {
  state = true;
  return state;
}

bool AuthSys::logout() {
  state = false;
  return state;
}

bool AuthSys::getState() const {
  return state;
}

bool AuthSys::killProcess() {
  return false;
}

AuthSys::~AuthSys() {
  logout();
  killProcess();
}





