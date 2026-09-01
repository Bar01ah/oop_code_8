#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	Calculator c;
	int n1, n2;
	char x;
	cout << "what the oprations do you want (d=div,p=power,a=array,v=average)" << endl;
	cin >> x;
	switch (x) {
	case 'd':cout << "enter tow numbers: ";
		cin >> n1;
		cin >> n2;
		try {
			Calculator::div(n1, n2);
		}
		catch (const exception& e) {
			cout << "exception" << e.what() << endl;
		}
		break;


	case 'p': {cout << "enter the base and exp:";
		cin >> n1;
		cin >> n2;
		try {
			c.power(n1, n2);
		}
		catch (const exception& e) {
			cout << "exception " << e.what() << endl;
		}
		break;
	}

	case 'a': { cout << "enter the size of array & index that you search about it :";
		cin >> n1;
		cin >> n2;
		int array[] = { 1,6,9,3,7 };
		try {
			cout<<c.getItem(array, n1, n2);
		}
		catch (const exception& e) {
			cout << "exception " << e.what() << endl;
		}
		break;
	}

	case 'v':{
		vector<int> empVec;
		int size;
		cout << "how count the numbers do you want enter them? ";
		cin >> size;

		cout << "enter" << size << "numbers to calculate the average :";
		for (int i = 0; i < size; i++) {
			int v;
			cin >> v;
			empVec.push_back(v);

		}
		try {

			cout<<c.getAvrage(empVec);
		}
		catch (const exception& e) {
			cout << " exception " << e.what() << endl;

		}
		break;
	}
		


	default:
	cout << "you enter invalid value try again!"; break;
	}
	
	


	
	
	
}

