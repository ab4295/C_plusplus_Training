#include<iostream>

using namespace std;

int factorial(int n);
void print_factorial(int n);
int main()
{
	int input;
	int output;

	cin >> input;

	cout << input << "! = ";
	print_factorial(input);
	cout << "" << endl;
	output = factorial(input);

	cout << output << endl;
	return 0;
}

int factorial(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
	{
		return n * factorial(n-1);
	}
}

void print_factorial(int n)
{
	if(n == 0)
		cout << "0";
	else if(n == 1)
		cout << "1";
	else
	{
		cout << n << "*";
		print_factorial(n-1);
	}
}