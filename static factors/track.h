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

        //파생 클래스 메서드
        //플랫폼트랙
        virtual void setnumber(int numberv) = 0;
        virtual void setcar(int carv) = 0;
        virtual void setdoor(bool doorv) = 0;
        virtual int getnumber(void) = 0;
        virtual int getcar(void) = 0;
        virtual bool getdoor(void) = 0;
        //디포트랙
        virtual void settrain(bool trainv) = 0;
        virtual bool gettrain(void) = 0;

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

//platformtrack : 역내 플랫폼과 대응되는 트랙-------------------------------------------------------------------------
class platformtrack : public track{
    public:
        platformtrack(string namev, int lengthv, bool directionv, int numberv, int carv, bool doorv)
        :track(namev, lengthv, directionv){
            number = numberv;
            car = carv;
            door = doorv;
        }
        
        void setnumber(int numberv);
        void setcar(int carv);
        void setdoor(bool doorv);
    
        int getnumber(void);
        int getcar(void);
        bool getdoor(void);
    private:
        int number; //플랫폼 번호
        int car; //대응 칸수
        bool door; //true : 왼쪽 문열림, false : 오른쪽 문열림
};

void platformtrack::setnumber(int numberv){
    number = numberv;
}
void platformtrack::setcar(int carv){
    car = carv;
}
void platformtrack::setdoor(bool doorv){
    door = doorv;
}
    
int platformtrack::getnumber(void){
    return number;
}
int platformtrack::getcar(void){
    return car;
}
bool platformtrack::getdoor(void){
    return door;
}

//throughtrack : 역내 통과 트랙-------------------------------------------------------------------------
class throughtrack : public track{
    public:
    private:
};

//sectiontrack : 역간 트랙-------------------------------------------------------------------------
class sectiontrack : public track{
    
};

//depottrack : 열차 보관 목적의 트랙-------------------------------------------------------------------------
class depottrack : public track{
    public:
        depottrack(string namev, int lengthv, bool directionv, bool trainv)
        :track(namev, lengthv, directionv){
            train = trainv;
        }

        void settrain(bool trainv);

        bool gettrain(void);
    private:
        bool train; //true : 주박 열차 있음, false : 주박 열차 없음
};

void depottrack::settrain(bool trainv){
    train = trainv;
}

bool depottrack::gettrain(void){
    return train;
}

//connectiontrack : 위에 해당하지 않는 트랙-------------------------------------------------------------------------
class connectiontrack : public track{
    
};
