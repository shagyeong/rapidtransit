#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 파주
역번 : k334
          tsu01
          jcu02 jcd01
tcu04     tcu03 tcd01     tcd02
jpu04 4 3 jpu03 jpd01 2 1 jpd02
tpu02 4 3 tpu01 tpd01 2 1 tpd02
jpu02 4 3 jpu01 jpd03 2 1 jpd04
tcu02     tcu01 tcd03     tcd04
          jcu01 jcd02
                tsd01
*/
int main(void){
    //u                                             //d
    track k334_tpu01("k334_tpu01", 70, 200, true);  track k334_tpd01("k334_tpd01", 70, 200, true);
    track k334_tpu02("k334_tpu02", 70, 200, true);  track k334_tpd02("k334_tpd02", 70, 200, true);
    track k334_tcu01("k334_tcu01", 70, 200, true);  track k334_tcd01("k334_tcd01", 70, 200, true);
    track k334_tcu02("k334_tcu02", 70, 200, true);  track k334_tcd02("k334_tcd02", 70, 200, true);
    track k334_tcu03("k334_tcu03", 70, 200, true);  track k334_tcd03("k334_tcd03", 70, 200, true);
    track k334_tcu04("k334_tcu04", 70, 200, true);  track k334_tcd04("k334_tcd04", 70, 200, true);
    track k334_tsu01("k334_tsu01", 70, 900, true);  track k334_tsd01("k334_tsd01", 70, 900, true);
    
    junction k334_jpu01("k334_jpu01", true);        junction k334_jpd01("k334_jpd01", true);
    junction k334_jpu02("k334_jpu02", true);        junction k334_jpd02("k334_jpd02", true);
    junction k334_jpu03("k334_jpu03", true);        junction k334_jpd03("k334_jpd03", true);
    junction k334_jpu04("k334_jpu04", true);        junction k334_jpd04("k334_jpd04", true);
    junction k334_jcu01("k334_jcu01", true);        junction k334_jcd01("k334_jcd01", true);
    junction k334_jcu02("k334_jcu02", true);        junction k334_jcd02("k334_jcd02", true);
    
    k334_jcu01.settrack1(&k334_tcu01);              k334_jcd01.settrack1(&k334_tcd01);
    k334_jcu01.settrack2(&k334_tcu02);              k334_jcd01.settrack2(&k334_tcd02);
    k334_jcu01.setjunction1(&k334_jpu01);           k334_jcd01.setjunction1(&k334_jpd01);
    k334_jcu01.setjunction2(&k334_jpu02);           k334_jcd01.setjunction2(&k334_jpd02);
    k334_jpu01.settrack1(&k334_tpu01);              k334_jpd01.settrack1(&k334_tpd01);
    k334_jpu01.setjunction1(&k334_jpu03);           k334_jpd01.setjunction1(&k334_jpd03);
    k334_jpu02.settrack1(&k334_tpu02);              k334_jpd02.settrack1(&k334_tpd02);
    k334_jpu02.setjunction1(&k334_jpu04);           k334_jpd02.setjunction1(&k334_jpd04);
    k334_jpu03.setjunction1(&k334_jcu02);           k334_jpd03.setjunction1(&k334_jcd02);
    k334_jpu03.settrack1(&k334_tcu03);              k334_jpd03.settrack1(&k334_tcd03);
    k334_jpu04.setjunction1(&k334_jcu02);           k334_jpd04.setjunction1(&k334_jcd02);
    k334_jpu04.settrack1(&k334_tcu04);              k334_jpd04.settrack1(&k334_tcd04);
    k334_jcu02.settrack1(&k334_tsu01);              k334_jcd02.settrack1(&k334_tsd01);
    
    station k334("파주", "k334");
    k334.setjufirst(&k334_jcu01);
    k334.setjulast(&k334_jcu02);
    k334.setjdfirst(&k334_jcd01);
    k334.setjdlast(&k334_jcd02);
    
    return 0;
}