/* 
 * Brian Remer
 * Assignment 3
 * September 9, 2019
 *
 */

#include <iostream>

using namespace std;

//function prototypes
double mySin(double degrees, int iterations);
double myCos(double degrees, int iterations);
double myPow(float base, int exponent);
double myFactorial(int fact);
void mySinCos(double degrees, int iterations, double &sin, double &cos);
void printFunction(double &sin, double &cos);

//main method
int main(int argc, char** argv) {

	double sin(0), cos(0);

	printFunction(sin, cos);
	
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
double mySin(double degrees, int iterations){
	double result(0);
	double radians = degrees*(3.14159265/180);
	for(int i = 1; i <= iterations; i++){
		result = result + (((myPow(-1,(i-1)))/myFactorial(((2*(i-1)) + 1)))*(myPow(radians, ((2*(i-1)) + 1))));	
	}
	return result;
}

//cos function
double myCos(double degrees, int iterations){
	double result(0);
	double radians = ((degrees/180)*3.14159265);
	for(int i = 1; i <= iterations; i++){
		result = result + (((myPow(-1,(i-1)))/myFactorial(((2*(i-1)))))*(myPow(radians, ((2*(i-1))))));
	}
	return result;
}

//sin and cos function
void mySinCos(double degrees, int iterations, double &sin, double &cos){
	sin = mySin(degrees, iterations);
	cos = myCos(degrees, iterations);
}

//input and output function
void printFunction(double &sin, double &cos){
	double degrees(0);
	int iterations(0);

	cout << "Please enter an angle (in degrees) and the number of terms: " << endl;
	cin >> degrees >> iterations;
	 
	mySinCos(degrees, iterations, sin, cos);

	cout << "sin(" << degrees << ") = " << sin << endl;
        cout << "cos(" << degrees << ") = " << cos << endl;	

}
