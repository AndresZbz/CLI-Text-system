//header files
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

void textSystem(const std::string& text, int delay) {
    for( char c : text ) {
        std::cout << c << std::flush;
        //ralentize the for loop for every delay (50, 100...) milliseconds time
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}


void showText() {
    system("clear");

    std::string msg = "This is a test for this console text system,\nthis can be used for projects like games or any other type,\nstill working on improving this. Like reading from a file instead of variables :)";
    textSystem(msg, 50);
    
}
