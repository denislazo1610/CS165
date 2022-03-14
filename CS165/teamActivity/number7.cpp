#include <iostream>
using namespace std;

// Core requirements
float getValueFromPointer(float* thePointer)
{
    float value = *thePointer;
    return value;
}

float* getMinValue(float* a, float* b)
{

    if(a > b)
    {
    return b;
    }
    else 
    return a; 
}

// Stretch goals
void swapElements(float* theArray[], int a, int b);
void sortArray(float* theArray[]);

int main()
{  
     // Core Requirement 1
   int arraySize;
   cout << "Enter the array size: ";
   cin >> arraySize;

   // Allocate your array(s) here

   float * array = new float[arraySize];

   // Fill your array with float values
   for(int i = 0; i < arraySize; i++) 
   {
          cout << "Enter a float value: ";
          cin >> array[i];
   }

    // Core Requirement 2
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(array + i);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }
   

   // Core Requirement 3
   // Print the smaller of the first and last elements of the array
   float *pointerToMin = getMinValue(array, array + arraySize);
   cout << *pointerToMin << endl;
   

   // Clean up your array(s) here

    delete [] array;


   return 0;
}

