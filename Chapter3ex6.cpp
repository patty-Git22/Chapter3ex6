/*
Title: Chapter 3 exercise 6 - Ingredient Adjuster
File Name: Chapter3ex6.cpp
Programmer: Patrick Maloon
Date: 10/10/2024

Requirements: 
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make,
then displays the number of cups of each ingredient needed for that specific number of cookies.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cookies, sugar, butter, flour, makes;

    cout << "How many cookies do you want to make? ";
    cin >> cookies;

    makes = cookies / 48;

    sugar = makes * 1.5;
    butter = makes * 1;
    flour = makes * 2.75;

    cout << endl;

    cout << "to make " << cookies << " cookies, you need:" << endl
        << setprecision(2) << fixed
        << "Sugar: " << sugar << " cup(s)" << endl
        << "Butter: " << butter << " cup(s)" << endl
        << "Flour: " << flour << " cup(s)";
    return 0;
}