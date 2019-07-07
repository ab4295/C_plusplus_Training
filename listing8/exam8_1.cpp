#include<iostream>

using namespace std;

const int SIZE = 8;
int function_count = 0;

inline char* disply(char* ch, int n = 0);

int main()
{
	char ch[SIZE] = "chayo";
	disply(ch);

	cout << "--------------" << endl;

	disply(ch,3);

	return 0;
}/*
char* disply(char* ch, int n)
{
	if(n == 0)
	{
		cout << ch << endl;
	}
	else
	{
		for(int i = 0;i<n;i++)
		{
			cout << ch << endl;
		}
	}

	return ch;
}*/
inline char* disply(char *ch, int n)
{
	function_count++;

	if(n == 0)
	{
		cout << ch << endl;
	}
	else
	{
		for(int i = 0;i<function_count;i++)
		{
			cout << ch << endl;
		}
	}

	return ch;
}