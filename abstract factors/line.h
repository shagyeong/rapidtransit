#include<iostream>
#include "../static factors/station.h"
#include "../dynamic factors/train.h"
#include "grade.h"

#include<string>
using namespace std;

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