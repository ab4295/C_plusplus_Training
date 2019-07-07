#include<iostream>

using namespace std;
struct Car
{
	char name[20];
	int year;
};

int main()
{
	int ArrSize;
	cout << "몇 대의 차를 목록으로 관리하시겠습니까? :";
	cin >> ArrSize;	

	Car *car = new Car[ArrSize];

	for(int i = 0;i<ArrSize;i++)
	{
		cin >> car[i].name;
		cin >> car[i].year;
		/*cin.get(car[i].name,20);
		cin.get(car[i].year,20);*/
	}

	for(int i = 0;i<ArrSize;i++)
	{
		cout << car[i].year << "년형" << car[i].name <<endl;
	}

	return 0;
}