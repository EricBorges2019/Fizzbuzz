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

using std::cout;
using std::endl;

void fizzbuzz(int end, int fizz, int buzz)
{
    
    for (int i = 1; i <= end; i++)
    {
        if (i%fizz == 0)    //if remainder of i/fizz is equal to zero
        cout << "fizz";
        
        if (i%buzz == 0)    //if remainder of i/buzz is equal to zero
        {
        cout << "buzz";
        }
        if (i%fizz != 0 && i%buzz != 0) cout << i;  //if remainder of i/fizz and i/buzz is not zero
        cout << endl;   //new line
    }
}
