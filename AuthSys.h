//
// Created by zenta on 2023-06-15.
//

#ifndef DYN_IMS_AUTHSYS_H
#define DYN_IMS_AUTHSYS_H


class AuthSys {
public:
    AuthSys();
    ~AuthSys();
    bool login();
    bool logout();
    [[nodiscard]] bool getState() const;
private:
    bool state = false;


    bool killProcess();
};


#endif //DYN_IMS_AUTHSYS_H
