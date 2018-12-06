#include <config.h>
#include <iostream>

int main() {
    std::cout << "INFORMATION:\n"
              << "\tName: " << PACKAGE_NAME << "\n"
              << "\tVersion: " << PACKAGE_VERSION << "\n"
              << "\tURL: " << PACKAGE_URL << "\n";
    return 0;
}
