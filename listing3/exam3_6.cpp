#include<iostream>

using namespace std;
//0.621371
//3.78541
int main()
{
	float distance;
	float quantity;
	float value;

	const float mile = 0.621371;
	const float gallon = 3.78541;

	cout << "주행한 거리를 키로 단위로 입력하십시오 : ";
	cin >> distance;

	cout << "소비한 휘발유의 양을 리터 단위로 입력하십시오 : ";
	cin >> quantity;

	distance = distance * mile; // 마일
	quantity = quantity * gallon; //갤런
	cout << distance;
	cout << quantity;
	value = (distance / quantity) * 100;
	cout << "갤런당 마일은 : " << value << "입니다." << endl;

	return 0;
}