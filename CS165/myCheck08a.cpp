/***********************************************************************
* Program:
*    Checkpoint 08a, Inheritance
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your Book class here

class Book
{
    public:

    Book()
    {
        title = "";
        author = "Unknown";
        publicationYear = 0;
    }


    // methods

    void promptBookInfo()
    {
        cout  << "Title: ";
        getline(cin, title);

        cout << "Author: ";
        getline(cin, author);

        cout << "Publication Year: ";
        cin >> publicationYear;
        cin.ignore();
    }

    void displayBookInfo()
    {
        cout << endl;
        cout << title << " (" << publicationYear << ") by " << author << endl;
    }


    private:

    string title;
    string author;
    int publicationYear;

};

// TODO: Define your TextBook class here

class Textbook : public Book
{
    private:
    string subject;


    public:

    Textbook() : Book()
    {
        subject = "";
    }

    
    // methods

    void prompSubject()
    {
        cout << "Subject: ";
        getline(cin, subject);
    }

    void displaySubject()
    {
        Book::displayBookInfo();

        cout << "Subject: " << subject << endl;
    }
};

// TODO: Add your PictureBook class here

class PictureBook : public Book
{

    private:

    string illustrator;

    public:

    PictureBook() : Book()
    {
        illustrator = "";
    }

    void promptIllustrator()
    {
        cout << "Illustrator: ";
        getline(cin, illustrator);
    }

    void displayIllustrator()
    {
        Book::displayBookInfo();

        cout << "Illustrated by " << illustrator << endl;
    }

};


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare a Book object here and call its methods
   Book book;
   book.promptBookInfo();
   //cin.ignore();
   book.displayBookInfo();


   // Declare a TextBook object here and call its methods
    Textbook textbook;
    cout << endl;

    textbook.promptBookInfo();
    //cin.ignore();
    textbook.prompSubject();
    textbook.displaySubject();

   // Declare a PictureBook object here and call its methods
    PictureBook picture;
    cout << endl;

    picture.promptBookInfo();
    picture.promptIllustrator();
    picture.displayIllustrator();


   return 0;
}


