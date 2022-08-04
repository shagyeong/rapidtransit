#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 금릉
역번 : k330
  tsu01
2 jpu02 jpd01 1
2 tpu01 tpd01 1
2 jpu01 jpd02 1
        tsd01
*/
station k330("금릉", "k330");

//u                                               //d
track k330_tpu01("k330_tpu01", 70,  200, true);   track k330_tpd01("k330_tpd01", 70,  200, true);
track k330_tsu01("k330_tsu01", 70, 1300, true);   track k330_tsd01("k330_tsd01", 70, 1300, true);
    
junction k330_jpu01("k330_jpu01", true);          junction k330_jpd01("k330_jpd01", true);
junction k330_jpu02("k330_jpu02", true);          junction k330_jpd02("k330_jpd02", true);
  
int main(void){
    k330_jpu01.settrack1(&k330_tpu01);                k330_jpd01.settrack1(&k330_tpd01);
    k330_jpu01.setjunction1(&k330_jpu02);             k330_jpd01.setjunction1(&k330_jpd02);
    k330_jpu02.settrack1(&k330_tsu01);                k330_jpd02.settrack1(&k330_tsd01);

    k330.setjufirst(&k330_jpu01);
    k330.setjulast(&k330_jpu02);
    k330.setjdfirst(&k330_jpd01);
    k330.setjdlast(&k330_jpd02);

    return 0;
}