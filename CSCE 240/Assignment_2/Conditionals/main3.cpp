/* 
 * File:   main1.cpp
 * Author: homayoun
 * Furnction: determine if an input integer number is between 1-10, 11-20, or larger
 * Input: one integer number equal or larger than 1
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
        
        cout << "Enter an integer: ";
        cin >> anInt1;
        
        if((anInt1 >= 1) && (anInt1 <= 10)) {
            cout << "1 <= " << anInt1 << " <= 10" << endl;
        } else if((anInt1 >=11) && (anInt1 <= 20)) {
            cout << "11 <= " << anInt1 << " <= 20" << endl;
        } else {
		cout << "20 < " << anInt1 << endl;
	}
        //Extend this program to 3 parameters and demonstrated logical conditionals


    return 0;
}

