#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 운정
역번 : k329
                tsu01
                jcu02 jcd01
      tcu04     tcu03 tcd01     tcd02
jxx00 jpu04 4 3 jpu03 jpd01 2 1 jpd02
txx00 tpu02 4 3 tpu01 tpd01 2 1 tpd02
jxx00 jpu02 4 3 jpu01 jpd03 2 1 jpd04
      tcu02     tcu01 tcd03     tcd04
                jcu01 jcd02
                      tsd01
*/
station k329("운정", "k329");

//u                                         //d
track k329_tpu01("k329_tpu01", 200, true);  track k329_tpd01("k329_tpd01", 200, true);
track k329_tpu02("k329_tpu02", 200, true);  track k329_tpd02("k329_tpd02", 200, true);
track k329_tcu01("k329_tcu01", 200, true);  track k329_tcd01("k329_tcd01", 200, true);
track k329_tcu02("k329_tcu02", 200, true);  track k329_tcd02("k329_tcd02", 200, true);
track k329_tcu03("k329_tcu03", 200, true);  track k329_tcd03("k329_tcd03", 200, true);
track k329_tcu04("k329_tcu04", 200, true);  track k329_tcd04("k329_tcd04", 200, true);
track k329_tsu01("k329_tsu01", 900, true);  track k329_tsd01("k329_tsd01", 900, true);
    
junction k329_jpu01("k329_jpu01", true);        junction k329_jpd01("k329_jpd01", true);
junction k329_jpu02("k329_jpu02", true);        junction k329_jpd02("k329_jpd02", true);
junction k329_jpu03("k329_jpu03", true);        junction k329_jpd03("k329_jpd03", true);
junction k329_jpu04("k329_jpu04", true);        junction k329_jpd04("k329_jpd04", true);
junction k329_jcu01("k329_jcu01", true);        junction k329_jcd01("k329_jcd01", true);
junction k329_jcu02("k329_jcu02", true);        junction k329_jcd02("k329_jcd02", true);

void setk329(void){
    k329_jcu01.settrack1(&k329_tcu01);              k329_jcd01.settrack1(&k329_tcd01);
    k329_jcu01.settrack2(&k329_tcu02);              k329_jcd01.settrack2(&k329_tcd02);
    k329_jcu01.setjunction1(&k329_jpu01);           k329_jcd01.setjunction1(&k329_jpd01);
    k329_jcu01.setjunction2(&k329_jpu02);           k329_jcd01.setjunction2(&k329_jpd02);
    k329_jpu01.settrack1(&k329_tpu01);              k329_jpd01.settrack1(&k329_tpd01);
    k329_jpu01.setjunction1(&k329_jpu03);           k329_jpd01.setjunction1(&k329_jpd03);
    k329_jpu02.settrack1(&k329_tpu02);              k329_jpd02.settrack1(&k329_tpd02);
    k329_jpu02.setjunction1(&k329_jpu04);           k329_jpd02.setjunction1(&k329_jpd04);
    k329_jpu03.setjunction1(&k329_jcu02);           k329_jpd03.setjunction1(&k329_jcd02);
    k329_jpu03.settrack1(&k329_tcu03);              k329_jpd03.settrack1(&k329_tcd03);
    k329_jpu04.setjunction1(&k329_jcu02);           k329_jpd04.setjunction1(&k329_jcd02);
    k329_jpu04.settrack1(&k329_tcu04);              k329_jpd04.settrack1(&k329_tcd04);
    k329_jcu02.settrack1(&k329_tsu01);              k329_jcd02.settrack1(&k329_tsd01);
    
    k329.setjufirst(&k329_jcu01);
    k329.setjulast(&k329_jcu02);
    k329.setjdfirst(&k329_jcd01);
    k329.setjdlast(&k329_jcd02);
}