#include<iostream>
#include<cstdlib>

using namespace std;

double hmean(double a, double b);
int main()
{
	double x, y, z;

	cout << "두 수를 입력하십시오: ";
	while(cin >> x >> y)
	{
		z = hmean(x,y);
		cout << x << ", " << y << "의 조화평균은 " << z << "입니다." << endl;
		cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
	{
		cout << "매개변수들을 hmean()에 전달 할 수 없습니다." << endl;
		abort();
	}
	return 2.0 * a * b / (a+b);
}