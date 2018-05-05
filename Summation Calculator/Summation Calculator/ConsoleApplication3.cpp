#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
Takes 3 inputs: a lower bound, an upper bound, and an expression
Calculates the sum of that range based on the given expression

For Example:
Input: 2 4 *2
Output: 18 (2*2 + 3*2 + 4*2)
*/

int main() {
	int lb;
	int ub;
	string expression;
	int sum = 0;

	cout << "Input the lower bound." << endl;
	cin >> lb;
	cout << "Input the upper bound." << endl;
	cin >> ub;
	cout << "Input the expression." << endl;
	cin >> expression;
	int op = std::stoi(expression.substr(1));
	expression = expression.substr(0, 1);

	if (expression == "*")
	{
		for (int i = lb; i <= ub; i++)
		{
			sum += i * op;
		}
	}
	if (expression == "/")
	{
		for (int i = lb; i <= ub; i++)
		{
			sum += i / op;
		}
	}
	if (expression == "+")
	{
		for (int i = lb; i <= ub; i++)
		{
			sum += i + op;
		}
	}
	if (expression == "-")
	{
		for (int i = lb; i <= ub; i++)
		{
			sum += i - op;
		}
	}
	if (expression == "%")
	{
		for (int i = lb; i <= ub; i++)
		{
			sum += i % op;
		}
	}
	if (expression == "^")
	{
		for (int i = lb; i <= ub; i++)
		{
			sum += std::pow(i, op);
		}
	}

	cout << "The summation of your case is " << sum << endl;
	return 0;
}