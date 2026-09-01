#include "Calculator.h"

double Calculator::div(double a, double b)
{
	if (b == 0) {
		throw runtime_error("Division by zero error!");
	}
	return a / b;
}

int Calculator::power(int base, int exp)
{
	int result = 1;
	if (exp < 0) {
		throw invalid_argument("Negative exponent is not allowed");

	}
	for (int i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
   
}

int Calculator::getItem(int arr[],int size, int index)
{
	if (size <= 0 || index <= 0 || size < index) {
		throw out_of_range("this index invalid in the array!");
	}
	return arr[index];
}

double Calculator::getAvrage(const vector<int>& vec)
{
	if (vec.empty()) {
		throw logic_error("Vector is empty!");

	}
	double sum = 0;
	for (int num : vec) {
		sum += num;
	}
	return sum / vec.size();

}