#include<iostream>

using namespace std;

void oil(int x);

int main()
{
	int texas = 31;
	int year = 2011;
	cout << "main()에서, texas = " << texas << ", &tesxas = ";
	cout << &texas << endl;
	cout << "main()에서, year = " << year << ", &year = ";
	cout << &year << endl;
	oil(texas);
	cout << "main()에서, texas = " << texas << ", &tesxas = ";
	cout << &texas << endl;
	cout << "main()에서, year = " << year << ", &year = ";
	cout << &year << endl;

	return 0;
}

void oil(int x)
{
	int texas = 5;

	cout << "oil에서, texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "oil에서, x = " << x << ", &x = ";
	cout << &x << endl;
	{
		int texas = 113;
		cout << "블록에서, texas = " << texas;
		cout << ", &texas = " << &texas << endl;
		cout << "블록에서, x = " << x << ", &x = ";
		cout << &x << endl;
	}

	cout << "블록을 통과한 후, texas = " << texas;
	cout << ", &texas = " << &texas << endl;
}