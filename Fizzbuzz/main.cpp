//
//  main.cpp
//  Fizzbuzz
//
//  Created by Eric Borges on 5/11/2020.
//  Copyright © 2020 Eric Borges. All rights reserved.
//

#include <iostream>
#include <thread>
#include "fizzbuzz.h"

using std::cout;
using std::cin;
using std::endl;
using std::thread;




int main() {
    char Mode = 's', Continue = 'y';
    int max = 1, fizz = 3, buzz = 5;
    
    cout << "Welcome to the Fizzbuzz program!";
    while (Continue == 'y' || Continue == 'Y')
    {
        cout << "\nWhat mode would you like to use?\n";
        
        cout << "\n(S)tandard: Fizz = 3, Buzz = 5\n";
        cout << "\nOr set (C)ustom Fizz/Buzz values\n";
        cin >> Mode;
        
        cout << "\nHow far do you want Fizzbuzz to go? ";
        cin >> max;
        
        if (Mode == 's' || Mode == 'S')
            {
                fizz = 3; buzz = 5;
                thread alpha(fizzbuzz, max, 3, 5);
                alpha.join();
            }
        else if (Mode == 'c' || Mode == 'C')
        {
            cout << "What values do you want for Fizzbuzz?\n";
            cout << "Fizz: ";
            cin >> fizz;
            cout << "Buzz: ";
            cin >> buzz;
            //fizzbuzz(max, fizz, buzz);
            thread bravo(fizzbuzz, max, fizz, buzz);
            bravo.join();
        }
        else cout << "Wrong input!";
        
        cout << "\nGo again? \n";
        cin >> Continue;
            
    }
    
    
    
    
    
    return 0;
}

