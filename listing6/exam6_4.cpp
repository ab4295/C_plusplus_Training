#include<iostream>

#define TRUE 1

using namespace std;

const int strsize = 20;
const int SIZE = 5;
struct bop {
	char fullname[strsize]; //실명
	char title[strsize]; //직함
	char bopname[strsize]; //BOP 아이디
	int preference; // 0 = fullname, 1 = title, 2.  bopname
};

int main()
{
	char ch;

	bop person[SIZE] = {
		{"Wimp Macho","차장","dcinside",0},
		{"Raki Rhodes","부징","kieek",1},
		{"Chayo","사회복무요원","ab4295",2},
		{"Wisdom","선생님","jijibebe",1},
		{"Pat hand","이건 뭘까","poper23",2}
	};

	while(TRUE)
	{
		cout << "Benevolent Order of Programmers" << endl;
		cout << "a. 실명으로 일람" << "            " << "b. 직함으로 일람" << endl;
		cout << "c. BOP 아이디로 일람" << "         "<< "d. 회원이 지정한 것으로 일람" << endl;
		cout << "q. 종료" << endl;    

		cin.get(ch).get();

		if(ch == 'q' || ch == 'Q')
		{
			cout << "프로그램을 종료합니다." << endl;
			return 0;
		}
		else if(ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd')
		{
			switch(ch)
			{
				case 'a' : 
				for(int i = 0;i<SIZE;i++)
				{
					cout << person[i].fullname << endl;
				}
				break;
				case 'b' :
				for(int i = 0;i<SIZE;i++)
				{
					cout << person[i].title << endl;
				}
				break;
				case 'c' :
				for(int i = 0;i<SIZE;i++)
				{
					cout << person[i].bopname << endl;
				}
				break;
				case 'd' :
				for(int i = 0;i<SIZE;i++)
				{
					cout << person[i].preference << endl;
				}
				break;
			}
		}
		else
			cout << "잘못 입력하셨습니다!" << endl;
	}

	return 0;
}