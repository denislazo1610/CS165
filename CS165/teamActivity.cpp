/**********************************************************************
 * File: ta03.cpp
 * Author: Br. Burton
 *
 * Description: Use this file as a starting point for Team Activity 03.
 *    You do not need to "submit" your code, but rather, answer the
 *    questions in the I-Learn assessment.
 **********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

/***********************************************************************
 * Struct: Scripture
 * Description: Holds the reference to a scripture (book, chapter, verse
 ***********************************************************************/
struct Scripture
{
   string book;
   int chapter;
   int verse;
};

/***********************************************************************
 * Function: display
 * Description: Displays the passed scripture.
 ***********************************************************************/
void display(const Scripture &scripture)
{
   cout << scripture.book << " ";
   cout << scripture.chapter << ":";
   cout << scripture.verse;
}

int readFile(string fileName, string &line)
{
    ifstream fin(fileName);

    if(fin.fail())
    {
        cout << "Error reading file";
        return -1;
    }
    
    int count = 0;

    string book[365];
    int chapter[365];
    int verse[365];

    Scripture scripture;

    while(getline(fin, line))
    {
        
        stringstream ss(line);

        ss >> book[count];
        ss >> chapter[count];
        ss >> verse[count];


        scripture.book = book[count];
        scripture.chapter = chapter[count];
        scripture.verse = verse[count];

        display(scripture);
        cout << endl;

        count++; 
    }


    fin.close();

    return count;
}


/***********************************************************************
 * Function: main
 * Description: The driver for the program.
 ***********************************************************************/
int main()
{
   // Insert your code here to prompt for the name of a file
   // and pass it to a readFile function
    cout << "File to read : ";
    string fileName;
    string lines;
    cin >> fileName;

    readFile(fileName, lines);

    cout << "lol" << endl;

    
   

   return 0;
}
