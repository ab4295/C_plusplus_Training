#include<iostream>

using namespace std;
void simon(int n);
int main()
{
	simon(3);
	cout << "정수를 하나 고르세요~" << endl;
	int count;
	cin >> count;
	simon(count);
	cout << "끝" << endl;
	return 0;
}

void simon(int n)
{
	cout << "simon 왈 발가락을" << n << "번 두드려라." << endl;
}