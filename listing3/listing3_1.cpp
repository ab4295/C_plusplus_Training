#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는" << sizeof(int) << "바이트이다." << endl;
	cout << "short는" << sizeof n_short << "바이트이다." << endl;
	cout << "long은" << sizeof n_long << "바이트이다." << endl;
	cout << "long long은" << sizeof n_llong << "바이트이다." << endl;

	cout << endl;

	cout << "최대값 : " << endl;
	cout << "int : " << n_int << endl;
	cout << "short : " << n_short << endl;
	cout << "long : " << n_long << endl;
	cout << "long long : " << n_llong << endl;
	cout << "int의 최소값 = " << INT_MIN << endl;
	cout << "char의 비트수 = " << CHAR_BIT << endl;
	return 0;
}