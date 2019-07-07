#include<iostream>

#define TRUE 1
using namespace std;

double harmonic_Average(double a, double b);
int main()
{
	double num1, num2;
	double average;

	while(TRUE)
	{
		cout <<"수를 입력하십시오 :";
		cin >> num1 >> num2;

		if(num1 == 0 || num2 == 0)
			break;
		else
			average = harmonic_Average(num1, num2);

		cout << average << endl;
	}
	return 0;
}
double harmonic_Average(double a, double b)
{
	return 2.0 * a * b /(a + b);
}