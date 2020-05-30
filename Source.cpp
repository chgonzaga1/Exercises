#include<iostream>
using namespace std;
void fillMyArray(int list[], int listSize);
void printArray(const int list[],int listSize);
void selectionSort(int list[],int listSize);
void sumFinder(int list[],int listSize);


int main()
{
	const int arraySize = 15;
	int arrayList[arraySize];
	cout << "Hello world!" << endl;
	fillMyArray(arrayList, arraySize);
	cout << "Now the program is going to print the array " << endl;
	cout << "\n";
	printArray(arrayList, arraySize);
	//activate selection sort function
	cout<<"\n";
	cout << "Now Printing with Selection sort";
	selectionSort(arrayList, arraySize);
	printArray(arrayList, arraySize);
	//heelo worldas
	sumFinder(arrayList, arraySize);


	return 0;
}

void fillMyArray(int list[], int listSize)
{
	cout << "Please store 15 numbers into an array: " << endl;
	for (int index = 0; index < listSize; index++)
		cin >> list[index];
}





void printArray(const int list[],int listSize)
{

	cout << "----Printing Arrays---- \n";
	for (int index = 0; index < listSize; index++)
		cout << list[index] << " ";


}

void selectionSort(int list[], int listSize)
{
	int index;
	int smallestIndex;
	int location;
	int temp;

	for (index = 0; index < listSize - 1; index++)
	{

		//step 1
		smallestIndex = index;
		for (location = index + 1; location < listSize; location++)
			if (list[location] < list[smallestIndex])
				smallestIndex = location;

		//step 2
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;


	}


}



void sumFinder(int list[], int listSize)
{

	
	for (int i = 0; i < listSize; i++)
	{
		cout << "array[" << i << "] = " << list[i] << " is the sum of: ";
		for (int j = 0; j < listSize; j++)
			for (int k = j + 1; k < listSize; k++)
				if (list[i] == list[j] + list[k])
					cout << "array[" << j << "], array[" << k << "]; ";
		cout << endl;
		cout << "----------------------" << endl;;
	}


}
