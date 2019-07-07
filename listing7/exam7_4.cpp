#include<iostream>
#define TRUE 1

using namespace std;

long double probability(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	double mega, power;
	double result1, result2;

	while(TRUE)
	{
		cout << "첫 번째 게임 입니다." << endl;
		cout << "전체 수의 개수와 뽑을 개수를 입력하십시오(게임을 종료하려면 0을 입력하세요) :";
		cin >> total >> choices;

		if(choices > total)
		{
			cout << "수를 잘못 입력하셨습니다.";
			break;
		}
		else if(choices == 0 || total == 0)
		{
			break;
		}
		else
		{
			result1 = probability(total, choices);
		}

		cout << "두 번째 게임 입니다." << endl;
		cout << "전체 수의 개수와 뽑을 개수를 입력하십시오(게임을 종료하려면 0을 입력하세요) :";
		cin >> mega >> power;

		if(power > mega)
		{
			cout << "수를 잘못 입력하셨습니다.";
			break;
		}
		else if(power == 0 || mega == 0)
		{
			break;
		}
		else
		{
			result2 = probability(mega, power);
		}

		cout << "게임이 종료 되었습니다. 당신이 길 확률은" << result1 * result2 << "입니다."<< endl;
	}
	cout << "프로그램을 종료합니다." << endl;

	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for(n = numbers,p=picks;p>0;n--,p--)
	{
		result = result * n/p;
	}

	return result;
}