#include<iostream>

using namespace std;

#define TRUE 1;

int main()
{
	int num;
	int sum = 0;

	while(1)
	{
		cin >> num;
		if(num == 0)
			return 0;
		else
		{
			sum += num;
			cout << sum << endl;
		}
	}
	return 0;
}