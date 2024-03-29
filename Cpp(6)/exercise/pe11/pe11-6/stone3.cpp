// stone3.cpp -- 11장 프로그래밍 연습 6
// stonewt3.h, stonewt3.cpp와 함께 컴파일한다
#include <iostream>
using namespace std;
#include "stonewt3.h"
const int ArSize = 6;
int main()
{
	Stonewt stones[ArSize] = { Stonewt(12, 4), Stonewt(3, 8), Stonewt(27, 6) };
	double input_by_pounds;
	cout << "처음 3개의 배열 원소는 배열 선언에서 초기화하였습니다.\n";
	cout << "비어 있는 나머지 배열 원소들을 파운드 값으로 설정하십시오:\n";
	for (int i = 3; i < ArSize; i++)
	{
		cout << i + 1 << "번째 원소: ";
		cin >> input_by_pounds;
		stones[i] = Stonewt(input_by_pounds);
	}
	Stonewt Max = stones[0];
	Stonewt Min = stones[0];
	Stonewt Stone11(11, 0);
	int over11 = 0;
	for (i = 0; i < ArSize; i++)
	{
		if (stones[i] > Max)
			Max = stones[i];
		if (stones[i] < Min)
			Min = stones[i];
		if (stones[i] >= Stone11)
			over11++;
	}
	cout << "배열에 들어 있는 모든 객체를 표시합니다.\n";
	for (i = 0; i < ArSize; i++)
	{
		cout << "객체 #" << i + 1 << ": ";
		stones[i].show_stn();
	}
	cout << "최대 원소: ";
	Max.show_stn();
	cout << "최소 원소: ";
	Min.show_stn();
	cout << "11스톤보다 크거나 같은 원소의 개수: " << over11 << "\n";
	return 0;
}
