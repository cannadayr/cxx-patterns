#include <config.h>
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "INFORMATION:\n"
              << "\tName: " << PACKAGE_NAME << "\n"
              << "\tVersion: " << PACKAGE_VERSION << "\n"
              << "\tURL: " << PACKAGE_URL << std::endl << std::endl;

    // 1.)
    std::cout << "1.) initiate a vector on the stack and iterate over" << std::endl;
    static std::vector<std::string> str_vec;
    str_vec = {"Heres","some","words","to","iterate","over"};

    for (auto &i : str_vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    return 0;
}
