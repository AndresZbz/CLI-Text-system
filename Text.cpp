//header files
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <chrono>
#include <thread>

void textSystem(const std::string& filename, int delay, int row) {
    std::ifstream file(filename);
    std::string line;
    int crow = 0;

    while(std::getline(file, line)) {
        crow++;
        if( crow == row) {
            for( char c : line ) {
                std::cout << c << std::flush;
                //ralentize the for loop for every delay (50, 100...) milliseconds time
                std::this_thread::sleep_for(std::chrono::milliseconds(delay));
            } 

            std::cout << std::endl;
            break;
        }
    }
    
}