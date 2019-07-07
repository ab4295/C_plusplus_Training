#include<iostream>

using namespace std;

int main()
{
	int num1, num2;
	int sum = 0;

	cin >> num1 >> num2;

	for(int i = num1;i<=num2;i++)
	{
		sum +=i;
	}

	cout << sum;

	return 0;
}