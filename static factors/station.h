/* 역 포인팅에 대해 무한 반복의 가능성 */
/* setstation 적절히 수정 바람 */

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

        void transit(junction* transit0); //정션으로 정차 위치 지정-가중치(트랙)의 거리를 차례로 출력

        /* 단, 상, 하행역 설정 뿐 아니라 '단위역 이어붙이기'(각 역의 끝 정션을 포인팅)를 겸함 */
        void setupstation(station us); //단위역 이어붙이기-상행
        void setdownstation(station ds); //단위역 이어붙이기-하행

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
        station* getupstation(void);
        station* getdownstation(void);
    private:
        string name; //역명
        string number; //역번
        
        //1선
        junction* jufirst; //상행 첫 정션
        junction* julast; //상행 마지막 정션
        junction* jdfirst; //하행 첫 정션
        junction* jdlast; //하행 마지막 정션

        station* upstation;
        station* downstation;
};

station::station(){
    name = "no named station";
    number = "no station number";
    jufirst = NULL;
    julast = NULL;
    jdfirst = NULL;
    jdlast = NULL;
    upstation = NULL;
    downstation = NULL;
}
station::station(string namev, string numberv){
    name = namev;
    number = numberv;
    jufirst = NULL;
    julast = NULL;
    jdfirst = NULL;
    jdlast = NULL;
    upstation = NULL;
    downstation = NULL;
}

void station::setupstation(station us){
    /* 역 포인팅 */
    upstation = &us;
    us.setdownstation(*this);
    
    /* 정션 포인팅 */
    julast->setjunction1(us.getjufirst());
    us.jdlast->setjunction1(jdfirst);
}
void station::setdownstation(station ds){
    /* 역 포인팅 */
    downstation = &ds;
    ds.setupstation(*this);

    /* 정션 포인팅 */
    jdlast->setjunction1(ds.getjdfirst());
    ds.julast->setjunction1(jufirst);
    
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
station* station::getupstation(void){
    return upstation;
}
station* station::getdownstation(void){
    return downstation;
}