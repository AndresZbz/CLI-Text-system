#include <iostream>
#include "Text.cpp"

//I preferred making a custom C++ file for the text system instead of doing it on the main file.
int main() {
    system("clear");
    std::string filename = "./texts.csv";

    textSystem(filename, 50, 1);
    textSystem(filename, 50, 2);

    return 0;
}
