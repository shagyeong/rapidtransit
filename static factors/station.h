//역 클래스
#include<iostream>
using namespace std;

class station{
    public:
        //생성자
        station(const char* snumv, const char* snamev);

        //멤버 변수
        //ISO C++ forbids converting a string constant to ‘char*’
        //char*에서 const char*로 변경함
        const char* snumber; //station number : 역 번호
        const char* sname; //station name : 역명

        //멤버 메서드    
    private:
};

//생성자
station::station(const char* snumv, const char* snamev){
    snumber = snumv;
    sname = snamev;
}
//멤버 메서드
