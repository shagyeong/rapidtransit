#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 월롱
역번 : k333
                      tsu01
                      jcu02 jcd01
            tcu04     tcu03 tcd01     tcd02
jxx00 jxx00 jpu04 4 3 jpu03 jpd01 2 1 jpd02
txx00 txx00 tpu02 4 3 tpu01 tpd01 2 1 tpd02
jxx00 jxx00 jpu02 4 3 jpu01 jpd03 2 1 jpd04
            tcu02     tcu01 tcd03     tcd04
                      jcu01 jcd02
                            tsd01
*/
int main(void){
    //u                                             //d
    track k333_tpu01("k333_tpu01", 70, 200, true);  track k333_tpd01("k333_tpd01", 70, 200, true);
    track k333_tpu02("k333_tpu02", 70, 200, true);  track k333_tpd02("k333_tpd02", 70, 200, true);
    track k333_tcu01("k333_tcu01", 70, 200, true);  track k333_tcd01("k333_tcd01", 70, 200, true);
    track k333_tcu02("k333_tcu02", 70, 200, true);  track k333_tcd02("k333_tcd02", 70, 200, true);
    track k333_tcu03("k333_tcu03", 70, 200, true);  track k333_tcd03("k333_tcd03", 70, 200, true);
    track k333_tcu04("k333_tcu04", 70, 200, true);  track k333_tcd04("k333_tcd04", 70, 200, true);
    track k333_tsu01("k333_tsu01", 70, 900, true);  track k333_tsd01("k333_tsd01", 70, 900, true);
    
    junction k333_jpu01("k333_jpu01", true);        junction k333_jpd01("k333_jpd01", true);
    junction k333_jpu02("k333_jpu02", true);        junction k333_jpd02("k333_jpd02", true);
    junction k333_jpu03("k333_jpu03", true);        junction k333_jpd03("k333_jpd03", true);
    junction k333_jpu04("k333_jpu04", true);        junction k333_jpd04("k333_jpd04", true);
    junction k333_jcu01("k333_jcu01", true);        junction k333_jcd01("k333_jcd01", true);
    junction k333_jcu02("k333_jcu02", true);        junction k333_jcd02("k333_jcd02", true);
    
    k333_jcu01.settrack1(&k333_tcu01);              k333_jcd01.settrack1(&k333_tcd01);
    k333_jcu01.settrack2(&k333_tcu02);              k333_jcd01.settrack2(&k333_tcd02);
    k333_jcu01.setjunction1(&k333_jpu01);           k333_jcd01.setjunction1(&k333_jpd01);
    k333_jcu01.setjunction2(&k333_jpu02);           k333_jcd01.setjunction2(&k333_jpd02);
    k333_jpu01.settrack1(&k333_tpu01);              k333_jpd01.settrack1(&k333_tpd01);
    k333_jpu01.setjunction1(&k333_jpu03);           k333_jpd01.setjunction1(&k333_jpd03);
    k333_jpu02.settrack1(&k333_tpu02);              k333_jpd02.settrack1(&k333_tpd02);
    k333_jpu02.setjunction1(&k333_jpu04);           k333_jpd02.setjunction1(&k333_jpd04);
    k333_jpu03.setjunction1(&k333_jcu02);           k333_jpd03.setjunction1(&k333_jcd02);
    k333_jpu03.settrack1(&k333_tcu03);              k333_jpd03.settrack1(&k333_tcd03);
    k333_jpu04.setjunction1(&k333_jcu02);           k333_jpd04.setjunction1(&k333_jcd02);
    k333_jpu04.settrack1(&k333_tcu04);              k333_jpd04.settrack1(&k333_tcd04);
    k333_jcu02.settrack1(&k333_tsu01);              k333_jcd02.settrack1(&k333_tsd01);
    
    station k333("월롱", "k333");
    k333.setjufirst(&k333_jcu01);
    k333.setjulast(&k333_jcu02);
    k333.setjdfirst(&k333_jcd01);
    k333.setjdlast(&k333_jcd02);
    
    return 0;
}