#include<iostream>

using namespace std;

int main()
{
	long second_t;
	int day;
	int hour;
	int min;
	int second;

	const int day_s = 86400;
	const int hour_s = 3600;
	const int min_s = 60;

	cout << "초 수를 입력하세요~ : ";
	cin >> second_t;

	day = second_t / day_s;
	hour = (second_t % day_s) / hour_s;
	min = ((second_t % day_s) % hour_s) / min_s;
	second = ((second_t % day_s) % hour_s) % min_s;

	cout << second_t << "초 = " << day << "일" << hour << "시간" << min << "분" << second << "초" << endl; 
}