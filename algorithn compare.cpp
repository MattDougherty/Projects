//
// Matt Dougherty
// 9/22/2021
//  
//






#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include <random>
#include<iomanip>
#include <vector>
#include <map>
#include <chrono>
#include <algorithm>

#include <iostream>
using namespace std;

void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Create temp arrays
    auto* leftArray = new int[subArrayOne],
        * rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
   

{
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


void array_gen(int* array, int arraysize) // void function to generate the array with random numbers 
{

    int i;
    for (i = 0; i < arraysize; i++)
    {
        array[i] = rand() % -12 + 8;    // used to generate numbers from 0 to 10 
    }


}

void arraydis(int* array, int arraysize)     // function to sort array 
{
    int i;
    for (i = 0; i < arraysize; i++)
    {

        cout << "\n";
    std:cout << array[i] << " ";
    }

}


int main()
{

    cout << "Hello, and welcome to my algorithm comparer! \n";
    cout<<"\n";
    cout<<"hope you enjoy! \n";
    cout<<endl;

    int choice;

    int arraysize = 0, i, p;
    cout << "Enter the size of array you want to test : ";    // records the users input 
    cin >> arraysize;

    int* array = new int[arraysize], freq[10];
    array_gen(array, arraysize);
    
    int* ar2 = new int[arraysize];

    for (int i = 0; i < arraysize; ++i)
        ar2[i] = array[i];

    cout << "unSorted array is:";      // shows the unsorted array 
    arraydis(array, arraysize);

    cout << endl;
    cout << endl;
    cout << "type 1 for selection sort OR type 2 for merge sort: ";
    cin >> choice;
    cout << endl;


    if (choice == 1) {
        // selection sort
        int i, j, imin;
        auto start = std::chrono::high_resolution_clock::now();

        for (i = 0; i < arraysize - 1; i++) {
            imin = i;   //get index of minimum data
            for (j = i + 1; j < arraysize; j++)
                if (array[j] < array[imin])
                    imin = j;
            //placing in correct position
            swap(array[i], array[imin]);
        }
        auto finish = std::chrono::high_resolution_clock::now();
        cout << "elements sorted with selection sort: \n ";
        for (int i = 0; i < arraysize; i++)
            cout << i + 1 << ":" << array[i] << endl;
        cout << endl;
        cout << "This took ";
        std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count() << "ns";
        cout << " to sort this with this algorithm.\n";
        cout << endl;
    }



    else if (choice == 2) { // merge sort
        auto start = std::chrono::high_resolution_clock::now();
        mergeSort(ar2, 0, arraysize - 1);     //(n-1) for last index
        auto finish = std::chrono::high_resolution_clock::now();
        cout << "elements sorted with merge sort: \n ";
        for (int i = 0; i < arraysize; i++)
            cout << i + 1 << ":" << ar2[i] << endl;
        cout << endl;
        cout << "This took ";
        std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count() << "ns";
        cout << " to sort this with this algorithm.\n";
        cout << endl;
    }

    else {
        cout << "you typed something wrong, restart this program please and try again\n";
        return 0;
    }



    int c2;
    cout << "do you want to see how this compares to the other algorithm?\n";
    cout << "(type 1 for yes OR type 2 to exit):: ";
    cin >> c2;
    cout << endl;

    if (choice ==1 & c2==1 ) {
        auto start = std::chrono::high_resolution_clock::now();
        mergeSort(ar2, 0, arraysize - 1);     //(n-1) for last index
        auto finish = std::chrono::high_resolution_clock::now();
        cout << "elements sorted with merge sort: \n ";
        for (int i = 0; i < arraysize; i++)
            cout << i + 1 << ":" << ar2[i] << endl;
        cout << endl;
        cout << "This took ";
        std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count() << "ns";
        cout << " to sort this with this algorithm.\n";
        cout << endl;

    }
    else if (choice ==2 & c2==1) {
        // selection sort
        int i, j, imin;
        auto start = std::chrono::high_resolution_clock::now();

        for (i = 0; i < arraysize - 1; i++) {
            imin = i;   //get index of minimum data
            for (j = i + 1; j < arraysize; j++)
                if (array[j] < array[imin])
                    imin = j;
            //placing in correct position
            swap(array[i], array[imin]);
        }
        auto finish = std::chrono::high_resolution_clock::now();
        cout << "elements sorted with selection sort: \n ";
        for (int i = 0; i < arraysize; i++)
            cout << i + 1 << ":" << array[i] << endl;
        cout << endl;
        cout << "This took ";
        std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count() << "ns";
        cout << " to sort this with this algorithm.\n";
        cout << endl;
    }
    else if (c2 == 2) {
        cout << endl;
        cout << "GOODBYE!";
        return 0;
    }
    else {
        cout << endl;
        cout << "you typed an invalid input and you will now have to restart this program to continue, sorry!\n";
        
        return 0;
    
    }
    int sc = 0;
    while (sc != 3) {
        cout << "type the number 3 when you are ready to close this screen **Do not type any letters here plz** :(   ";
        cin >> sc;
    }


    return 0;
}