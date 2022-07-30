#pragma once
#include<iostream>
#include<string>
#include "track.h"
#include "junction.h"
using namespace std;

class station{
    public:
        station();
        station(string namev, string numberv);

        void setname(string namev);
        void setnumber(string numberv);
        void setjufirst(junction* jufirstv);
        void setjulast(junction* julastv);
        void setjdfirst(junction* jdfirstv);
        void setjdlast(junction* jdlastv);

        string getname(void);
        string getnumber(void);
        junction* getjufirst(void);
        junction* getjulast(void);
        junction* getjdfirst(void);
        junction* getjdlast(void);

        void transit(junction* transit0); //정션으로 정차 위치 지정-가중치(트랙)의 거리를 차례로 출력
    private:
        string name; //역명
        string number; //역번
        
        junction* jufirst; //상행 첫 정션
        junction* julast; //상행 마지막 정션
        junction* jdfirst; //하행 첫 정션
        junction* jdlast; //하행 마지막 정션
};

station::station(){
    name = "no named station";
    number = "no station number";
    jufirst = NULL;
    julast = NULL;
    jdfirst = NULL;
    jdlast = NULL;
}
station::station(string namev, string numberv){
    name = namev;
    number = numberv;
    jufirst = NULL;
    julast = NULL;
    jdfirst = NULL;
    jdlast = NULL;
}

void station::setname(string namev){
    name = namev;
}
void station::setnumber(string numberv){
    number = numberv;
}
void station::setjufirst(junction* jufirstv){
    jufirst = jufirstv;
}
void station::setjulast(junction* julastv){
    julast = julastv;
}
void station::setjdfirst(junction* jdfirstv){
    jdfirst = jdfirstv;
}
void station::setjdlast(junction* jdlastv){
    jdlast = jdlastv;
}

string station::getname(void){
    return name;
}
string station::getnumber(void){
    return number;
}
junction* station::getjufirst(void){
    return jufirst;
}
junction* station::getjulast(void){
    return julast;
}
junction* station::getjdfirst(void){
    return jdfirst;
}
junction* station::getjdlast(void){
    return jdlast;
}