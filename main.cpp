#include <iostream>
#include <ctime>

int main() {
    time_t timestamp = time(nullptr);
    time(&timestamp);
    std::cout << ctime(&timestamp);
}