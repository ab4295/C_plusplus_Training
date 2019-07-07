#include<iostream>

using namespace std;

int main()
{
	int input;

	cin >> input;

	for(int i = 0;i<input;i++)
	{
		for(int j = 0;j < input - i - 1;j++)
		{
			cout << ".";
		}

		for(int k = 0;k<=i;k++)
		{
			cout << "*";
		}
		cout << "" << endl;
	}

	return 0;
}