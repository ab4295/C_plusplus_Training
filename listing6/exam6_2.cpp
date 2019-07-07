#include<iostream>
#include<cctype>

const int SIZE = 10;

using namespace std;

int main()
{
	double price[SIZE];
	double value;
	double sum = 0.0;
	double average;
	int count = 0;

	for(int i = 0; i<SIZE;i++)
	{
		cin >> value;
		
		if(isdigit(value))
		{
			price[i] = value;
			sum += value;
		}
		else
		{
			return 0;
		}
	}

	average = sum/SIZE;

	cout << average;

	for(int i = 0;i<SIZE;i++)
	{
		if(price[i] > average)
		{
			count++;
		}
	}

	cout << count;
	return 0;

}