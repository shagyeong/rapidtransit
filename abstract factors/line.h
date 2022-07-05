//노선 클래스
#include<iostream>
using namespace std;

class line{
    public:
        //생성자
        line(const char* lcolorv);

        //멤버 변수
        const char* linecolor; //노선 상징색
};

line::line(const char* lcolorv){
    linecolor = lcolorv;
}