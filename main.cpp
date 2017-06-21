//
//  main.cpp
//  Oversized Pancake Flipper
//  Code Jam Qualification Round 2017 Problem A.
//  Created by Neal Matta on 6/21/17.
//

#include <iostream>  // includes cin to read from stdin and cout to write to stdout
using namespace std;  // since cin and cout are both in namespace std, this saves some text
int main() {
    
    int round;
    string pancakes;
    int flipper_size;
    
    cin >> round;
    
    for (int i = 0; i < round; i++){
        int amount_of_flips= 0;
        bool impossible = false;
        
        cin >> pancakes >> flipper_size;
        
        for (int j = 0; j < pancakes.size(); j++){
            if (pancakes[j] == '-'){ // Blank face pancake is found
                
                if (j + flipper_size <= pancakes.size()){ // Flipper fits on the grill
                    for (int x = 0; x < flipper_size; x++){
                        if (pancakes[j + x] == '-') { pancakes[j + x] = '+'; }
                        else { pancakes[j + x] = '-'; }
                    }
                    
                    amount_of_flips++; // Increments how many flips
                }
                
                else { // if a blank face pancake is found and it's not possible to flip it
                    impossible = true;
                }
            }
        }

        cout << "Case #" << i+1 << ": ";
        
        if (!impossible) {cout << amount_of_flips;}
        else { cout << "IMPOSSIBLE"; }
        
        cout << endl;
        
    }
    
    return 0;
}
