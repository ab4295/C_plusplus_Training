#include<iostream>

using namespace std;

int main()
{
	float height;
	float value;
	const float m = 100.0;

	cout << "당신의 키는 몇 cm 입니까? : " ;
	cin >> height;

	value = height / m;

	cout << value << endl;
	return 0;
}