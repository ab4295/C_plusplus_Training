#include<iostream>
#include<cstring>

using namespace std;
struct stringy
{
	char* str1;
	int ct;
};
void set(stringy& str, char* ch);
void show(stringy& str, int n = 1);
void show(char* cst, int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be";
	set(beany,testing);

	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy& str, char* ch)
{
	char *cstr = new char;
	str.str1 = cstr;
	strcpy(str.str1,ch);
	str.ct = strlen(str.str1);
}
void show(stringy& str, int n)
{
	for(int i = 0;i<n;i++)
	{
		cout << str.str1 << endl;
	}
}
void show(char* cst, int n)
{
	for(int i = 0 ;i<n;i++)
	{
		cout << cst << endl;
	}
}