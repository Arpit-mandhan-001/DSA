
                                                             // THIS CODE CONTAIN IF AND ELSE CONDITION 2 EXAMPLE

#include<bits/stdc++.h> // ALLOWS TO INCLUDE ALMOST ALL STANDARD LIBRARIES
using namespace std;

int main()
{

    int marks;
    cout << "Enter the marks" << endl;
    cin >> marks;
    char grade;

    /*  if (marks < 25)
      {
          cout << "Grade: F" << endl;
      }
      else if (marks >= 25 && marks <= 44)
      {
          cout << "Grade: E" << endl;
      }
      else if (marks >= 45 && marks <= 59)
      {
          cout << "Grade: D" << endl;
      }
      else if (marks >= 60 && marks <= 65)
      {
          cout << "Grade: B" << endl;
      }
      else if ( marks <= 80)
      {
          cout << "Grade: A" << endl;
      }
      else
      {
          cout << "Invalid marks entered" << endl;
      }
  */

    // THIS CODE CAN BE SIMPLIFIED FOR BETTER READABILITY AND MAINTAINABILITY BY ANOTHER THING

    if (marks < 25)
    {
        grade = 'F';
    }
    else if (marks <= 44)
    {
        grade = 'E';
    }
    else if (marks <= 59)
    {
        grade = 'D';
    }
    else if (marks <= 65)
    {
        grade = 'C';
    }
    else if (marks <= 75)
    {
        grade = 'B';
    }
    else if (marks <= 80)
    {
        grade = 'A';
    }
    else
    {
        grade = 'X';
    }

    cout << "your grade is :" << grade << endl;

    return 0;
}