//
// Created by zenta on 2023-06-15.
//

#ifndef DYN_IMS_DBHANDLER_H
#define DYN_IMS_DBHANDLER_H

/*
 * DEFINE PARAMETERS IN COMPILE TIME HERE
 * DO NOT FORGET TO EDIT THOSE PARAMETERS
 *
 */

#define SRV_HOSTNAME "127.0.0.1" // (Node.js) SERVER HOSTNAME
#define SRV_SECURE_TOKEN "XXXXXXXXXXXX"  // (Node.js) SERVER TOKEN

#define SSL_PORT 443

// SSL Server encryption is mandatory for security purpose

#include <string>


class dbHandler {
public:
    bool query(std::string dbQuery);
    bool editConnectionDetails(std::string secureToken);
protected:

private:
    std::string srv_host = SRV_HOSTNAME;
    std::string srv_token = SRV_SECURE_TOKEN;
    int ssl_port = SSL_PORT;
};


#endif //DYN_IMS_DBHANDLER_H
