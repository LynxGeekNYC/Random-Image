#include <iostream>
#include <Windows.h>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // seed the random number generator
    while (true) {
        int random_image = std::rand() % 3; // generate a random number between 0 and 2
        std::string image_path;
        if (random_image == 0) {
            image_path = "image1.jpg";
        } else if (random_image == 1) {
            image_path = "image2.jpg";
        } else {
            image_path = "image3.jpg";
        }
        std::string command = "start " + image_path; // create the command to open the image
        system(command.c_str()); // execute the command
        Sleep(10800000); // sleep for 3 hours (3 * 60 * 60 * 1000)
    }
    return 0;
}
