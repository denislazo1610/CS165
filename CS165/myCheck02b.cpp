/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Comeau, CS165
* Author:
*    your name
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
    double real;
    double imaginary;
};

// TODO: Add your prompt function here

void prompt(Complex &number)
{
    cout << "Real: ";
    cin >> number.real;

    cout << "Imaginary: ";
    cin >> number.imaginary;

}
// TODO: Add your display function here
void display(const Complex sum)
{
    cout << sum.real << " + " << sum.imaginary << "i";

    return;
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/



Complex addComplex(const Complex & x, const Complex & y)
{
   // TODO: Fill in the body of the add function

    Complex sum;
    sum.real = x.real + y.real;
    sum.imaginary = x.imaginary + y.imaginary;


    return sum;
}




/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
    Complex c1;
    Complex c2;

   // Call your prompt function twice to fill in c1, and c2 
    prompt(c1);
    prompt(c2);

   // Declare another Complex for the sum
    Complex sum = addComplex(c1 , c2);

   // Call the addComplex function, putting the result in sum;

   
   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;
 
   return 0;
}


