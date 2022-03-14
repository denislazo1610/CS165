/***********************************************************************
* Program:
*    Checkpoint 04a, Classes  
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
class Book
{
    private:

    string title;
    string author;

    public:

    void prompt();
    void display();
};

void Book::prompt()
{
    cout << "Title: ";   
    getline(cin, title);

    cout << "Author: ";
    getline(cin, author);
    

    return;
}

void Book::display()
{
    cout << "\"" << title << "\" "
         << "by "  << author << endl;

    return;
}




int main()
{
   Book book;

   book.prompt();
   book.display();

   return 0;
}
