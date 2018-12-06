#include <config.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <queue>
#include <thread>

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

    // 3.)
    std::cout << "3.) push elements from a queue and then flush\n";
    std::queue<std::string> queue1;
    queue1.push("elem1");
    queue1.push("elem2");
    queue1.push("elem3");
    while (!queue1.empty()) {
        std::string queue1_str = queue1.front();
        std::cout << queue1_str << "\n";
        queue1.pop();
    }
    std::cout << std::endl;


    // 4.)
    std::cout << "4.) run two processes in parallel, counting from 0-9. not thread safe.\n";
    std::thread thread1([](){
        for (int i = 0; i < 10; i++) {
            std::cout << "thread1: " << i << "\n";
        }
    });
    std::thread thread2([](){
        for (int i = 0; i < 10; i++) {
            std::cout << "thread2: " << i << "\n";
        }
    });
    thread1.join();
    thread2.join();

    return 0;
}
