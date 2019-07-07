#include<iostream>
#include<cstring>

using namespace std;

struct candyBar{
	char name[20];
	double weight;
	int calrorie;
};

candyBar* set(candyBar& bar, char* ch, double a, int b);
void show(const candyBar& bar);

int main()
{
	candyBar chayo = {"Millennium Munch",2.85,350};
	show(chayo);

	set(chayo,"chayo"	,1.851,760);
	show(chayo);

	return 0;
}
candyBar* set(candyBar& bar, char* ch, double a, int b)
{
	strcpy(bar.name, ch);
	bar.weight = a;
	bar.calrorie = b;
}
void show(const candyBar& bar)
{
	cout << bar.name << endl;
	cout << bar.weight << endl;
	cout << bar.calrorie << endl;
}