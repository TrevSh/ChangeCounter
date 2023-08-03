// SSBS1_PenniesAndDollars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
double pennies = 0.01;
double nickles = 0.05;
double dimes = 0.10;
double quarters = 0.25;
double half_dollar = 0.50;
double dollar = 1.00;

int main()
{
    char again;
    do {
    int numPennies, numNickles, numDimes, numQuarters, numHalfs;
    std::cout << "How many pennies do you have?\n";
    std::cin >> numPennies;
    std::cout << "How many nickles do you have?\n";
    std::cin >> numNickles;
    std::cout << "How many dimes do you have?\n";
    std::cin >> numDimes;
    std::cout << "How many quarters do you have?\n";
    std::cin >> numQuarters;
    std::cout << "How many half dollars do you have?\n";
    std::cin >> numHalfs;
    
    double value = (pennies * numPennies) + (numNickles + nickles) + (numDimes + dimes) + (numQuarters + quarters) + (numHalfs + half_dollar);
    if (value <= 1.00) {
        std::cout << "You have " << value << " pennies.\n";
    }
    else {
        std::cout << "You have $" << value<<"\n";
    }
    std::cout << "Again? (y/n): ";
    std::cin >> again;
    } while (again == 'y' || again == 'Y');
}
