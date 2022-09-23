// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Sep. 22, 2022
// This program calculates the area and perimeter of a rectangle
// With dimensions specified by the user

#include <iostream>

int main() {
    // Initializes length and width variables
    float length;
    float width;

    // asks user for length and width of the rectangle
    std::cout << "What is the length of your rectangle? ";
    std::cin >> length;
    std::cout << "\nWhat is the width of your rectangle? ";
    std::cin >> width;

    // outputs result
    std::cout << "\nIf a rectangle has the dimensions:" << std::endl;
    std::cout << length << "unit * " << width << "unit\n"
              << std::endl;
    std::cout << "Then its area should be:" << std::endl;
    std::cout << (length * width) << "unit²\n"
              << std::endl;
    std::cout << "and its perimeter should be:" << std::endl;
    std::cout << (2 * (length + width)) << "unit" << std::endl;
}
