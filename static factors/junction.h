#pragma once
#include<iostream>
#include<string>
using namespace std;

class junction{
    public:
        junction();
        junction(string namev, bool directionv);

        string getname(void);
    private:
        string name;
        bool direction; //유향/무향
};

junction::junction(){
    name = "no named junction";
    direction = NULL;
}
junction::junction(string namev, bool directionv){
    name = namev;
    direction = directionv;
}

string junction::getname(void){
    return name;
}

//unijunction : 1선식 분기점(분기기가 아님-선로 위 한 지점)
//bijunction : 2선식 분기점
//trijunction : 3선식 분기점

class unijunction : public junction{
    public:
        unijunction(string namev, bool directionv, junction junction1v, track track1v):junction(namev, directionv){junction1 = junction1v, track1 = track1v};
    private:
        //다음 정션과 가중치
        junction junction1;
        track track1;
};

class bijunction : public junction{
    public:
        bijunction(
            string namev,
            bool directionv,
            junction junction1v, track track1v,
            junction junction2v, track track2v
        );
    private:
        //좌측 정션과 가중치
        junction junction1;
        track track1;

        //우측 정션과 가중치
        junction junction2;
        track track2;
};

class trijunction : public junction{
    public:
        trijunction(
            string namev,
            bool directionv,
            junction junction1v, track track1v,
            junction junction2v, track track2v,
            junction junction3v, track track3v
        );
    private:
        //좌측 정션과 가중치
        junction junction1;
        track track1;

        //중앙 정션과 가중치
        junction junction2;
        track track2;

        //우측 정션과 가중치
        junction junction3;    
        track track3;
};