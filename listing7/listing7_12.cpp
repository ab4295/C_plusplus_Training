#include<iostream>
#include<cmath>

using namespace std;

struct polar {
	double distance; //원점으로부터의 거리
	double angle; //수평축으로부터의 각도
};

struct rect {
	double x;
	double y;
};

polar rect_to_polar(rect xpos);
void show_polar(polar dapos);

int main()
{
	rect rplace;
	polar pplace;

	cout << "x 의 값과 y 의 값을 입력하세요. :";
	while(cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout <<"x 의 값과 y 의 값을 입력하세요.(끝내려면 q를 입력) :";
	}
	cout << "프로그램을 종료합니다."<< endl;
	return 0;
}
polar rect_to_polar(rect xpos)
{
	polar answer;

	answer.distance = sqrt(xpos.x * xpos.x + xpos.y * xpos.y);
	answer.angle = atan2(xpos.y, xpos.x);

	return answer;
}
void show_polar(polar dapos)
{
	const double Red_to_deg = 57.29577951;

	cout << "거리 : " << dapos.distance << endl;
	cout << "각도 : " << dapos.angle * Red_to_deg << "도" << endl;

}