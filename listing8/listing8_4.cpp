#include<iostream>

using namespace std;

void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main()
{
	int wallet1 = 3000;
	int wallet2 = 3500;

	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원" << endl;

	cout << "참조를 이용하여 내용들을 교환: " << endl;
	swapr(wallet1, wallet2); //형식 매개변수 a,b를 초기화한다.
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원" << endl;

	cout << "포인터를 이용하여 내용들을 다시 교환: " << endl;
	swapp(&wallet1, &wallet2);
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원" << endl;

	cout << "값으로 전달하여 내용 교환 시도: " << endl;
	swapv(wallet1, wallet2);
	cout << "지갑 1 = " << wallet1 << "원";
	cout << ", 지갑 2 = " << wallet2 << "원" << endl;

	return 0;
}
void swapr(int& a, int& b) //참조를 통해 원래 main에 있는 value의 포인터를 가지고 그 값을 바꿔버리니까 swap이 가능하다.
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void swapp(int* p, int* q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b) //복사본을 가지고 사용하기 때문 a,b값은 바뀔지 몰라도 원래 값은 바뀌지 않는다.
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}