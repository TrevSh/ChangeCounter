// SSBS1_PenniesAndDollars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
double pennies = 0.01;
double nickels = 0.05;
double dimes = 0.10;
double quarters = 0.25;
double half_dollar = 0.50;
double dollar = 1.00;

int main()
{
    char again = 0;
    do {
    int numPennies, numNickels, numDimes, numQuarters, numHalfs;
    std::cout << "\nHow many pennies do you have?\n";
    std::cin >> numPennies;
    std::cout << "How many nickles do you have?\n";
    std::cin >> numNickels;
    std::cout << "How many dimes do you have?\n";
    std::cin >> numDimes;
    std::cout << "How many quarters do you have?\n";
    std::cin >> numQuarters;
    std::cout << "How many half dollars do you have?\n";
    std::cin >> numHalfs;
    
    double value = (pennies * numPennies) + (nickels * numNickels) + (dimes * numDimes) + (quarters * numQuarters) + (half_dollar * numHalfs);
    if (value == 0.01) {
        std::cout << "You have one penny.\n";
    }
    else if (value == 0.05) {
        std::cout << "You have one nickel.\n";
    }
    else if (value == 0.10) {
        std::cout << "You have one dime.\n";
    }
    else if (value == 0.25) {
        std::cout << "You have one quarter.\n";
    }
    else if (value == 0.50) {
        std::cout << "You have one half dollar... Lucky you!\n";
    }
    else if (value <= 1.00) {
        std::cout << "You have " << value << " cents.\n";
    }
    else {
        std::cout << "You have $" << value<<"\n";
    }
    std::cout << "\nAgain? (y/n): ";
    std::cin >> again;
    } while (again == 'y' || again == 'Y');
}
