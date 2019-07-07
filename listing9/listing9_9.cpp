#include<iostream>

using namespace std;

const int ArSize = 10;

void strcount(const char* str);

int main()
{
	char input[ArSize];
	char next;

	cout << "영문으로 한 행을 입력하십시오 : " << endl;
	cin.get(input,ArSize);
	while(cin)
	{
		cin.get(next);
		while(next != 'n')
			cin.get(next);
		strcount(input);
		cout << "다음 행을 입력하십시오(끝내려면 빈 행을 입력)" << endl;
		cin.get(input,ArSize);
	}

	cout << "프로그램을 종료합니다. " << endl;
	return 0;
} 

void strcount(const char* str)
{
	static int total = 0; //정적 지역변수
	int count = 0;

	cout << "\"" << str << "\"에는";
	while(*str++)
		count++;
	total += count;
	cout << count << "개의 문자가 있습니다." << endl;
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다. " << endl;
}