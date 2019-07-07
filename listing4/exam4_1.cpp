#include<iostream>
#include<string>

using namespace std;
/*
int main()
{
	string f_Name, l_Name; 
	char score;
	int year;

	cout << "영문 퍼스트 네임(이름) : ";
	getline(cin, f_Name);
	cout << "영문 라스트 네임(성) : ";
	cin >> l_Name;
	cout << "학생이 원하는 학점 : ";
	cin >> score;
	cout << "나이 : ";
	cin >> year;

	score = score + 1;

	cout << "성명 : " << l_Name << "," << f_Name << endl;
	cout << "학점 : ";
	cout.put(score);
	cout <<  "" << endl;
	cout << "나이 : " << year << endl;
}
*/
int main()
{
	char f_name[20];
	char l_name[20];
	char score;
	int year;

	cout << "영문 퍼스트 네임(이름) : ";
	cin.getline(f_name,20);
	cout << "영문 라스트 네임(성) : ";
	cin.getline(l_name,20);
	cout << "학생이 원하는 학점 : ";
	cin >> score;
	cout << "나이 : ";
	cin >> year;

	score = score + 1;

	cout << "성명 : " << l_name << "," << f_name << endl;
	cout << "학점 : ";
	cout.put(score);
	cout <<  "" << endl;
	cout << "나이 : " << year << endl;
}