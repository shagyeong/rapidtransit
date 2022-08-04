#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 탄현
역번 : k327
  tsu01
2 jpu02 jpd01 1
2 tpu01 tpd01 1
2 jpu01 jpd02 1
        tsd01
*/
station k327("탄현", "k327");

//u                                               //d
track k327_tpu01("k327_tpu01", 70,  200, true);   track k327_tpd01("k327_tpd01", 70,  200, true);
track k327_tsu01("k327_tsu01", 70, 1300, true);   track k327_tsd01("k327_tsd01", 70, 1300, true);

junction k327_jpu01("k327_jpu01", true);          junction k327_jpd01("k327_jpd01", true);
junction k327_jpu02("k327_jpu02", true);          junction k327_jpd02("k327_jpd02", true);

int main(void){
    k327_jpu01.settrack1(&k327_tpu01);                k327_jpd01.settrack1(&k327_tpd01);
    k327_jpu01.setjunction1(&k327_jpu02);             k327_jpd01.setjunction1(&k327_jpd02);
    k327_jpu02.settrack1(&k327_tsu01);                k327_jpd02.settrack1(&k327_tsd01);
  
    k327.setjufirst(&k327_jpu01);
    k327.setjulast(&k327_jpu02);
    k327.setjdfirst(&k327_jpd01);
    k327.setjdlast(&k327_jpd02);

    return 0;
}