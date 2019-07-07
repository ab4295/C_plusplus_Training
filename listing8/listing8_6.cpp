#include<iostream>

using namespace std;

struct free_throws {
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

int main()
{
	//부분 초기화 - 멤버는 0에 세팅된 상태로 남는다.
	free_throws one = {"Ifelsa Branch",13,14};
	free_throws two = {"Andor Knott",10,16};
	free_throws three = {"Minnie Max",7,9};
	free_throws four = {"Whily Looper",5,9};
	free_throws five = {"Long Long",6,14};
	free_throws team = {"Throwgoods",0,0};

	//초기화 하지 않음
	free_throws dup;
	set_pc(one); //&ft = one 이라고 볼 수 있음 구조체에 대한 참조.
	display(one);
	accumulate(team,one);
	display(team);

	//리턴 값을 매개변수로 사용한다.
	display(accumulate(team,two));
	accumulate(accumulate(team,three),four);
	display(team);

	//리턴 값을 대입 값으로 사용한다.
	dup = accumulate(team, five);
	cout << "Team 출력 : " << endl;
	display(team);
	cout << "대입 이후 dup 출력 : " << endl;
	display(dup);
	set_pc(four);

	//문제의 소지가 있는 대입
	accumulate(dup,five) = four; //허용하지 않게 하기 위해서는 const를 사용.
	cout << "문제의 소지가 있는 대입 이후 dup 출력 : "<< endl;
	display(dup);

	return 0;
}
void display(const free_throws& ft) //구조체에 저장된 내용을 변화시키지 않고 그대로 보여주기만 해야 하니 const를 사용.
{
	cout << "Name : " << ft.name << endl;
	cout << "Made : " << ft.made << endl;
	cout << "Attempts : " << ft.attempts << endl;
	cout << "percent : " << ft.percent << endl;
}
void set_pc(free_throws& ft)
{
	if(ft.attempts != 0)
		ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
	else
		ft.percent = 0;
}
free_throws& accumulate(free_throws& target, const free_throws& source) //두 개의 구조체 매개 변수를 가진다. 첫 번째 매개변수는 축적되어야 할 값이므로 바뀌고 두 번째 매개변수는 바뀌지 않으므로 const.
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target; //함수원형을 보면 free_throws&, 즉 참조를 리턴한다. 
}