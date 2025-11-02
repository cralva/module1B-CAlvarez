/* Program name: Module 1B Lab
* Author: Cristian Alvarez
* Date last updated: 11/2/2025
* Purpose: Making a class and structs
*/
#include <iostream>
#include <string>

class Person {


private: //marks everything below as private
    std::string name; //this and age are going to be private. everything by default are private
    int age;

public: //now everything is going to be public. the private ended
    Person(std::string name, int age); //parameterized constructor. asking for parameters
    Person(); //this is a default contstructor that tells us we are asking for a person but not asking for parameters yet/initalize
    std::string getName() const; //the const means that the class is read only while we're in this method. wouldnt be able to change the name
    void setName(std::string name);
    int getAge();
    void setAge(int age);
    void greet();
};


int main() {
    Person p("Cristian Alvarez", 28);
    std::cout << "Hello CSCI 201!" << std::endl;
    std::cout << "My name is" << std::endl;
    p.greet();
    return 0;
}

std::string Person::getName() const { //need to do this when implementing a function//also need to add a const here since there is as const up there too
    return name;
}

void Person::setName(std::string n)
{
    name = n;
}

int Person::getAge()
{
    return age;
}

void Person::setAge(int a)
{
    if (a >= 0)
        age = a;
    else
        age = 0;
}

void Person::greet()
{
    std::cout << "Hello CSCI 201!" << std::endl;
    std::cout << "My name is " << name <<  std::endl;
}

Person::Person(std::string n, int a) {
    setName(n);
    setAge(a);
}