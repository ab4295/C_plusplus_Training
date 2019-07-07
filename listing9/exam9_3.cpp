#include<iostream>

using namespace std;

const int SIZE = 2;
const int BUFSIZE = 512;
const int CHARSIZE = 10;

struct chaff
{
	char dross[20];
	int slag;
};
char* BUF[BUFSIZE];

int main()
{
	char input[CHARSIZE];
	chaff *ps = new(BUF)chaff[SIZE];

	for(int i = 0;i<SIZE;i++)
	{
		cout << "dross의 이름을 입력하십시오 :";
		cin >> input;
		strcpy(ps[i].dross,input);
		
		cout << "slag의 값을 입력하십시오 :";
		cin >> ps[i].slag;
	}

	for(int i = 0 ;i<SIZE;i++)
	{
		cout << ps[i].dross << endl;
		cout << ps[i].slag << endl;
	}

	return 0;
}