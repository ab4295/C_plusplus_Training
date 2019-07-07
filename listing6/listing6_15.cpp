#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile; //출력을 위한 객체 생성
	outFile.open("carinfo.txt"); //파일에 연결

	cout << "자동차 메이커와 차종을 입력하시오. :";
	cin.getline(automobile,50);
	cout << "연식을 입력하시오 :";
	cin >> year;
	cout << "구입 가격을 입력하시오 :";
	cin >> a_price;
	d_price = 0.913 * a_price;

	outFile << fixed; //파일 입출력에선 write를 굳이 쓸필요 x cout 처럼 객체를 사용하면 됨.
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "메이커와 차종 : " << automobile << endl;
	outFile << "연식 : " << year << endl;
	outFile << "구입 가격 $ :" << a_price << endl;
	outFile << "현재 가격 $ :" << d_price << endl;

	outFile.close();
	return 0;
}