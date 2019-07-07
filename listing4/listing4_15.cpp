#include<iostream>

using namespace std;

int main()
{
	int updates = 6;
	int *p_updates;

	p_updates = &updates;

	cout << "값 : updates = " << updates << endl;
	cout << "값 : *p_updates = " << *p_updates << endl;
}
