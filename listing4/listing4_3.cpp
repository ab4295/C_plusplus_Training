#include<iostream>

using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하십시오." << endl;
	cin >> name;
	cout <<"디저트를 입력하십시오" << endl;
	cin >> dessert;
	cout << name << dessert << endl;
	return 0;
}