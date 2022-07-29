#pragma once
#include<iostream>
#include<string>
#include "track.h"
using namespace std;

//general junction class-------------------------------------------------------------------------
class junction{
    public:
        junction();
        junction(string namev, bool directionv);
        junction(const junction& junctionv);

        void setname(string namev);
        void setdirection(bool directionv);
        string getname(void);
        bool getdirction(void);
    private:
        string name;
        bool direction; //true : 유향, false : 무향
};

junction::junction(){
    name = "no named junction";
    direction = NULL;
}
junction::junction(string namev, bool directionv){
    name = namev;
    direction = directionv;
}
junction::junction(const junction& junctionv){
    name = junctionv.name;
    direction = junctionv.direction;
}

void junction::setname(string namev){
    name = namev;
}
void junction::setdirection(bool directionv){
    direction = directionv;
}
string junction::getname(void){
    return name;
}
bool junction::getdirction(void){
    return direction;
}

//unijunction : 1선식 분기기(실제로는 분기기가 아님-분기점이 아닌 선로 위 한 지점)
//bijunction : 2선식 분기기
//trijunction : 3선식 분기기

//unijucntion : 1선식 분기점-------------------------------------------------------------------------
class unijunction : public junction{
    public:
        unijunction(
            string namev,
            bool directionv,
            junction junction1v, track track1v
        );

        void setjunction1(junction junction1v);
        void settrack1(track track1v);
        junction getjunction1(void);
        track gettrack1(void);
    private:
        //다음 정션과 가중치
        junction junction1;
        track track1;
};
unijunction::unijunction(
    string namev,
    bool directionv,
    junction junction1v, track track1v
){
    junction(namev, directionv);
    junction1 = junction1v;
    track1 = track1v;
}

void unijunction::setjunction1(junction junction1v){
    junction1 = junction1v;
}
void unijunction::settrack1(track track1v){
    track1 = track1;
}
junction unijunction::getjunction1(void){
    return junction1;
}
track unijunction::gettrack1(void){
    return track1;
}

//bijunction : 2선식 분기점-------------------------------------------------------------------------
class bijunction : public junction{
    public:
        bijunction(
            string namev,
            bool directionv,
            junction junction1v, track track1v,
            junction junction2v, track track2v
        );

        void setjunction1(junction junction1v);
        void setjunction2(junction junction2v);
        void settrack1(track track1v);
        void settrack2(track track2v);
        junction getjunction1(void);
        junction getjunction2(void);
        track gettrack1(void);
        track gettrack2(void);
    private:
        //우측 정션과 가중치
        junction junction1;
        track track1;

        //좌측 정션과 가중치
        junction junction2;
        track track2;
};

bijunction::bijunction(
    string namev,
    bool directionv,
    junction junction1v, track track1v,
    junction junction2v, track track2v
){
    junction(namev, directionv);
    junction1 = junction1v;
    track1 = track1v;

    junction2 = junction2v;
    track2 = track2v;
}

void bijunction::setjunction1(junction junction1v){
    junction1 = junction1v;
}
void bijunction::setjunction2(junction junction2v){
    junction2 = junction2v;
}
void bijunction::settrack1(track track1v){
    track1 = track1v;
}
void bijunction::settrack2(track track2v){
    track2 = track2v;
}
junction bijunction::getjunction1(void){
    return junction1;
}
junction bijunction::getjunction2(void){
    return junction2;
}
track bijunction::gettrack1(void){
    return track1;
}
track bijunction::gettrack2(void){
    return track2;
}

//trijunction : 3선식 분기점-------------------------------------------------------------------------
class trijunction : public junction{
    public:
        trijunction(
            string namev,
            bool directionv,
            junction junction1v, track track1v,
            junction junction2v, track track2v,
            junction junction3v, track track3v
        );

        void setjunction1(junction junction1v);
        void setjunction2(junction junction2v);
        void setjunction3(junction junction3v);
        void settrack1(track track1v);
        void settrack2(track track2v);
        void settrack3(track track3v);
        junction getjunction1(void);
        junction getjunction2(void);
        junction getjunction3(void);
        track gettrack1(void);
        track gettrack2(void);
        track gettrack3(void);
    private:
        //우측 정션과 가중치
        junction junction1;
        track track1;

        //중앙 정션과 가중치
        junction junction2;
        track track2;

        //좌측 정션과 가중치
        junction junction3;    
        track track3;
};

trijunction::trijunction(
    string namev,
    bool directionv,
    junction junction1v, track track1v,
    junction junction2v, track track2v,
    junction junction3v, track track3v
){
    junction(namev, directionv);
    junction1 = junction1v;
    track1 = track1v;
    junction2 = junction2v;
    track2 = track2v;
    junction3 = junction3v;
    track3 = track3v;   
}

void trijunction::setjunction1(junction junction1v){
    junction1 = junction1v;
}
void trijunction::setjunction2(junction junction2v){
    junction2 = junction2v;
}
void trijunction::setjunction3(junction junction3v){
    junction3 = junction3v;
}
void trijunction::settrack1(track track1v){
    track1 = track1v;
}
void trijunction::settrack2(track track2v){
    track2 = track2v;
}
void trijunction::settrack3(track track3v){
    track3 = track3v;
}
junction trijunction::getjunction1(void){
    return junction1;
}
junction trijunction::getjunction2(void){
    return junction2;
}
junction trijunction::getjunction3(void){
    return junction3;
}
track trijunction::gettrack1(void){
    return track1;
}
track trijunction::gettrack2(void){
    return track2;
}
track trijunction::gettrack3(void){
    return track3;
}