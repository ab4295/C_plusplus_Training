#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char f_name[20];
	char l_name[20];
	char str1[80];

	cout << "퍼스트 네임(이름)을 입력하십시오 : ";
	cin.getline(f_name,20);
	cout << "라스트 네임(성)을 입력하십시오 : ";
	cin.getline(l_name,20);

	strcat(str1,f_name,",","",l_name);

	cout << "하나의 문자열로 만들면 : " << str1;

	return 0;
}