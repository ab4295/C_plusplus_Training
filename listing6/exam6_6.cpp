#include<iostream>
#include<string>

using namespace std;

struct donation {
	string name;
	double money;
	string donat;
};

int main()
{
	int input;
	cout << "몇 사람이 기부 할 것입니까? :";
	cin >> input;

	if(input == 0)
	{
		cout << "프로그램을 종료합니다." << endl;
		return 0;
	}
	else
	{
		donation *don = new donation[input];
		for(int i = 0;i<input;i++)
		{
			cout << "기부자의 이름은 무엇입니까? : ";
			cin >> don[i].name; 
			cout << "기부 금액은? :";
			cin >> don[i].money;
		}

		for(int i = 0;i<input;i++)
		{
			if(don[i].money > 10000)
			{
				don[i].donat = "고액기부자";
			}
			else if(don[i].money < 10000)
			{
				don[i].donat = "소액기부자";
			}
			else
			{
				cout << "기부자가 없습니다.";
			}
		}

		delete [] don;
	}
}