#pragma once
#include<iostream>
#include "../factors/track.h"
#include "../factors/junction.h"
#include "../factors/station.h"
/*
역명 : 풍산
역번 : k325
  tsu01
2 jpu02 jpd01 1
2 tpu01 tpd01 1
2 jpu01 jpd02 1
        tsd01
*/
station k325("탄현", "k325");

//u                                           //d
track k325_tpu01("k325_tpu01",  200, true);   track k325_tpd01("k325_tpd01",  200, true);
track k325_tsu01("k325_tsu01", 1300, true);   track k325_tsd01("k325_tsd01", 1300, true);

junction k325_jpu01("k325_jpu01", true);          junction k325_jpd01("k325_jpd01", true);
junction k325_jpu02("k325_jpu02", true);          junction k325_jpd02("k325_jpd02", true);

void setk325(void){
    k325_jpu01.settrack1(&k325_tpu01);                k325_jpd01.settrack1(&k325_tpd01);
    k325_jpu01.setjunction1(&k325_jpu02);             k325_jpd01.setjunction1(&k325_jpd02);
    k325_jpu02.settrack1(&k325_tsu01);                k325_jpd02.settrack1(&k325_tsd01);
  
    k325.setjufirst(&k325_jpu01);
    k325.setjulast(&k325_jpu02);
    k325.setjdfirst(&k325_jpd01);
    k325.setjdlast(&k325_jpd02);
}