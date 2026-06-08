#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string username;
    std::string password;

public:
    User(std::string uname, std::string pword);

    virtual ~User() {}

    std::string getUsername() const;

    bool authenticate(std::string uname, std::string pword);

    virtual void displayMenu() = 0;
};

#endif // USER_H
