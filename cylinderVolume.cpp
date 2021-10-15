// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>

float calculateVolume(float radius, float height) {
    // This function calculatest he volume of a cylinder
    float volume = M_PI * pow(radius, 2) * height;
    return volume;
}

int main() {
    // This function is the main function
    float radiusInput;
    float heightInput;
    float volume;
    std::string radiusInputString;
    std::string heightInputString;

    std::cout << "This program calculates the volume of a cylinder."
    << std::endl;
    std::cout << "Please enter the radius and height.\n" << std::endl;

    // input
    std::cout << "The radius is (mm): ";
    std::cin >> radiusInputString;
    std::cout << "The height is (mm): ";
    std::cin >> heightInputString;

    // process
    try {
        radiusInput = std::stof(radiusInputString);
        heightInput = std::stof(heightInputString);

        volume = calculateVolume(radiusInput, heightInput);

        printf(
            "\nThe volume of a cylinder with radius of %.f"
            " mm and height of %.f mm is %.1f mm³.",
            radiusInput, heightInput, volume);
    } catch (...) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\n\nDone." << std::endl;
}
