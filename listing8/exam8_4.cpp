#include<iostream>

using namespace std;

const int MAX = 5;
template<typename T>
T max5(T* a);

int main()
{
	int arr1[MAX] = {1,2,3,4,5};
	double arr2[MAX] = {1.0,2.0,3.0,4.0,5.0};

	max5(arr1);
	max5(arr2);

	return 0;
}

template<typename T>
T max5(T* a)
{
	T temp = a[0];

	for(int i = 1;i<MAX;i++)
	{
		if(temp < a[i])
			temp = a[i];
	}

	cout << temp << endl;

	return temp;
}
