//
// Created by cotea on 10/23/2025.
//
#ifndef DEBUG_H
#define DEBUG_H
#include <iostream>

#ifdef DEBUG
inline void debugMessage(const std::string &msg)
{
    std::cout << "DEBUG: " << msg << std::endl;
}
#else
inline void debugMessage(const std::string &) {}
#endif

#endif
