#include<iostream>

using namespace std;

int main()
{
	long long people;
	long long person;
	float value;

	cout << "세계 인구수를 입력하십시오 : ";
	cin >> people;
	cout << "미국의 인구수를 입력라십시오 : ";
	cin >> person;

	value = ((float)person/(float)people) * 100;

	cout << "세계 인구수에서 미국이 차지하는 비중은 " << value << "% 이다" << endl;

	return 0;
}