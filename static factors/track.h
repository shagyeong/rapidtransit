#pragma once
#include<iostream>
#include<string>
using namespace std;

class track{
    public:
        track(string namev, int lengthv);

        string getname(void);
        int getlength(void);
    private:
        string name;
        int length;
};

track::track(string namev, int lengthv){
    name = namev;
    length = lengthv;
}

string track::getname(void){
    return name;
}
int track::getlength(void){
    return length;
}