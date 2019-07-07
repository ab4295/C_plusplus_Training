#include<iostream>

using namespace std;

int main()
{
	int carrots;

	cout << "당근을 몇개나 가지고 있니?" << endl;
	cin >> carrots;

	cout << "여기 2개가 더 있네?" << endl;

	carrots = carrots + 2;

	cout << "이제 당근은 총 " << carrots << "개이다." << endl;
}