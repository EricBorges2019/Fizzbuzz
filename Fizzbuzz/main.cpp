//
//  main.cpp
//  Fizzbuzz
//
//  Created by Eric Borges on 5/11/2020.
//  Copyright © 2020 Eric Borges. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    
    int fizz = 3, buzz = 7;
    for (int i = 1; i <= 100; i++)
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
        
    return 0;
}
