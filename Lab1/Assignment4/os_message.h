#ifndef OS_MESSAGE_H
#define OS_MESSAGE_H
#include <iostream>

inline void printOSMessage() {
#if defined(_WIN32) || defined(_WIN64)
    std::cout << "Hello Windows" << std::endl;
#elif defined(__linux__)
    std::cout << "Hello Linux" << std::endl;
#else
    std::cout << "Hello Unknown OS" << std::endl;
#endif
}

#endif

