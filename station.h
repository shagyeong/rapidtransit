//역 클래스
#include<iostream>
using namespace std;

class station{
    public:
        //생성자
        station();
        station(const char* snumv, const char* snamev);
        //멤버 변수
        char* snumber; //station number : 역 번호
        char* sname; //station name : 역명
        //멤버 메서드    
    private:
};

station::station(){
    //*snumber = "0000";
    //*sname = "no name";
}

station::station(const char* snumv, const char* snamev){
    *snumber = *snumv;
    *sname = *snamev;
}