#include<iostream>

using namespace std;

const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double*, int);
int main()
{
	double av[3] = {1112.3, 1542.6,2227.9};

	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2;

	cout << "함수 포인터 :" << endl;
	cout << "주소 값" << endl;
	cout << (*p1)(av,3) << ":" << *(*p1)(av,3) << endl;
	cout << p2(av,3) << ":" << *p2(av,3) << endl;
	///////////////////////////////////////////////////////

	const double* (*pa[3])(const double*, int) = {f1,f2,f3};
	auto pb = pa; //배열 이름은 배열의 첫번쨰 원소의 주소값이기 때문에 다음과 같은 선언이 가능.

	cout << "\n함수 포인터를 원소로 가지는 배열:" << endl;
	cout << "주소값" << endl;
	for(int i = 0 ;i<3;i++)
		cout << pa[i](av,3) << ":" << *pa[i](av,3) << endl;
		cout << "\n함수 포인터를 가리키는 포인터:" << endl;
		cout << "주소 값" << endl;
	for(int i= 0;i<3;i++)
		cout << pb[i](av,3) << ":" << *pb[i](av,3) << endl;

	cout << "\n포인터를 원소로 가지는 배열을 가르키는 포인터:" << endl;
	cout << "주소 값" << endl;

	auto pc = &pa; //전체 배열을 가르키게 하는 것
	cout << (*pc)[0](av,3) << ":" << *(*pc)[0](av,3) << endl;

	const double *(*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av,3);
	cout << pdb << ":" << *pdb << endl;

	cout << (*(*pd)[2])(av,3) << ":" << *(*(*pd)[2])(av,3) << endl;

	return 0;
}
const double* f1(const double ar[], int n)
{
	return ar;
}
const double* f2(const double ar[], int n)
{
	return ar+1;
}
const double* f3(const double ar[], int n)
{
	return ar+2;
}