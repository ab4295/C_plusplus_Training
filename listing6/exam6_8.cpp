#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

const int strSize = 20;

using namespace std;

int main()
{
	char fileName[strSize];
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하십시오 : ";
	cin.getline(fileName,strSize);

	inFile.open(fileName);

	if(!inFile.is_open())
	{
		cout << fileName << "을 열 수 없습니다. "<< endl;
		cout << "프로그램을 종료합니다." << endl;
		exit(EXIT_FAILURE);
	}

	string str;
	int count = 0;

	getline(inFile,str);

	while(inFile.good())
	{
		++count;
	} 
	if(inFile.eof())
	{
		cout << "파일 끝에 도달 하였습니다." << endl;
	}

	cout << count << endl;
	inFile.close();
	return 0;
}