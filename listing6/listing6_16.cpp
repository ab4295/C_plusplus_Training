#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

const int SIZE = 60;

int main()
{
	char fileName[SIZE];
	ifstream inFile; //객체 생성
	cout << "데이터 파일의 이름을 입력하시오. :";
	cin.getline(fileName,SIZE); //파일이름 입력받고
	inFile.open(fileName); //파일에 연결

	if(!inFile.is_open()) //제대로 열리지 않는다면
	{
		cout << fileName << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다." << endl; 
		exit(EXIT_FAILURE); //종료
	}

	double value; //읽어들일 값.
	double sum = 0.0; //합계
	int count = 0; //읽은 항목의 개수

	inFile >> value; //첫번째 값을 읽는다.

	while(inFile.good()) //EOF가 아닌동안, 잘못된 것이 없으면
	{
		++count;
		sum += value;
		inFile >> value;
	}
	//여가서부터는 루프가 왜 종료되었는지에 대한 검사.
	if(inFile.eof())
		cout << "파일 끝에 도달했습니다." << endl;
	else if(inFile.fail()) //fail 메소드는 eof에 도달하거나 데이터형 불일치면 true를 리턴한다.
		cout << "데이터 불일치로 입력이 종료되었습니다." << endl;
	else
		cout << "알 수 없는 이유로 입력이 종료되었습니다." << endl;

	if(count == 0)
		cout << "데이터가 없습니다." << endl;
	else
	{
		cout << "읽은 항목의 개수 : " << count << endl;
		cout << "합계 :" << sum << endl;
		cout << "평균 :" << sum/count << endl;
	}
	
	inFile.close();

	return 0;
}