#pragma once
#include<iostream>
using namespace std;

class train{
    public:
        train();
        train(string numberv, double accv, double decv, int tspeedv, int mspeedv, int carsv);
        
        void setnumber(string numberv);
        void setacc(double accv);
        void setdec(double decv);
        void settspeed(int tspeedv);
        void setmspeed(int mspeedv);
        void setcars(int carsv);

        string getnumber(void);
        double getacc(void);
        double getdec(void);
        int gettspeed(void);
        int getmspeed(void);
        int getcars(void);
    private:
        string number; //열차번호
        double acc; //가속력
        double dec; //감속력
        int tspeed; //top speed : 영업 최고 속력
        int mspeed; //maximum speed : 설계 최고 속력
        int cars; //차량 수(몇 칸인가?)
};

train::train(){
    number = "no numbered train";
    acc = 0;
    dec = 0;
    tspeed = 0;
    mspeed = 0;
    cars = 0;
}
train::train(string numberv, double accv, double decv, int tspeedv, int mspeedv, int carsv){
    number = numberv;
    acc = accv;
    dec = decv;
    tspeed = tspeedv;
    mspeed = mspeedv;
    cars = carsv;
}

void train::setnumber(string numberv){
    number = numberv;
}
void train::setacc(double accv){
    acc = accv;
}
void train::setdec(double decv){
    dec = decv;
}
void train::settspeed(int tspeedv){
    tspeed = tspeedv;
}
void train::setmspeed(int mspeedv){
    mspeed = mspeedv;
}
void train::setcars(int carsv){
    cars = carsv;
}

string train::getnumber(void){
    return number;
}
double train::getacc(void){
    return acc;
}
double train::getdec(void){
    return dec;
}
int train::gettspeed(void){
    return tspeed;
}
int train::getmspeed(void){
    return mspeed;
}
int train::getcars(void){
    return cars;
}