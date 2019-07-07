#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int height_Feet;
	int height_Inch;
	float weight_Found;
	const int transfer = 12;
	const float trans = 0.0254;
	const float trans_w = 2.2;

	float BMI;
	float value;
	float value_w;

	cout << "당신 키의 피트를 입력하세요. : " ;
	cin >> height_Feet;
	cout << "당신 키의 인치를 입력하세요. : " ;
	cin >> height_Inch;
	cout << "당신의 몸무게를 입력하세요. : ";
	cin >> weight_Found;
	cout << endl;

	value = (height_Feet * transfer) + height_Inch; //인치 단위의 키.
	value = value * trans; //미터 단위의 키;

	value_w = weight_Found / trans_w; //킬로그램 단위의 질량.
	BMI = pow(value,2) / value_w;
	cout << value << endl;
	cout << value_w << endl;
	cout << BMI << endl;
	return 0;
}