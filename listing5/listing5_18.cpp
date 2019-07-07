#include<iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	cin.get(ch);
	while(cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << count << "문자를 읽었습니다." << endl;
	return 0;
}