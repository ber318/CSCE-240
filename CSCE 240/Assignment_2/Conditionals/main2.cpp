/* 
 * File:   main1.cpp
 * Author: homayoun
 * Furnction: Determine if two input numbers are both larger than 10
 * Input: two integer numbers
 * Output: Yes if both numbers are larger than 10, No if at least one is not
 * Created on August 21, 2016, 7:43 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

	int anInt1(0); // Need to discuss and enforce the principle of least privilege
	int anInt2(0);
        
        cout << "Enter two integers: ";
        cin >> anInt1 >> anInt2;
        
        cout << "You entered: " << anInt1 << " and " << anInt2 << endl;
        if((anInt1 > 10) || (anInt2 > 10)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        //Extend this program to 3 parameters and demonstrated logical conditionals


    return 0;
}

