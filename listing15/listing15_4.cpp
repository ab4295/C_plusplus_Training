#include<iostream>
#include<cfloat>

using namespace std;

bool hmean(double a, double b, double* ans);
int main()
{
	double x, y, z;
	cout << "두 수를 입력하십시오: ";
	while(cin >> x >> y)
	{
		if(hmean(x,y,&z))
			cout << x << ", " << y << "의 조화평균은 " << z << "입니다." << endl;
		else
			cout << "서로 부정인 두 수의 조화평균은 구할 수 없다." << endl;
		cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
bool hmean(double a, double b, double* ans)
{
	if(a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a+b);
		return true;
	}
}