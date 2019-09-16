/* 
 * Brian Remer
 * Assignment 3
 * September 9, 2019
 *
 */

#include <iostream>

using namespace std;

//function prototypes
float mySin(double degrees, int iterations);
float myCos(float degrees, int iterations);
double myPow(float base, int exponent);
double myFactorial(int fact);
void mySinCos(float degrees, int iterations);
void printFunction();

//main method
int main(int argc, char** argv) {
	printFunction();
	
	
    return(0);
}

//power function
double myPow(float base, int exponent){
	double result = 1;
	if(exponent == 0)
		return 1;
	for(int i = 0; i < exponent; i++){
		result *= base;
	}
	return result;
}

//factorial function
double myFactorial(int fact){
	if(fact == 0)
		return(1);
	else{
		fact*= myFactorial(fact - 1);
	}
}

//sin function
float mySin(double degrees, int iterations){
	float result(0);
	double radians = degrees*(3.14159265/180);
	for(int i = 1; i <= iterations; i++){
		result = result + (((myPow(-1,(i-1)))/myFactorial(((2*(i-1)) + 1)))*(myPow(radians, ((2*(i-1)) + 1))));	
	}
	return result;
}

//cos function
float myCos(float degrees, int iterations){
	float result(0);
	float radians = ((degrees/180)*3.14159265);
	for(int i = 1; i <= iterations; i++){
		result = result + (((myPow(-1,(i-1)))/myFactorial(((2*(i-1)))))*(myPow(radians, ((2*(i-1))))));
	}
	return result;
}

//sin and cos function
void mySinCos(float degrees, int iterations){
	cout << "sin(" << degrees << ") = " << mySin(degrees, iterations) << endl;
	cout << "cos(" << degrees << ") = " << myCos(degrees, iterations) << endl;
}

//input and output function
void printFunction(){
	float degrees(0);
	int iterations(0);

	cout << "Please enter an angle (in degrees) and the number of terms: " << endl;
	cin >> degrees >> iterations;
	 
	mySinCos(degrees, iterations);

}
