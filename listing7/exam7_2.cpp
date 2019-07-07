#include<iostream>

const int MAX = 10;

using namespace std;
void fill_Arr(int arr[], int n);
void out_Arr(int arr[], int n);
int aveage_Arr(int arr[], int n);

int main()
{
	int score[MAX];

	fill_Arr(score,MAX);
	out_Arr(score,MAX);
	aveage_Arr(score,MAX);

	return 0;
}

void fill_Arr(int arr[], int n)
{
	int input;

	for(int i= 0;i<MAX;i++)
	{
		cout << "점수를 입력하십시오 :";
		cin >> input;

		if(input == 0)
			break;
		else
			arr[i] = input;
	}
}

void out_Arr(int arr[], int n)
{
	for(int i = 0;i<MAX;i++)
	{
		cout << i << "번쨰 점수는 :";
		cout << arr[i] << endl;
	}
}

int aveage_Arr(int arr[], int n)
{
	int sum = 0;
	int average;
	for(int i = 0;i<MAX;i++)
	{
		sum += arr[i];
	}
	average = sum/MAX;
	cout << average<< endl;
	return average;
}