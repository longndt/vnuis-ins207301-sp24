#include <iostream>
#include <fstream>

struct Data {
    int id;
    char name[50];
    double score;
};

int main() {
    Data data[5];

    // Open a binary file for reading
    std::ifstream inFile("D:\\data.bin", std::ios::binary);

    if (inFile.is_open()) {
        // Read each Data structure from the binary file
        for (int i = 0; i < 5; ++i) {
            inFile.read(reinterpret_cast<char*>(&data[i]), sizeof(Data));
        }
        inFile.close();

        // Output the data
        for (int i = 0; i < 5; ++i) {
            std::cout << "ID: " << data[i].id << std::endl;
            std::cout << "Name: " << data[i].name << std::endl;
            std::cout << "Score: " << data[i].score << std::endl;
            std::cout << std::endl;
        }
    }
    else {
        std::cerr << "Failed to open file for reading." << std::endl;
    }

    return 0;
}
