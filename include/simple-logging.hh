#ifndef SIMPLELOGGING_H
#define SIMPLELOGGING_H

#include <chrono>
#include <iostream>
#include <ratio>
#include <string>

unsigned long long int log_milli(std::string input)
{
    unsigned long long int time = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

unsigned long long int log_milli(char* input)
{
    return log_milli(std::string(input));
}

unsigned long long int log_micro(std::string input)
{
    unsigned long long int time = std::chrono::duration_cast< std::chrono::microseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

unsigned long long int log_micro(char* input)
{
    return log_micro(std::string(input));
}

unsigned long long int log_nano(std::string input)
{
    unsigned long long int time = std::chrono::duration_cast< std::chrono::nanoseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    ).count();

    std::cout << "[" << time << "] " << input << std::endl;

    return time;
}

unsigned long long int log_nano(char* input)
{
    return log_nano(std::string(input));
}

#endif

