// ch12nameArranger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Chapter 12 Name Arranger by Kevin Bell\n\n";
	
	//Create the arrays
	const int SIZE = 20;
	char firstName[SIZE];
	char middleName[SIZE];
	char lastName[SIZE];
	char fullName[SIZE * 3];

	//Get the user input
	cout << "Enter your first name: ";
	cin.getline(firstName, SIZE);
	cout << "Enter your middle name: ";
	cin.getline(middleName, SIZE);
	cout << "Enter your last name: ";
	cin.getline(lastName, SIZE);
	
	//Combine the names into a full name
	strcpy_s(fullName, lastName);
	strcat_s(fullName, ", ");
	strcat_s(fullName, firstName);
	strcat_s(fullName, " ");
	strcat_s(fullName, middleName);
	
	//Display the full name
	cout << fullName << endl;
	
	system("pause");
	return 0;
	
} //end main