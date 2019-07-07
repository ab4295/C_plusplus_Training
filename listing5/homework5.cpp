#include<iostream>
#include<cmath>

using namespace std;

void calculate(int n, int length);

int main()
{
	int input;

	cin >> input;

	if(input < 16 && input >= 1)
	{
		for(int i = 0;i<pow(2,input)-1;i++)
		{
			calculate(i,input);
		}
	}

	return 0;
}
void calculate(int n, int length)
{
	int* output = new int[length];

	for(int i = 0;i<length;i++)
	{
		output[i] = 0;
	}

	for(int i = 0; n > 0 ; i++)
	{
		output[i] = n % 2;
		n = n / 2;
	}
	for(int j = length - 1; j = 0; j--)
	{
		cout << "" << output[j];
	}
}