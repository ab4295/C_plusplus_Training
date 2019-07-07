#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char ch;
	char temp;

	cin.get(ch);

	while(ch != '@')
	{
		if(isalpha(ch))
		{
			if(islower(ch))
			{
				temp = toupper(ch);
			}
			else if(isupper(ch))
			{
				temp = tolower(ch);
			}
			else
			{
				temp = ch;
			}
			cout << temp;
		}
		else
		{
			cin.get();
			coutinue;
		}
	}

	return 0;
}