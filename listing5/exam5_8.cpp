#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char ch;

	int count = 0;
	cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력) :";
	cin.get(ch);

	while(cin.fail() == false)
	{
		cout << ch;
		if(ch != 'done')
		{
			count++;
		}
		else
			break;
				
		cin.get(ch);
	}
	cout << count;
	return 0;
}