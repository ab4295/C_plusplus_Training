// error3.cpp -- 예외를 사용한다
#include <iostream>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "두 수를 입력하십시오: ";
    while (std::cin >> x >> y)
    {
        try {                   // try 블록의 시작
            z = hmean(x,y);
        }                       // try 블록의 끝
        catch (const char * s)  // 예외 핸들러의 시작
        {
            std::cout << s << std::endl;
            std::cout << "두 수를 새로 입력하십시오: ";
            continue;
        }                       // 예외 핸들러의 끝
        std::cout << x << ", " << y << "의 조화평균은 "
                  << z << "입니다.\n";
        std::cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
    }
    std::cout << "프로그램을 종료합니다.\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw "잘못된 hmean() 매개변수: a = -b는 허용되지 않습니다.";
    return 2.0 * a * b / (a + b); 
}
