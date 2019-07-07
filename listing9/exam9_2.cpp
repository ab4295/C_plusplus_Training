#include<iostream>
#include<string>

using namespace std;

void strcount(const string str);

int main()
{
	string str;
	char next;

	cout << "영문으로 한 행을 입력하십시오 : " << endl;
	getline(cin,str);
	while(cin)
	{
		cin.get(next);
		while(next != 'n')
			cin.get(next);
		strcount(&str);
		cout << "다음 행을 입력하십시오(끝내려면 빈 행을 입력)" << endl;
		getline(cin,str);
	}

	cout << "프로그램을 종료합니다. " << endl;
	return 0;
} 

void strcount(const string str)
{
	static int total = 0; //정적 지역변수
	int count = 0;

	cout << "\"" << str << "\"에는";
	while(*str++)
		count++;
	total += count;
	cout << count << "개의 문자가 있습니다." << endl;
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다. " << endl;
}
/*int main()
{
	string str;
	char next;

	cout << "영문으로 한 행을 입력하십시오 : ";

	while (1)
	{
		getline(cin, str);
		if(str[0] == '\0') 
			break;
		strcount(str);
		cout << "¥Ÿ¿Ω «‡¿ª ¿‘∑¬«œΩ Ω√ø¿(≥°≥ª∑¡∏È ∫Û «‡¿ª ¿‘∑¬):\n";
	}
	cout << "«¡∑Œ±◊∑•¿ª ¡æ∑·«’¥œ¥Ÿ.\n";
	return 0;
}

void strcount(const string str)
{
	static int total = 0;		// ¡§¿˚ ¡ˆø™ ∫Øºˆ
	int count;			// ¿⁄µø ¡ˆø™ ∫Øºˆ

	cout << "\"" << str <<"\"ø°¥¬ ";
	for(count = 0 ; str[count] != '\0'; count++);	// πÆ¿⁄ø≠¿« ≥°±Ó¡ˆ ƒ´øÓ∆Æ«—¥Ÿ

	total += count;
	cout << count << "∞≥¿« πÆ¿⁄∞° ¿÷Ω¿¥œ¥Ÿ.\n";
	cout << "¡ˆ±›±Ó¡ˆ √— " << total << "∞≥¿« πÆ¿⁄∏¶ ¿‘∑¬«œºÃΩ¿¥œ¥Ÿ.\n";
}
*/