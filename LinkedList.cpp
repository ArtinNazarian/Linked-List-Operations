// LinkedList_mid_value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	int num[] = {5,13,36,9,15,61,44,25};
	int size = sizeof(num) / sizeof(num[0]);
	Linked_List newList;
	
	int value;
	int selection, search, nth;



	do
	{
		
		cout << "\nMake a selection: \n";
		cout << "1) Create a linked list" << endl;
		cout << "2) Print linked list" << endl;
		cout << "3) Find middle value" << endl;
		cout << "4) Find min value" << endl;
		cout << "5) Reverse linked list" << endl;
		cout << "6) Search for a value" << endl;
		cout << "7) Find the nth node from the end" << endl;
		cout << "8) Sort the linked list\n";
		cout << "9) Exit" << endl;
		cin >> selection;
		switch (selection)
		{
		case 1:
		{
			cout << "Enter a number: ";
			cin >> value;
			newList.add(value);
		}
		break;
		case 2:
		{
			newList.print();
		}
			break;
		case 3: newList.middle();
			break;
		case 4:
		{
			cout << "The smallest value is: " << newList.min() <<endl;
			cout << "---------------------------------" << endl;
		}

			break;
		case 5:newList.reverseList();
			break;
		case 6:
		{
			cout << "Enter a value: ";
			cin >> search;
			newList.search(search);

		}

		case 7:
		{
			cout << "Enter nth value to: ";
			cin >> nth;
			newList.nthNode(nth);
		}
			break;
		case 8:
		{
			cout << "Smallest to largest\n";
			newList.sort();
		}
		break;
		
		default:
			cout << "Invalid selection" << endl;
			break;
		}

	}
	while (selection != 9);

	system("pause");

}