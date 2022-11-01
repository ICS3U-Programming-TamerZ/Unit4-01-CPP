// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Oct.26, 2022
// This program outputs the sum of all numbers preceding the user's
// number using a while loop.

#include <iostream>
#include <string>

int main() {
    // Initializing variables
    int counter = 0;
    int userInt;
    int sum = 0;
    std::string userStr, wait;

    // Gets the user's number
    std::cout << "Enter a non-negative integer: \n";
    std::cout << ">> ";
    std::cin >> userStr;

    // Tries casting the user's number to an integer
    try {
        userInt = std::stoi(userStr);
        // Exception thrown if the user did not enter a number.
    } catch (const std::exception) {
        std::cout << "You did not enter a number.\n";
        std::cout << "Please try again";
        std::cin >> wait;
    }

    // Tells the user to restart the program if they entered a negative number.
    if (userInt < 0) {
        std::cout << "You must enter a positive integer.\n";
        std::cout << "Please try again\n";
        std::cin >> wait;

        // Code executed if user entered a number
    } else {
        while (userInt >= counter) {
            sum = sum + counter;
            std::cout << "Looped through " << counter << " times.\n\n";
            counter++;
        }
        std::cout << "The sum of the consecutive positive integers preceding ";
        std::cout << userInt << " is " << sum << ".\n";
    }
}
