#include<iostream>

const int ArSize = 8;

using namespace std;

int sum_arr(const int* begin, const int* end);

int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "먹은 과자 수 합계 :" << sum << endl;
	sum = sum_arr(cookies,cookies + 3);
	cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다." << endl;
	sum = sum_arr(cookies+4,cookies+8);
	cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다." << endl;
	return 0;
}

int sum_arr(const int* begin, const int* end) //배열의 원소의 위치를 받는 것 이므로 주소값을 받는 것임 따라서 []이 오는 것이 아니라 포인터가 와야 함
{
	const int *pt; //포인터 변수
	int total = 0;

	for(pt = begin;pt!=end;pt++)
	{
		total = total + *pt; //*pt의 값을 변경 시키지 않으려고 const사용.
	}

	return total;
}