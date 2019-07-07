#include<iostream>

#define TRUE 1

using namespace std;

int main()
{
	char ch;

	while(TRUE)
	{
		cin.get(ch);

		if(ch == 'q' || ch == 'Q')
			break;
		else if(ch == 'c' || ch == 'p' || ch = 't' || ch = 'g')
		{
			switch(ch)
			{
				case 'c' : cout << "hihi";
				case 'p' : cout << "kieeek";
				case 't' : cout << "humteresting";
				case 'g' : cout << "kiiieeeeeeeek";
			} 
		}
		else
			cout << "다시 입력해 주세요~ ";
	}
}