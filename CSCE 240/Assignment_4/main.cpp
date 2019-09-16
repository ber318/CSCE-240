/*
 * Brian Remer
 * September 16, 2019
 * Assignment 4
 */

#include <iostream>

using namespace std;

/*
 * 
 */

void ReadData(int localArray[], int Size);
void SortData(int localArray[], int Size);
void PrintData(int localArray[], int Size);

int main(int argc, char** argv) {
    
	const int Size = atoi(argv[1]);
	int A1[Size];

	ReadData(A1, Size);
	SortData(A1, Size);
	PrintData(A1, Size);

    return 0;
}

void ReadData(int localArray[], int Size){
	cout << "Input " << Size << " integers." << endl;
	for(int i = 0; i < Size; i++){
		cin >> localArray[i];
	}
}

void SortData(int localArray[], int Size){
	bool swapped = true;
	int temp(0);
	do{
		swapped = false;
		for(int i = 1; i < Size; i++)
		{
			if(localArray[i - 1] > localArray[i])
			{
				temp = localArray[i - 1];
				localArray[i - 1] = localArray[i];
				localArray[i] = temp;
				swapped = true;
			}
		}
	}
	while(swapped);
}

void PrintData(int localArray[], int Size){
	for(int i = 0; i < Size; i++)
	{
		cout << "Array[" << i << "] = " << localArray[i] << endl;
	}
}



