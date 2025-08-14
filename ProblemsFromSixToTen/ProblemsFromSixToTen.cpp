
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Problem 06

//struct stInfo
//{
//	string FirstName;
//	string LastName;
//};
//
//stInfo ReadInfo()
//{
//	stInfo info;
//
//	cout << "enter your first name " << endl;
//	cin >> info.FirstName;
//
//	cout << "enter your last name " << endl;
//	cin >> info.LastName;
//
//	return info;
//}
//
//string GetFullName(stInfo info , bool reversed )
//{
//	if(reversed)
//		return info.LastName + " " + info.FirstName;
//
//	return info.FirstName + " " + info.LastName;
//}
//
//void PrintFullName(string FullName)
//{
//	cout << endl << "your full name is " << FullName << endl<<endl;
//}

////Problem 07
//
//int ReadNumber()
//{
//	int number;
//
//	cout << "please enter your number " << endl;
//	cin >> number;
//
//	return number;
//}
//
//float CalcHalfNumber(int num)
//{
//	return (float) num / 2;
//}
//
//void PrintResult(int num)
//{
//	string Result = "the half of " + to_string(num) + " is " + to_string(CalcHalfNumber(num));
//	cout << Result << endl<<endl;
//}

// Problem 08 

//enum enPassOrFail { Pass = 1 , Fail = 2 };
//
//int ReadMark()
//{
//	int Mark;
//
//	cout << "enter your mark " << endl;
//	cin >> Mark;
//
//	return Mark;
//}
//
//enPassOrFail CheckMark(int Mark)
//{
//	if (Mark >= 50)
//		return enPassOrFail::Pass;
//	else 
//	return enPassOrFail::Fail;
//}
//
//void PrintResult(int Mark)
//{
//	if ( CheckMark(Mark) == enPassOrFail::Pass )
//		cout <<endl << "Pass" << endl;
//	else
//	cout << endl << "Fail";
//}
//

// Problem 09 

//void ReadNumbers(int& num01, int& num02, int& num03)
//{
//	cout << "enter number one " << endl;
//	cin >> num01;
//
//	cout << "enter number two " << endl;
//	cin >> num02;
//
//	cout << "enter number three " << endl;
//	cin >> num03;
//}
//
//int SumNumbers(int num01 , int num02 , int num03)
//{
//	return num01 + num02 + num03;
//}
//
//void PrintNumbers(int Result)
//{
//	cout << endl << "the summation of your numbers is " << Result << endl;
//}

// Prblem 10

void ReadNumbers(int& num01, int& num02, int& num03)
{
	cout << "enter number one " << endl;
	cin >> num01;

	cout << "enter number two " << endl;
	cin >> num02;

	cout << "enter number three " << endl;
	cin >> num03;
}

int SumNumbers(int num01 , int num02 , int num03)
{
	return num01 + num02 + num03;
}

float CalcAverage(int num01, int num02, int num03)
{
	return (float)SumNumbers(num01, num02, num03) / 3;
}

void PrintNumbers (float Average)
{
	cout << endl << "the average of your numbers is " << Average << endl;
}

int main()
{
	/*PrintFullName(GetFullName(ReadInfo(), true));
	PrintFullName(GetFullName(ReadInfo(), false));*/

	// =============================== Problem 07 ================

	/*PrintResult(ReadNumber());*/

	// =============================== Problem 08 ================

	/*PrintResult(ReadMark());*/

	// ============================= Problem 09 ==============

	/*int num01, num02, num03;
	ReadNumbers(num01, num02, num03);
	PrintNumbers(SumNumbers(num01, num02, num03));*/

	// ============================= Problem 10 ==============

	int num01, num02, num03;
	ReadNumbers(num01, num02, num03);
	PrintNumbers(CalcAverage(num01, num02, num03));
}

