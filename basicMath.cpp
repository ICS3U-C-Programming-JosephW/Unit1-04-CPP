// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Feb. 15, 2025
// This program does basic math.

#include <iostream>
#include <string>
#include <cmath>

int main() {
    /* Creates an array of the string expressions with 
    a size of 7 and the string identifier.*/
    std::string stringExpressions[7] = {
        "43 + 12",  // Addition.
        "22 - 19",  // Subtraction.
        "2 * 19",  // Multiplication.
        "19 / 15",  // Division.
        "4 ^ 3",  // Exponentiation (powers).
        "\u221a12",  // Square Root.
        "99 % 19",  // Modulo.
    };

    /* Creates an array of the numerical expressions 
    with the same size and the float identifier to
    compensate for decimal answers. */
    float numericalExpressions[7] = {
        43 + 12,
        22 - 19,
        2 * 19,
        19.0 / 15.0,  // Add decimal places to avoid integer division.
        pow(4, 3),
        sqrt(12),
        99 % 19,
    };

    /* For loop that iterates over the arrays 
    and combine them to output the equations. */
    for (int i = 0; i < 7; i++) {
        std::cout << stringExpressions[i] << " = "
        << numericalExpressions[i] << std::endl;
    }
}
