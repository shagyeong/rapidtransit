#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 일산
역번 : k326
                            jxx00
                            txx00
                            jxx00
                tsu01 txx00       txx00
jxx00 x x jxx00 jpu02 4               3 jp201 jxx00 x x jxx00
txx00 x x txx00 tpu01 4               3 tp201 txx00 x x txx00
jxx00 x x jxx00 jpu01 4               3 jp202 jxx00 x x jxx00
                                        tsd01
*/
int main(void){
    //u                                               //d
    track k326_tpu01("k326_tpu01", 70,  200, true);   track k326_tpd01("k326_tpd01", 70,  200, true);
    track k326_tsu01("k326_tsu01", 70, 1300, true);   track k326_tsd01("k326_tsd01", 70, 1300, true);
  
    junction k326_jpu01("k326_jpu01", true);          junction k326_jpd01("k326_jpd01", true);
    junction k326_jpu02("k326_jpu02", true);          junction k326_jpd02("k326_jpd02", true);
  
    k326_jpu01.settrack1(&k326_tpu01);                k326_jpd01.settrack1(&k326_tpd01);
    k326_jpu01.setjunction1(&k326_jpu02);             k326_jpd01.setjunction1(&k326_jpd02);
    k326_jpu02.settrack1(&k326_tsu01);                k326_jpd02.settrack1(&k326_tsd01);

    station k326("일산", "k326");
    k326.setjufirst(&k326_jpu01);
    k326.setjulast(&k326_jpu02);
    k326.setjdfirst(&k326_jpd01);
    k326.setjdlast(&k326_jpd02);

    return 0;
}