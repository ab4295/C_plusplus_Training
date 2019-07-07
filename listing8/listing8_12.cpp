#include<iostream>

using namespace std;

template<typename T>
void swap(T &a, T &b);

template<typename T>
void swap(T *a, T *b, int n);

void show(int a[]);

const int Lim = 8;

int main()
{
	int i = 10, j = 20;
	cout << "i,j = " << i << "," << j << "." << endl;
	cout << "컴파일러가 생성한 int형 교환기를 사용하면" << endl;
	swap(i,j);
	cout << "이제 i,j = " << i << "," << j << "." << endl;

	int d1[Lim] = {0,7,0,4,1,7,7,6};
	int d2[Lim] = {0,6,2,0,1,9,6,9};
	cout << "원본 배열 : " << endl;
	show(d1);
	show(d2);
	swap(d1,d2,Lim);
	cout << "교환된 배열 : " << endl;
	show(d1);
	show(d2);
 	return 0;
}

template<typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void swap(T a[], T b[], int n)
{
	T temp;
	for(int i = 0;i<n;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(int a[])
{
	cout << a[0] << a[1] << endl;
	cout << a[2] << a[3] << endl;
	for(int i = 4;i<Lim;i++)
		cout << a[i];
	cout << endl;
}