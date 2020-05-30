#include <chrono>
#include <ctime>
#include <iostream>
#include <string>

std::chrono::system_clock::time_point simplelog(std::string input)
{
    std::chrono::system_clock::time_point time = std::chrono::system_clock::now();

    std::time_t tt = std::chrono::system_clock::to_time_t(time);

    std::cout << ctime(&tt) << " " << input << std::endl;

    return time;
}

