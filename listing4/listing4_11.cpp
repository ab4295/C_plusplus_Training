#include<iostream>
#include<string>

using namespace std;

struct inflatable
{
	string name;
	float volume;
	double price;
};

int main()
{
	inflatable guest;
	inflatable pal;

	guest.name = "Glorious Gloria";
	guest.volume = 1.88;
	guest.price = 29.99;

	pal.name = "Audacious Arthur";
	pal.volume = 3.12;
	pal.price = 32.99;

	cout << "지금 판매하고 있는 모형 풍선은" << endl;
	cout << guest.name << "와" << pal.name << "입니다." << endl;

	cout << "두 제품을 $";
	cout << guest.price + pal.price << "에 드리겠습니다." << endl;

	return 0;
}