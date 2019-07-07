#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double area;
	double side;

	cout << "마루의 면적을 평방피트 단위로 입력하시오."<<endl;
	cin >> area;

	side = sqrt(area);

	cout << "사각형 마루라면 한 변이 " << side << "피트에 상당합니다." << endl;
	cout << "멋지네여~" << endl;

	return 0;
}