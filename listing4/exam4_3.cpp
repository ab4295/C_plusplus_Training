#include<iostream>

using namespace std;

struct candyBar
{
	char name[20];
	double weight;
	int calorie;
};

int main()
{
	candyBar snack
	{
		"Mocha Munch",
		2.3,
		350
	};

	candyBar food[3] = 
	{
		{"chayo1",3.4,240},
		{"chayo2",4.2,415},
		{"chayo3",4.5,152}
	};

	cout << snack.name << endl;
	cout << snack.weight << endl;
	cout << snack.calorie << endl;

	for(int i = 0;i<3;i++)
	{
		cout << food[i].name << endl;
		cout << food[i].weight << endl;
		cout << food[i].calorie << endl;
	}
	return 0;
}

