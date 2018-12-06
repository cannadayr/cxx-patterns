#include <config.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>

struct Entity {
    int id;
    std::string name;
    Entity(int id, std::string name) : id(id), name(name) {}
    friend std::ostream& operator<< (std::ostream& stream, const Entity& entity) {
        return stream << '{' << "id: " << entity.id << ", " << "name: " << entity.name << '}';
    }
};

int main(int argc, char** argv) {
    std::cout << "INFORMATION:\n"
              << "\tName: " << PACKAGE_NAME << "\n"
              << "\tVersion: " << PACKAGE_VERSION << "\n"
              << "\tURL: " << PACKAGE_URL << "\n" << std::endl;

    // 1.)
    std::cout << "1.) initiate a vector on the stack and iterate over\n";
    static std::vector<std::string> str_vec;
    str_vec = {"Heres","some","words","to","iterate","over"};

    for (auto &i : str_vec) {
        std::cout << i << " ";
    }
    std::cout << "\n" << std::endl;

    // 2.)
    std::cout << "2.) initialize a struct on the heap and call method to print its properties\n";
    std::unique_ptr<Entity> entity1 = std::make_unique<Entity>(1,"fred");
    std::cout << *entity1 << "\n" << std::endl;

    return 0;
}
