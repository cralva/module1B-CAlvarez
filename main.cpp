#include <iostream>
#include <string>

class Person {


private: //marks everything below as private
    std::string name; //this and age are going to be private. everything by default are private
    int age;

public: //now everything is going to be public. the private ended
    Person(std::string name, int age);
    std::string getName();
    void setName(std::string name);
    int getAge();
    void setAge(int age);
    void greet();
};


int main() {
    std::cout << "Hello CSCI 201!" << std::endl;
    std::cout << "My name is" << std::endl;
    return 0;
}