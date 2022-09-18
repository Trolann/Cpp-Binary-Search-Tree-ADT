// Implementation file for the College class
// Written By: A. Student
// Changed By: Trevor Mathisen
// IDE: replit.com

#include <iostream>
#include <iomanip>
#include <string>

#include "College.h"

using namespace std;

//**************************************************
// Constructor
//**************************************************
College::College()
{
    rank = -1;
    code = "";
    name = "";
    cost = -1;
}

//**************************************************
// Overloaded Constructor
//**************************************************
College::College(int rk, string cd, string nm, int ct)
{
    rank = rk;
    code = cd;
    name = nm;
    cost = ct;
}

/*College::College(string id, string nm, string pn, float gpa, int yr))
{
	stuId = id; // unique key
	stuName = nm;
	stuPhoneNumber = pn;
	stuGpa = gpa;
	stuYear = yr;
}*/

//***********************************************************
// Displays the values of the College object member variables
// on one line (horizontal display)
//***********************************************************
void College::hDdisplay() const
{
    cout << left;
    cout << " " << setw(4) << code << "  ";
    cout << " " << setw(2) << rank << "  ";
    cout << " " << setw(27)<< name << "  ";
    cout << right;
    cout << " " << setw(7) << cost << " ";
    cout << left << endl;
}

//***********************************************************
// Displays the values of the College object member variables
// one per line (vertical display)
//***********************************************************
void College::vDisplay() const
{
    cout << "              Rank: " << rank << endl;
    cout << "       School Name: " << name << endl;
    cout << "Cost of Attendance: $" << cost << endl;
}

// overloaded operators
ostream& operator<<(ostream& output, const College& col)
{
    output << left;
    output << " " << setw(4) << col.code << "  ";
    output << " " << setw(2) << col.rank << "  ";
    output << " " << setw(27)<< col.name << "  ";
    output << right;
    output << " " << setw(7) << col.cost << " ";
    output << left << endl;
	  return output;
}
