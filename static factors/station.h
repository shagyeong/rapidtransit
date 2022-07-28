#pragma once
#include<iostream>
#include<string>
#include "track.h"
#include "junction.h"
using namespace std;

class station{
    public:
        station(string snamev, string snumberv, junction* j0v, track* t00v);

        string getsname(void);
        string getsnumber(void);
        junction* getj0(void);
        track* gett00(void);

        void transit(junction* transit0); //정션으로 정차 위치 지정-가중치(트랙)의 거리를 차례로 출력
    private:
        string sname;
        string snumber;
        junction* j0;
        track* t0;
};

station::station(string snamev, string snumberv, junction* j0v, track* t0v){
    sname = snamev;
    snumber = snumberv;
    j0 = j0v;
    t0 = t0v;
}

string station::getsname(void){
    return sname;
}
string station::getsnumber(void){
    return snumber;
}
junction* station::getj0(void){
    return j0;
}
track* station::gett00(void){
    return t0;
}

void transit(junction* transit0){
    
}
