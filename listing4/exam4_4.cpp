#include<iostream>

using namespace std;
/*
struct TCL
{
	char name[20];
	double width;
	int weight;
};

int main()
{
	TCL pizza;

	cin.getline(pizza.name,20);
	cin >> pizza.width;
	cin >> pizza.weight;

	cout << pizza.name << endl;
	cout << pizza.width << endl;
	cout << pizza.weight << endl;
}
*/
struct TCL
{
	char name[20];
	double width;
	int weight;
};
int main()
{
	TCL *pizza = new TCL;

	cin.getline(pizza->name,20);
	cin >> pizza->width;
	cin >> pizza->weight;

	cout << pizza->name << endl;
	cout << pizza->width << endl;
	cout << pizza->weight << endl;
}