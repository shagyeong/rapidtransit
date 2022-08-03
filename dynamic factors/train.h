#pragma once
#include<iostream>
using namespace std;

//철도차량
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