#include<iostream>
#include "junction.h"
#include "track.h"
#include "station.h"
using namespace std;

int main(void){
    //서울 133
    track l133_tpu01("l133_tpu01", 70,  200, true);   track l133_tpd01("l133_tpd01", 70,  200, true);
    track l133_tsu01("l133_tsu01", 70, 1500, true);   track l133_tsd01("l133_tsd01", 70, 1500, true);

    junction l133_jpu01("l133_jpu01", true);          junction l133_jpd01("l133_jpd01", true);
    junction l133_jpu02("l133_jpu02", true);          junction l133_jpd02("l133_jpd02", true);

    l133_jpu01.settrack1(&l133_tpu01);                l133_jpd01.settrack1(&l133_tpd01);
    l133_jpu01.setjunction1(&l133_jpu02);             l133_jpd01.setjunction1(&l133_jpd02);

    l133_jpu02.settrack1(&l133_tsu01);                l133_jpd02.settrack1(&l133_tsd01);

    station l133("서울", "133");
    l133.setjufirst(&l133_jpu01);
    l133.setjulast(&l133_jpu02);
    l133.setjdfirst(&l133_jpd01);
    l133.setjdlast(&l133_jpd02);

    //시청 132
    track l132_tpu01("l132_tpu01", 70,  200, true);   track l132_tpd01("l132_tpd01", 70,  200, true);
    track l132_tsu01("l132_tsu01", 70, 1500, true);   track l132_tsd01("l132_tsd01", 70, 1500, true);

    junction l132_jpu01("l132_jpu01", true);          junction l132_jpd01("l132_jpd01", true);
    junction l132_jpu02("l132_jpu02", true);          junction l132_jpd02("l132_jpd02", true);

    l132_jpu01.settrack1(&l132_tpu01);                l132_jpd01.settrack1(&l132_tpd01);
    l132_jpu01.setjunction1(&l132_jpu02);             l132_jpd01.setjunction1(&l132_jpd02);

    l132_jpu02.settrack1(&l132_tsu01);                l132_jpd02.settrack1(&l132_tsd01);

    station l132("시청", "132");
    l132.setjufirst(&l132_jpu01);
    l132.setjulast(&l132_jpu02);
    l132.setjdfirst(&l132_jpd01);
    l132.setjdlast(&l132_jpd02);

    //종각 131
    track l131_tpu01("l131_tpu01", 70,  200, true);   track l131_tpd01("l131_tpd01", 70,  200, true);
    track l131_tsu01("l131_tsu01", 70, 1500, true);   track l131_tsd01("l131_tsd01", 70, 1500, true);

    junction l131_jpu01("l131_jpu01", true);          junction l131_jpd01("l131_jpd01", true);
    junction l131_jpu02("l131_jpu02", true);          junction l131_jpd02("l131_jpd02", true);

    l131_jpu01.settrack1(&l131_tpu01);                l131_jpd01.settrack1(&l131_tpd01);
    l131_jpu01.setjunction1(&l131_jpu02);             l131_jpd01.setjunction1(&l131_jpd02);

    l131_jpu02.settrack1(&l131_tsu01);                l131_jpd02.settrack1(&l131_tsd01);

    station l131("종각", "131");
    l131.setjufirst(&l131_jpu01);
    l131.setjulast(&l131_jpu02);
    l131.setjdfirst(&l131_jpd01);
    l131.setjdlast(&l131_jpd02);

    //종로 130
    track l130_tpu01("l130_tpu01", 70,  200, true);   track l130_tpd01("l130_tpd01", 70,  200, true);
    track l130_tsu01("l130_tsu01", 70, 1500, true);   track l130_tsd01("l130_tsd01", 70, 1500, true);

    junction l130_jpu01("l130_jpu01", true);          junction l130_jpd01("l130_jpd01", true);
    junction l130_jpu02("l130_jpu02", true);          junction l130_jpd02("l130_jpd02", true);

    l130_jpu01.settrack1(&l130_tpu01);                l130_jpd01.settrack1(&l130_tpd01);
    l130_jpu01.setjunction1(&l130_jpu02);             l130_jpd01.setjunction1(&l130_jpd02);

    l130_jpu02.settrack1(&l130_tsu01);                l130_jpd02.settrack1(&l130_tsd01);

    station l130("종로", "130");
    l130.setjufirst(&l130_jpu01);
    l130.setjulast(&l130_jpu02);
    l130.setjdfirst(&l130_jpd01);
    l130.setjdlast(&l130_jpd02);

    l133.setupstation(l132);
    l132.setupstation(l131);
    l131.setupstation(l130);

    junction* iter = l133.getjufirst();
    junction* cond = l130.getjulast();

    while(iter != cond){
        cout << iter->getname() << endl;
        cout << iter->gettrack1()->getname() << " : ";
        cout << iter->gettrack1()->getlength() << "m" << endl;
        cout << endl;

        iter = iter->getjunction1();
    }

    return 0;
}