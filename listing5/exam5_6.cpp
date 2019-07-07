#include<iostream>
#include<string>

using namespace std;

#define ArrSize 12
#define MONTH 3

int main()
{
	string *month = new string[ArrSize];

	int value[ArrSize][ArrSize];
	int sum_2 = 0;
	int sum_3 = 0;

	for(int i = 0;i<ArrSize;i++)
	{
		getline(cin,month[i]);
	}

	for(int i = 0;i<MONTH;i++)
	{
		cout << "-----------" << i << "----------"<< endl;
		for(int j = 0;j<ArrSize;j++)
			{
				cout << month[j] << ":";
				cin >> value[i][j];	
			}
	}

	for(int i = 0;i<ArrSize;i++)
	{
		sum_2 += value[1][i];
		sum_3 += value[2][i];
	}
	delete [] month;

	cout << sum_2 << endl;
	cout << sum_3 << endl;

	return 0;
}