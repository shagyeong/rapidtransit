#pragma once
#include<iostream>
#include<string>
using namespace std;

class track{
    public:
        track(string namev, int lengthv, bool directionv);

        string getname(void);
        int getlength(void);
    private:
        string name;
        int length;
        bool direction; //유향/무향
};

track::track(string namev, int lengthv, bool directionv){
    name = namev;
    length = lengthv;
    direction = directionv;
}

string track::getname(void){
    return name;
}
int track::getlength(void){
    return length;
}