#include<iostream>

using namespace std;

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);
int main()
{
	cout << " 학급의 학생 수를 입력하십시오 :";
	int class_size;
	cin >> class_size;
	while(cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size]; //구조체 배열 생성
	int entered = getinfo(ptr_stu, class_size);
	for(int i = 0;i<entered;i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
/* - - - - - - - - - - - function - - - - - - - - - - - - */

int getinfo(student pa[], int n)
{
	int count = 0;

	for(int i = 0;i<n;i++)
	{
		cout << "이름을 입력하십시오. :";
		cin.getline(pa[i].fullname,SLEN);

		if(strcmp(pa[i].fullname,"") == 0) //공백일 경우.
			break;
		else
		{
			cout << "취미를 입력하십시오 :";
			cin.getline(pa[i].hobby,SLEN);
			cout << "레벨을 입력하십시오 :";
			cin >> pa[i].ooplevel;
			cin.get();
		}
		count++;
	}

	return count;
}
void display1(student st)
{
	cout << st.fullname << endl;
	cout << st.hobby << endl;
	cout << st.ooplevel << endl;
}
void display2(const student* ps)
{
	cout << ps->fullname << endl;
	cout << ps->hobby << endl;
	cout << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for(int i = 0;i<n;i++)
	{
		cout << pa[i].fullname << endl;
		cout << pa[i].hobby << endl;
		cout << pa[i].ooplevel << endl;	
	}
}