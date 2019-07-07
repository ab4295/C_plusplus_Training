#include<iostream>

using namespace std;

#define TRUE 1;

const double cos1 = 0.10;
const double cos2 = 0.05;

int main()
{
	int cost1 = 100000, cost2 = 100000;
	int value = cost1 * cos2;
	int count = 0;
	value += cost1;
	
	while(1)
	{
		cost2 += (cost2*cos2); // 복리
		count ++;

		if(cost2 > value)
		{
			cout << count << endl;
			break;
		}
	}

	return 0;
}