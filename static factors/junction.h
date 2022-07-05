//정션(분기점) 클래스
#include<iostream>
using namespace std;

class junction{
    public:
        //멤버 변수
        const char* jnumber;
        station* soj; //station of the junction : 정션으로부터 어느 역의 정션인지 참조 가능

        //생성자
        junction(const char* jnumv, station* sojv); //junction number value, soj value

        //멤버 메서드
    private:
        //멤버 변수
        //멤버 메서드
};

junction::junction(const char* jnumv, station* sojv){
    jnumber = jnumv;
    soj = sojv;
}