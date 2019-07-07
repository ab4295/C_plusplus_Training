#include<iostream>

using namespace std;

int main()
{
	float dogak;
	float bungak;
	float chogak;
	float temp1, temp2;

	float value;

	cout << "위도를 도, 분, 초 단위로 입력하시오 : " << endl;
	cout << "먼저, 도각을 입력하시오 : ";
	cin >> dogak;
	cout << "다음에, 분각을 입력하십시오 : ";
	cin >> bungak;
	cout << "끝으로 초각을 입력하시오 : ";
	cin >> chogak;

	temp1 = (chogak/60) + bungak;
	temp2 = (temp1/60) + dogak;
	value = temp2;
	cout << temp1 << endl;
	cout << temp2 << endl;

	cout << dogak << "도," << bungak << "분," << chogak << "초 = " << value << "도";
	
}