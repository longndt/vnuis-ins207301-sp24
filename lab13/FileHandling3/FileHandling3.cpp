#include <iostream>
#include <fstream>

struct Data {
    int id;
    char name[50];
    double score;
};

int main() {
    Data data[5] = {
        {1, "Alice", 95.5},
        {2, "Bob", 88.0},
        {3, "Charlie", 92.3},
        {4, "Diana", 85.4},
        {5, "Eve", 90.2}
    };

    // Open a binary file for writing
    std::ofstream outFile("D:\\data.bin", std::ios::binary);

    if (outFile.is_open()) {
        // Write each Data structure to the binary file
        for (int i = 0; i < 5; ++i) {
            outFile.write(reinterpret_cast<char*>(&data[i]), sizeof(Data));
        }
        outFile.close();
        std::cout << "Data written to file successfully." << std::endl;
    }
    else {
        std::cerr << "Failed to open file for writing." << std::endl;
    }

    return 0;
}
