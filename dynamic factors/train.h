#include<iostream>
using namespace std;

//철도차량
class train{
    public:
        //생성자
        train(double accv, double decv, int tspeedv, int mspeedv, int carsv);

        //멤버 변수
        double acc;     //가속력
        double dec;     //감속력
        int tspeed; //top speed : 영업 최고 속력
        int mspeed; //maximum speed : 설계 최고 속력
        int cars; //차량 수(몇 칸인가?)

        //멤버 메서드
        void standardtime(void);  //표준운전시격 산출 함수
    private:
};

train::train(double accv, double decv, int tspeedv, int mspeedv, int carsv){
    acc = accv;
    dec = decv;
    tspeed = tspeedv;
    mspeed = mspeedv;
    cars = carsv;
}

void train::standardtime(void){
    cout << "pass" << endl;
}