#include<iostream>
#include<string>
using namespace std;

template<typename T>
T maxn(T* arr, int count);

template<> char* maxn(char* arr[], int count); //명시적 특수화

int main()
{
	int arr1[6] = {1,2,3,4,5,6};
	double arr2[4] = {1.0,2.4,4.2,5.6};
	char* arr3[4] = {"chayo","wisdom","hh","jiji"};

	maxn(arr1,6);
	maxn(arr2,4);
	maxn(arr3,4);

	return 0;
}

template<typename T>
T maxn(T* arr, int count)
{
	T temp = arr[0];

	for(int i = 1;i<count;i++)
	{
		if(temp < arr[i])
		{
			temp = arr[i];
		}
	}

	cout << temp << endl;

	return temp;
}
//포인터 배열 알아 둘것.
template<> char* maxn(char** arr, int count) /* 명시적 특수화 */
{
	char* temp = arr[0];

	for(int i = 0;i<count;i++)
	{
		if(strlen(temp) < strlen(arr[i]))
		{
			temp = arr[i];
		}
	}

	cout << temp << endl;

	return temp;
}