#include<iostream>
#include<string>

using namespace std;

#define ArrSize 12

int main()
{
	string *month = new string[ArrSize];

	int value[ArrSize];
	int sum = 0;

	for(int i = 0;i<ArrSize;i++)
	{
		getline(cin,month[i]);
	}
	for(int i = 0;i<ArrSize;i++)
	{
		cout << month[i] << ":";
		cin >> value[i];
		sum += value[i];
	}

	delete [] month;

	cout << sum << endl;

	return 0;
}