//
// Created by Dhruvpal Mehru on 8/22/25.
//
#include <iostream>
#include "functions.h"


class User
{
private:
    int permissions; // store permissions as bits

public:
    User() : permissions (0) { }

    void addPermissions(int perm)
    {
        permissions |= perm; // OR to add permission
    }

    void removePermissions(int perm)
    {
        permissions &= ~perm; // AND with NOT to remove
    }

    void listPermissions()
    {
        std::cout << "Permissions: ";
        if (permissions & (1 << 0)) std::cout << "READ ";
        if (permissions & (1 << 1)) std::cout << "WRITE ";
        if (permissions & (1 << 2)) std::cout << "EXECUTE ";
        if (permissions == 0) std::cout << "No Permissions";
        std::cout <<std::endl;
    }
};