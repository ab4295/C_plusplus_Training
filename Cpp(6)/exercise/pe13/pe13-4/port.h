// port.h
#include <iostream>
using namespace std;
// Port 기초 클래스
class Port
{
private:
	char * brand;
	char style[20];			// 예를 들면 tawny, ruby, vintage
	int bottles;
protected:
public:
	Port(const char * br = "none", const char * st = "none", int b = 0);
	Port(const Port & p);		// 복사 생성자
	virtual ~Port() { delete [] brand; }
	Port & operator=(const Port & p);
	Port & operator+=(int b);	// bottles에 b를 더한다
	Port & operator-=(int b);	// 가능할 경우에 bottles에서 b를 뺀다
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const Port & p);
};

// VintagePort 파생 클래스
class VintagePort : public Port	// style이 항상 "vintage"이다
{
private:
	char * nickname;		// "The Noble", "Old Velvet" 등의 별명
	int year;			// 포도수확년도(빈티지)
public:
	VintagePort(const char * br = "none", const char * st = "vintage", int b = 0, const char * nn = "none", int y = 0);
	VintagePort(const VintagePort & vp);
	~VintagePort() { delete [] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);
};
