/*
 * Array.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: Kimberly
 */

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <array>
using namespace std;

#ifndef NULL
#define NULL   ((void *) 0)
#endif
void fillArray(int arrayList, int arraySize);
void printArray(int arrayList,int arraySize);
void reverseList(int arrayList, int arraySize);
int sortArray(int arrayList, int arraySize);
int averageComp();

int main(){
	srand(time(NULL));
	int arraySize = rand() % 30 + 20; //create a random number for the array size
	int arrayList[arraySize]; //create and array list using array size


	void fillArray(int arrayList,int arraySize);
	return 0;
}

void fillArray(int arrayList, int arraySize){ //fill array with numbers in between -50 and 50
	int i;
	for (i = 0; i < arraySize; i++) {
		int randNum = rand()%100 -50;
	    arrayList[i] = randNum;
	}

}
void printArray(int arrayList,int arraySize){ //prints each value of array
	int i;
	for (i=0; i < arraySize; i++){
		cout<<"Value of array: "<<arrayList[i];
	}
}

void reverseList(int arrayList, int arraySize){//reverses array
	int start = arrayList[0];
	int end = arrayList[arraySize];

    int temp;
    while (start < end)
    {
        temp = arrayList[start];//switches the first and last elements
        arrayList[start] = arrayList[end];
        arrayList[end] = temp;
        start++;
        end--;
    }
}

int findMin(int arrayList, int arraySize){//finds min value in array
	int smallest = arrayList[0] ;
	    for ( int i=1;  i < sizeof(arrayList)/sizeof(arrayList[0]); ++i )
	        if ( arrayList[i] < smallest )
	             smallest = arrayList[i] ;

	    cout << smallest << '\n' ;

	    return smallest;
	}

int findSum(int arrayList, int arraySize){//finds sum of all of the integers in the array
	int i;
	int sum = 0;
	for(i=0; i<arraySize; i++){
		if (arrayList[i]<arraySize){
			return sum+arrayList[i];
		}
		else{
			findSum(arrayList, arraySize-1);
		}
	}
	return sum;
}

int sortArray(int arrayList, int arraySize){ //sorts an array, counts number of comparisons
	int comparisons = 0;
	int i;
	int j;
	int temporary;
	for (i=0; i<arraySize;i++){//for the first element
		for (j=(i+1); j < arraySize; j++){//comparing to all of the other elements
			if (arrayList[i]>arrayList[j]){
				temporary=arrayList[i];
				arrayList[i]=arrayList[j];
				arrayList[j]=arrayList[i];
			}
			comparisons++;//adds to number of comparisons
		}
	}
	return comparisons;
}
int averageComp(){
	int arrayList1 = main();//creates arrays
	int arrayList2 = main();
	int arrayList3 = main();

	int comp1 = sortArray(arrayList1, sizeof(arrayList1));//sorts arrays
	int comp2 = sortArray(arrayList2, sizeof(arrayList2));
	int comp3 = sortArray(arrayList3, sizeof(arrayList3));

	int average = (comp1 + comp2 +comp3)/3;//finds average comparisons of arrays

	return average;
}

