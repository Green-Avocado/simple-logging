#ifndef SIMPLELOGGING_H

#include <chrono>
#include <iostream>
#include <ratio>
#include <string>

long int log_milli(std::string input)
{
    long int time = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

long int log_milli(char* input)
{
    long int time = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

long int log_micro(std::string input)
{
    long int time = std::chrono::duration_cast< std::chrono::microseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

long int log_micro(char* input)
{
    long int time = std::chrono::duration_cast< std::chrono::microseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

long int log_nano(std::string input)
{
    long int time = std::chrono::duration_cast< std::chrono::nanoseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

long int log_nano(char* input)
{
    long int time = std::chrono::duration_cast< std::chrono::nanoseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

#endif

