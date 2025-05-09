/* 
Filename: Final Exam.cpp 
Programmer: Morgan Thorne
Date: May 2025
Requirements:
Write a modular program that asks the user for a file name. Assume the file contains a series of numbers, each written on a separate line. The program should read the contents of the file into an array then display the following data:
• The lowest number in the array
• The highest number in the array
• The total of the numbers in the array
• The average of the numbers in the array
To test the program, you can download the file numbers.txt or ListOfNumbers.txt
You may also want to create your own file with something funky in it to see how
well your code handles it.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

// Function Prototypes
void Display_Welcome_Message();


//Main Function
int main()
{
	bool User_Repeat;
	
	string File_Name;

	vector <int> Numbers;

	int Lowest;
	int Highest;
	int Total;

	double average;

	Display_Welcome_Message();

	do {