#pragma once
#include<iostream>
#include<string>
using namespace std;

class track{
    public:
        track();
        track(string namev, int lengthv, bool directionv);
        track(const track& trackv);

        void setname(string namev);
        void setlength(int lengthv);
        void setdirection(bool directionv);

        string getname(void);
        int getlength(void);
        bool getdirection(void);
    private:
        string name;
        int length;
        bool direction; //true : 유향, false : 무향
};
track::track(){
    name = "no named track";
    length = 0;
    direction = NULL;
}
track::track(string namev, int lengthv, bool directionv){
    name = namev;
    length = lengthv;
    direction = directionv;
}
track::track(const track& trackv){
    name = trackv.name;
    length = trackv.length;
    direction = trackv.direction;
}

void track::setname(string namev){
    name = namev;
}
void track::setlength(int lengthv){
    length = lengthv;
}
void track::setdirection(bool directionv){
    direction = directionv;
}
string track::getname(void){
    return name;
}
int track::getlength(void){
    return length;
}
bool track::getdirection(void){
    return direction;
}

//플랫폼트랙 : 역내 플랫폼과 대응되는 트랙
//쓰루트랙 : 역내 통과 트랙
//섹션트랙 : 역간 트랙
//디포트랙 : 열차 보관 목적의 트랙
//연결트랙 : 위에 해당하지 않는 트랙

//추상클래스 has-a 문제로 상속하지 않음