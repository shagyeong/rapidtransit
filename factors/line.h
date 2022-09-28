#include<iostream>
#include "./station.h"
#include "./train.h"

#include<string>
using namespace std;

class line{
    public:
        line(string colorv, string namev, bool directionv, int stopsv);

        int getstops(void);
    private:
        string color; //노선 상징색
        string name; //노선 명칭
        bool direction; //true : 좌측통행 false : 우측통행
        
        int stops; //노선 역 개수
        station* stations; //상행 종점역의 포인터
        train* trains; //첫 번째 열차의 포인터
};

line::line(string colorv, string namev, bool directionv, int stopsv){
    color = colorv;
    name = namev;
    direction = directionv;
    stops = stopsv;

    stations = NULL;
    trains = NULL;
}

int line::getstops(void){
    return stops;
}