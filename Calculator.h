#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
class Calculator
{
public:
	static double div(double a, double b);

	static int power(int base, int exp);

    int getItem(int arr[],int size, int index);

	double getAvrage(const vector<int>& vec);


};

