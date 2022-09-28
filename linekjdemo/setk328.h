#pragma once
#include<iostream>
#include "../factors/track.h"
#include "../factors/junction.h"
#include "../factors/station.h"
/*
역명 : 야당
역번 : k328
  tsu01
2 jpu02 jpd01 1
2 tpu01 tpd01 1
2 jpu01 jpd02 1
        tsd01
*/
station k328("야당", "k328");

//u                                           //d
track k328_tpu01("k328_tpu01",  200, true);   track k328_tpd01("k328_tpd01",  200, true);
track k328_tsu01("k328_tsu01", 1300, true);   track k328_tsd01("k328_tsd01", 1300, true);

junction k328_jpu01("k328_jpu01", true);          junction k328_jpd01("k328_jpd01", true);
junction k328_jpu02("k328_jpu02", true);          junction k328_jpd02("k328_jpd02", true);

void setk328(void){
    k328_jpu01.settrack1(&k328_tpu01);                k328_jpd01.settrack1(&k328_tpd01);
    k328_jpu01.setjunction1(&k328_jpu02);             k328_jpd01.setjunction1(&k328_jpd02);
    k328_jpu02.settrack1(&k328_tsu01);                k328_jpd02.settrack1(&k328_tsd01);


    k328.setjufirst(&k328_jpu01);
    k328.setjulast(&k328_jpu02);
    k328.setjdfirst(&k328_jpd01);
    k328.setjdlast(&k328_jpd02);
}