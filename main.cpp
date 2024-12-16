// Name: Ryan Khieu
// Program Nmae: Timedate practice
// Date: 12/16/24
#include <iostream>
#include <ctime>

int offset;
int answer;

int main() {
    // Get the current time
    time_t timestamp = time(nullptr);
    std::tm* utcTime = gmtime(&timestamp);
    time(&timestamp);
    std::cout << ctime(&timestamp);

    std::cout << std::endl;

    // Get the timezone offset
    std::cout << "Enter the offset of the timezone: ";
    std::cin >> offset;

    // Adjust the time
    time_t offsetTime = timestamp + offset * 3600;
    std::tm* adjustedTime = gmtime(&offsetTime);
    std::cout << "Adjusted time: " << asctime(adjustedTime);

    std::cout << std::endl;

    // Ask the user a question
    std::cout << "What is 2 + 2? ";
    // Start the timer
    time_t start = time(nullptr);
    std::cin >> answer;
    // End the timer
    time_t end = time(nullptr);

    // Check the answer
    if (answer == 4) {
        std::cout << "Correct. It took you " << difftime(end, start) << " seconds to answer." << std::endl;
    }
    else {
        std::cout << "Incorrect. It took you " << difftime(end, start) << " seconds to answer." << std::endl;
    }
    return 0;
}