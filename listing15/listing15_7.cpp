#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big
{
	double stuff[20000];
};
int main()
{
	Big* pb;
	try
	{
		cout << "큰 메모리 블록 대입을 요청 하고 있습니다. " << endl;
		pb = new Big[10000];
		cout << "메모리 블록 대입 요청이 거부되었습니다." << endl;
	}
	catch(bad_alloc& ba)
	{
		cout << "예외가 감지되었습니다!" << endl;
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "메모리 블록이 성공적으로 대입되었습니다." << endl;
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete [] pb;
	return 0;
 }