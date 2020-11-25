// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Perimeter and area of a rectangle with user inputs

#include <iostream>

int main() {
    // This program calculates the circumference of a circle
    // Using tau and user inputs

    int radius;
    double circumference;
    const double TAU = 6.28;

    std::cout << "I find the circumference of a circle using Tau!" << std::endl;

    // Input
    std::cout << "Please enter the radius (mm): ";
    std::cin >> radius;

    // Process
    circumference = radius * TAU;

    // Output
    std::cout << "The circumference is " << circumference << "mm" << std::endl;
}
