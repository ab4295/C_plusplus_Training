#include<iostream>

using namespace std;

double gildong(int);
double moonsoo(int);

void estimate(int lines, double (*pf)(int));

int main()
{
	int code;

	cout << "필요한 코드의 행 수를 입력하십시오 : ";
	cin >> code;
	cout << "홍길동의 예상시간 : " << estimate(code,gildong) << endl;
	cout << "박문수의 예상시간 : " << estimate(code,moonsoo) << endl;

	return 0;
}

double gildong(int lns)
{
	return 0.05 * lns;
}

double moonsoo(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	cout << "행을 작성하는데" << (*pf)(lines) << "시간이 걸립니다." << endl;
}