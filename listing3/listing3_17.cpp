#include<iostream>

using namespace std;

int main()
{
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "nights의 값 : " << nights << "메모리 위치 : " << &nights << endl;
	cout << "pt의 값 : " << *pt << "메모리 위치" << pt << endl;

	double* pd = new double;
	*pd  = 1.0;

	cout << "double 형" << endl;
	cout << "값 =" << *pd << " : 메모리 위치 = " << pd << endl;
	cout << "포인터 pd의 메모리 위치" << &pd << endl;
}