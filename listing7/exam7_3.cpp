#include<iostream>

using namespace std;

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

box print_Struct(box b1);
box volume_Sturct(box* b1);

int main()
{
	box b = {"Chayo",4,5,6};

	print_Struct(b);
	volume_Sturct(&b);

	cout << "부피는?" << endl;
	cout << b.volume << endl;
}

box print_Struct(box b1)
{
	cout << b1.maker << "" << b1.height << "" << b1.width << "" << b1.length;
}

box volume_Sturct(box* b1)
{
	b1->volume = b1->height * b1->width * b1->length;
}