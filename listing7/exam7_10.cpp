#include<iostream>

using namespace std;

double calculate(double a, double b, double (*pf)(double, double));
double add(double a, double b);
double multiple(double a, double b);
double _minus(double a, double b);

int main()
{
	int input1, input2;

	cin >> input1 >> input2;

	double (*pa[3])(double a, double b) = {add,multiple,_minus}; //지시하는 함수 포인터 3개.

	for(int i = 0;i<3;i++)
	{
		cout << calculate(input1, input2, pa[i]) << endl;
	}

	return 0;

}
double calculate(double a, double b, double(*pf)(double, double))
{
	return (*pf)(a,b);
}
double add(double a, double b)
{
	return a + b;
}
double multiple(double a, double b)
{
	return a * b;
}
double _minus(double a, double b)
{
	return a - b;
}