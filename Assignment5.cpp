// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on May 2022
// This program uses loop to show cos table in radians
#include <iostream>
#include <cmath>

int main() {
    // this function calculates and print the Cos table in radians
    float counter = 0;
    float cosRadians;
    float cosfinal;
    float cosRound;


    for (counter = 0; 181 > counter; counter++) {
        cosRadians = counter * M_PI / 180;
        // for the angle conversion as math.radians().
        cosfinal = cos(cosRadians);

        std::cout.precision(4);

        std::cout << "Cos " << counter << "° : "
                << cosfinal << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
