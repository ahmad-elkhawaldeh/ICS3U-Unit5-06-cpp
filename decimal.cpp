// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
//  this program rounds off decimal numbers

#include <iostream>

void roundingOff(float *number, int *round) {
    // multiplying the number by 10
    for (int value = 0; value < *round; value++) {
        *number *= 10;
    }

    // divinding by 10 to get the correct value
    for (int value = 0; value < *round; value++) {
        *number /= 10.0;
    }
}

int main() {
    float num;
    int round;
    try {
        cout << "Enter the number you want to round: ";
        cin >> num;
        cout << "Enter how many decimal places you want to round by: ";
        cin >> round;
        roundingOff(&num, &round);
        cout << "\nThe rounded number is " << num;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
}
