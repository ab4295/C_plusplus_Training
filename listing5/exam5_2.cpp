#include<iostream>

using namespace std;

const int ArrSize = 16;

int main()
{
	long double factorials[ArrSize];
	factorials[1] = factorials[0] = 1;
	for(int i = 2;i<ArrSize;i++)
	{
		factorials[i] = i * factorials[i-1];
	}
	for(int i = 0;i<ArrSize;i++)
	{
		cout << i << "!" << factorials[i] << endl;
	}
}