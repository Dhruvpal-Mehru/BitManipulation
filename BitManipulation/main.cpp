#include "functions.cpp"

int main()
{
    User user;
    const int READ {1 << 0};
    [[maybe_unused]] const int WRITE {1 << 1};
    [[maybe_unused]] const int EXECUTE {2 << 1};

    user.addPermissions(READ);

    user.listPermissions();

    user.removePermissions(READ);

    user.listPermissions();
}