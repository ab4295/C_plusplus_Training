#include<iostream>

using namespace std;

template<typename T>
void Swap(T &a, T &b);

struct job{
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i,j = " << i << "," << j << "." << endl;
	cout << "컴파일러가 생성한 int형 교환기를 사용하면" << endl;
	Swap(i,j);
	cout << "이제 i,j = " << i << ", " << j << "." << endl;

	job sue = {"Susan Yaffee",73000.60,7};
	job sidney = {"Sidney Taffee",78060.72,9};
	cout << "job 교환 전 : " << endl;
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "job 교환 후 : " << endl;
	Show(sue);
	Show(sidney);

	return 0;
}

template<typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &j1,job &j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job &j)
{
	cout << j.name << ": (" << j.floor << "층에 거주)" << "$" << j.salary << endl;
}