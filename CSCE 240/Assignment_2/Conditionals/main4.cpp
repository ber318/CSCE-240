/* 
 * File:   main1.cpp
 * Author: homayoun
 * Furnction: do something with an integer if it is 1, 2, 3, or anything else. 
 * Input: one integer number
 * Output:  
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

	if(anInt1 == 1) {
		cout << "Do something useful in the case of 1" << endl;
	} else if(anInt1 == 2) {
		cout << "Do something useful in the case of 2" << endl;
	} else if(anInt1 == 3) {
		cout << "Do something useful in the case of 3" << endl;
	} else {
		cout << "Something else" << endl;
	}
	//Extend this program to 3 parameters and demonstrated logical conditionals


	return 0;
}

