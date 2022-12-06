#include <iostream>

int main() {
    std::string name;
    std::cout << "Please write your name: ";
    std::getline(std::cin, name);

    int space;

    while(true) {
        space = name.find(' ');
        if(space < 0) break;
        name.replace(space, 1, ".");
    }

    std::cout << "Your username is: " << name;

    return 0;
}