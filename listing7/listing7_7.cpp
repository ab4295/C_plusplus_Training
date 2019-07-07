#include<iostream>

using namespace std;

const int MAX = 5;

//함수 원형 - 컴파일러도 편하고 나도 편하고 쓰는 것이 왠만하면 좋음.
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
	double properties[MAX];

	int size = fill_array(properties,MAX);
	show_array(properties,size);

	if(size > 0)
	{
		cout << "재평가율을 입력하십시오 : ";
		double factor;
		while(!(cin >> factor))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "잘못 입력하였습니다, 수치를 입력하세요 :";
		}
		revalue(factor,properties,size);
		show_array(properties,size);
	}

	cout << "프로그램을 종료합니다. " << endl;
	cin.get();
	cin.get();

	return 0;
}

int fill_array(double ar[], int limit) //이 부분은 배열의 원소를 채우는 부분이므로 const가 들어가지 않음. 
{
	double temp;
	int i;
	for(i= 0;i <limit;i++)
	{
		cout << i + 1 << "번째 부동산의 가격 : $";
		cin >> temp;

		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "입력불량; 입력 과정을 끝내겠습니다." << endl;
			break;
		}
		else if(temp < 0)
			break;
		ar[i] = temp;
	}

	return i;
}

void show_array(const double ar[], int n)
{
	for(int i = 0;i<n;i++)
	{
		cout << (i+1) << "번 부동산 : $";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], int n) //이곳은 재평가율 r 을 곱해야 하므로 const 키워드 들어가지 않음
{
	for(int i = 0;i<n;i++)
	{
		ar[i] *= r;
	}
}