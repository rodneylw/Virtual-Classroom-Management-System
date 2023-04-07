//---------------------------------------------------------------------------

#pragma hdrstop

#include "Assignment.h"
#include <ctime>
#include <chrono>
#include <random>
//---------------------------------------------------------------------------
#pragma package(smart_init)

std::string Assignment::GenerateUniqueAssignmentID() {
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

    // Generate a random number between 1000 and 9999
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1000, 9999);
    int random_number = dist(gen);

    // Concatenate the time-based ID with the random number
    std::string unique_id = "A" + std::to_string(milliseconds) + "_" + std::to_string(random_number);

    return unique_id;
}
