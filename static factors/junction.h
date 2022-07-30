#pragma once
#include<iostream>
#include "track.h"
using namespace std;

class junction{
    public:
        junction();
        junction(string namev, bool directionv);
        junction(const junction& junctionv);
        //~junction(); //double free or corruption 오류

        void setname(string namev);
        void setdirection(bool directionv);
        void setjunction1(junction* junction1v); void settrack1(track* track1v);
        void setjunction2(junction* junction2v); void settrack2(track* track2v);
        void setjunction3(junction* junction3v); void settrack3(track* track3v);

        string getname(void);
        bool getdirection(void);
        junction* getjunction1(void); track* gettrack1(void);
        junction* getjunction2(void); track* gettrack2(void);
        junction* getjunction3(void); track* gettrack3(void);
    private:
        string name;
        bool direction;

        junction* junction1; track* track1;
        junction* junction2; track* track2;
        junction* junction3; track* track3;
};

junction::junction(){
    name = "no named junction";
    direction = false;
    junction1 = NULL; track1 = NULL;
    junction2 = NULL; track2 = NULL;
    junction3 = NULL; track3 = NULL;
}
junction::junction(string namev, bool directionv){
    name = namev;
    direction = directionv;
    junction1 = NULL; track1 = NULL;
    junction2 = NULL; track2 = NULL;
    junction3 = NULL; track3 = NULL;
}
junction::junction(const junction& junctionv){
    name = junctionv.name;
    direction = junctionv.direction;
    junction1 = junctionv.junction1; track1 = junctionv.track1;
    junction2 = junctionv.junction2; track2 = junctionv.track2;
    junction3 = junctionv.junction3; track3 = junctionv.track3;
}
//junction::~junction(){
//    delete junction1; delete track1;
//    delete junction2; delete track2;
//    delete junction3; delete track3;
//}

void junction::setname(string namev){
    name = namev;
}
void junction::setdirection(bool directionv){
    direction = directionv;
}
void junction::setjunction1(junction* junction1v){
    junction1 = junction1v;
}
void junction::setjunction2(junction* junction2v){
    junction2 = junction2v;
}
void junction::setjunction3(junction* junction3v){
    junction3 = junction3v;
}
void junction::settrack1(track* track1v){
    track1 = track1v;
}
void junction::settrack2(track* track2v){
    track2 = track2v;
}
void junction::settrack3(track* track3v){
    track3 = track3v;
}

string junction::getname(void){
    return name;
}
bool junction::getdirection(void){
    return direction;
}
junction* junction::getjunction1(void){
    return junction1;
}
junction* junction::getjunction2(void){
    return junction2;
}
junction* junction::getjunction3(void){
    return junction3;
}
track* junction::gettrack1(void){
    return track1;
}
track* junction::gettrack2(void){
    return track2;
}
track* junction::gettrack3(void){
    return track3;
}