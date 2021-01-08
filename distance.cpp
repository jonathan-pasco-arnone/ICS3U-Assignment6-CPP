// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on January 2021
// This program removes a specified amount of decimals form a specified number

#include <iostream>
#include <cmath>

float calculator(float x1, float y1, float x2, float y2) {
    // # This function calculates the distance of 2 points on a plane

    float distance;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return distance;
}

main() {
    /* This function gathers inputs and places them into the
    designated functions */

    std::string x_1_str;
    std::string y_1_str;
    std::string x_2_str;
    std::string y_2_str;
    int x_1;
    int y_1;
    int x_2;
    int y_2;
    float finalDistance;

    std::cout << "" << std::endl;
    std::cout << "The formula for distance is d=√((x_2-x_1)²+(y_2-y_1)²)."
          " With the x_1 and y_1 being coordinate 1. And the x_2 and y_2 bein"
          "g coordinate 2. Please enter the coordinates in cm." << std::endl;
    std::cout << "" << std::endl;

    while (1) {
        try {
            std::cout << "" << std::endl;
            std::cout << "x_1: ";
            std::cin >> x_1_str;
            std::cout << "" << std::endl;
            std::cout << "y_1: ";
            std::cin >> y_1_str;
            std::cout << "" << std::endl;
            std::cout << "x_2: ";
            std::cin >> x_2_str;
            std::cout << "" << std::endl;
            std::cout << "y_2: ";
            std::cin >> y_2_str;

            x_1 = std::stoi(x_1_str);
            y_1 = std::stoi(y_1_str);
            x_2 = std::stoi(x_2_str);
            y_2 = std::stoi(y_2_str);
            break;
        } catch (std::invalid_argument) {
            std::cout << "" << std::endl;
            std::cout << "Please enter valid integers" << std::endl;
            std::cout << "" << std::endl;
        }
    }
    finalDistance = calculator(x_1, y_1, x_2, y_2);
    std::cout << "" << std::endl;
    std::cout << "The distance between (" << x_1 << "," << y_1 << ") and"
          " (" << x_2 << "," << y_2 << ") is "
          << finalDistance << "cm." << std::endl;
}
