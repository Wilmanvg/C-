//Attached: HW_5a, 5b
//==================================================
//Project: HW_5b
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//==================================================

#include <list>
#include <iostream>
using namespace std;

//==================================================
void getNumbers(list<int> & aList);
int addNumbers(list<int> aList);
void displaySum(list<int> aList, int sum);
//==================================================

int main()
{
	list<int> aList;
	int sum;
	getNumbers(aList);
	sum = addNumbers(aList);
	displaySum(aList, sum);
}
//==================================================
void getNumbers(list <int> & aList)
{
	for (int i = 0; i < 5; i++)
	{
		int number; 
		cout << "Please enter an integer value: "; 
		cin >> number;
		aList.push_back(number);
	}
}
//==================================================
int addNumbers(list <int> aList)
{
	int sum = 0;
	for (list<int>::iterator it = aList.begin(); it != aList.end(); it++)
	{
		sum += *it;
	}

	return sum;
}
//==================================================
void displaySum(list<int> aList, int sum)
{
	cout << "Here is the list: ";
	
	for (list<int>::iterator it = aList.begin(); it != aList.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl << "The sum equals: " << sum << endl;
}
//==================================================