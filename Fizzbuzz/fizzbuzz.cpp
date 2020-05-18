//
//  fizzbuzz.cpp
//  Fizzbuzz
//
//  Created by Eric Borges on 5/14/2020.
//  Copyright © 2020 Eric Borges. All rights reserved.
//

#include "fizzbuzz.h"
#include <stdio.h>
#include <iostream>
#include <fstream>



bool LOG = true;
char logYN = 'n';

using std::cout;
using std::endl;
using std::ofstream;
using std::ios;

#define startlog
#ifdef startlog
ofstream log ("fizzbuzz.log", ios::app);
#endif

void fizzbuzz(int end, int fizz, int buzz)
{
    cout << "\nWould you like to log this run to fizzbuzz.log? ";
    std::cin >> logYN;
    if (logYN == 'y' || logYN == 'Y') LOG = true;
    
    if (LOG)
    {
        startlog;
        log << endl << "Fizz = " << fizz << endl;
        log << "Buzz = " << buzz << endl << endl;
    }
    
    for (int i = 1; i <= end; i++)
    {
        if (LOG)
        {
            startlog;
            log << i;
        }
        if (i%fizz == 0) //if remainder of i/fizz is equal to zero
        {
            cout << "fizz";
            log << " is fizz";
        }
        
        if (i%buzz == 0)    //if remainder of i/buzz is equal to zero
        {
        cout << "buzz";
            log << " is buzz";
        }
        if (i%fizz != 0 && i%buzz != 0) cout << i;  //if remainder of i/fizz and i/buzz is not zero
        cout << endl;   //new line
        log << endl;
    }
    log.close();
}

