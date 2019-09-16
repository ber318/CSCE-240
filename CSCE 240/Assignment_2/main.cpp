/* 
 * Brian Remer
 * Assignment 2
 * September 2, 2019
 *
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

	int anInt1(0);
        unsigned int Mask = (2147483648);

        cout << "Enter an integer number:" << endl;
        cin >> anInt1;
        for(int i =0; i < 32; i++){
		if(Mask & anInt1){
			cout << 1;
		}
		else{
			cout << 0;
		}
		Mask = Mask >> 1;
	}
	cout << endl;

    return 0;
}

