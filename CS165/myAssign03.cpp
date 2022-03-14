/***********************************************************************
* Program:
*    Assignment 03, Digital Forensics with Corrupt files  
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Basically this program is supposed to read informationn
*    from a file. Rejecting the ones with error, and showing
*    the right ones with the limits that the user put
*    
*
*    Estimated:  3.0 hrs   
*    Actual:     2.0 hrs
*    The hardest part was to use stringstream
************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

struct AccessRecord
{
   string username;
   string filename;
   int timestamp;
};

int readFile(string fileName, string line[], AccessRecord fileData[])
{
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout <<  "Error reading file";
      return -1;
   }

   int count = 0;
    

   string userName;
   string filename;
   int timeStamp;



   while (getline(fin, line[count]))
   {
        
      stringstream ss(line[count]);

      ss >> filename;
      ss >> userName;
      ss >> timeStamp;

      if (ss.fail())
      {
         cout << "Error parsing line: " << line[count] << endl;
         line[count] = false;

      }
      else if (timeStamp > 9999999999 || 
                 timeStamp < 1000000000)
      {
         cout << "Error parsing line: " << line[count] << endl;
         line[count] = false;
                     
      }

      else
      {
        
         fileData[count].filename = filename;
         fileData[count].username = userName;
         fileData[count].timestamp = timeStamp;

      }

      count++; 
   }


   fin.close();

   return count;
}

void display(int start, int end, AccessRecord information[], int limit)
{
   cout << "      Timestamp"
        << setw(20) << "File"
        << setw(20) << "User" << endl;

   cout << "---------------" 
         << " -------------------"
         << " -------------------" << endl;


   for (int number = 0; number < limit ; number++)
   {
      if (information[number].timestamp >= start && information[number].timestamp <= end)
      {
         cout << "     " << information[number].timestamp << setw(20) << information[number].filename
            << setw(20) << information[number].username << endl;
      }
   }

   cout << "End of records" << endl;

   return;
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   AccessRecord data[365];
   string fileName;
   cout << "Enter the access record file: ";
   cin >> fileName;
   string lines[365];

   int limit = readFile(fileName, lines, data);

   int start;
   int end;

   cout << endl;
   cout << "Enter the start time: ";
   cin >> start;
   cout << "Enter the end time: ";
   cin >> end;
   cout << endl;
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   display(start, end, data, limit);

   return 0;
}
