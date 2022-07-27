#include<iostream>
#include<string>
using namespace std;

//실제로는 다른 디렉토리에서 include
class station; 
class grade;
class train;

class line{
    public:
        line();

    private:
        string color; //노선 상징색
        string name; //노선 명칭
        bool direction; //true : 좌측통행 false : 우측통행

        station* stations; //상행 종점역의 포인터
        grade* grades; //첫 번째 등급의 포인터
        train* trains; //첫 번째 열차의 포인터
};