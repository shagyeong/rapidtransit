#include<iostream>
using namespace std;

//철도차량 성능
class performance{
    public:
        //생성자
        performance(double accv, double decv, int tspeedv, int mspeedv, int carsv);
        //멤버 변수
        double acc;     //가속력
        double dec;     //감속력
        int tspeed; //top speed : 영업 최고 속력
        int mspeed; //maximum speed : 설계 최고 속력
        int cars; //차량 수(몇 칸인가?)
    private:
};

performance::performance(double accv, double decv, int tspeedv, int mspeedv, int carsv){
    acc = accv;
    dec = decv;
    tspeed = tspeedv;
    mspeed = mspeedv;
    cars = carsv;
}