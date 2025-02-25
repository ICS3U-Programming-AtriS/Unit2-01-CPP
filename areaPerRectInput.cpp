// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: Feb 24, 2025
// Calculator for the area and perimeter of a rectangle

#include <iostream>

// Text Effects
// NOTE: I was originally using std::string but cpplint didn't like that
const char BLUE[] = "\033[0;34m";
const char GREEN[] = "\033[0;32m";
const char BOLD_W[] = "\033[1m";     // BOLD WHITE
const char BOLD_C[] = "\033[1;36m";  // BOLD CYAN
const char BOLD_P[] = "\033[1;35m";  // BOLD PURPLE
const char WHITE[] = "\033[0m";      // Default Effect
const char SUP_2[] = "\u00b2";       // Squared Symbol (^2);

int main() {
    // Input Variables
    double length;
    double width;

    // INPUT
    std::cout << BOLD_W;
    std::cout << "[#]Enter the Dimensions of the Rectangle:" << std::endl;
    // Get Length of Rectangle
    std::cout << BLUE << "[##]Enter length (cm): " << WHITE;
    std::cin >> length;
    // Get Width of Rectangle
    std::cout << GREEN << "[##]Enter width (cm): " << WHITE;
    std::cin >> width;

    // PROCESS
    // Calculate the Area of the Rectangle
    double area = length * width;
    // Calculate the Perimeter of the Rectangle
    double perimeter = 2 * (length + width);

    // OUTPUT
    // Display the Area
    std::cout << BOLD_C;
    std::cout << "[###]The area of the rectangle is ";
    std::cout << area << "cm" << SUP_2 << std::endl;
    // Display the Perimeter
    std::cout << BOLD_P;
    std::cout << "[###]The perimeter of the rectangle is ";
    std::cout << perimeter << "cm" << std::endl;

    // WHITESPACE FOR OUTPUT
    std::cout << WHITE << std::endl;
}
