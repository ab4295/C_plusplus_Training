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

void rect_to_polar(const rect* pxy, polar* pda); //구조체의 주소를 매개 변수로 받아야 하므로 포인터를 사용한다.																																						
void show_polar(const polar* pda);

int main()
{
	rect rplace;
	polar pplace;

	cout << "x 의 값과 y 의 값을 입력하세요. :";
	while(cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace); //구조체 값을 복사하지 않음 구조체의 주소를 넘김
		show_polar(&pplace); // 구조체의 주소를 넘김
		cout <<"x 의 값과 y 의 값을 입력하세요.(끝내려면 q를 입력) :";
	}
	cout << "프로그램을 종료합니다."<< endl;
	return 0;
}
void rect_to_polar(const rect* pxy, polar* pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y,pxy->x);
}
void show_polar(const polar* pda)
{
	const double Red_to_deg = 57.29577951;

	cout << "거리 : " << pda->distance << endl;
	cout << "각도 : " << pda->angle * Red_to_deg << "도" << endl;

}