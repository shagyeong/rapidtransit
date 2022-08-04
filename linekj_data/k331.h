#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 금촌
역번 : k331
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
    track k331_tpu01("k331_tpu01", 70, 200, true);  track k331_tpd01("k331_tpd01", 70, 200, true);
    track k331_tpu02("k331_tpu02", 70, 200, true);  track k331_tpd02("k331_tpd02", 70, 200, true);
    track k331_tcu01("k331_tcu01", 70, 200, true);  track k331_tcd01("k331_tcd01", 70, 200, true);
    track k331_tcu02("k331_tcu02", 70, 200, true);  track k331_tcd02("k331_tcd02", 70, 200, true);
    track k331_tcu03("k331_tcu03", 70, 200, true);  track k331_tcd03("k331_tcd03", 70, 200, true);
    track k331_tcu04("k331_tcu04", 70, 200, true);  track k331_tcd04("k331_tcd04", 70, 200, true);
    track k331_tsu01("k331_tsu01", 70, 900, true);  track k331_tsd01("k331_tsd01", 70, 900, true);
    
    junction k331_jpu01("k331_jpu01", true);        junction k331_jpd01("k331_jpd01", true);
    junction k331_jpu02("k331_jpu02", true);        junction k331_jpd02("k331_jpd02", true);
    junction k331_jpu03("k331_jpu03", true);        junction k331_jpd03("k331_jpd03", true);
    junction k331_jpu04("k331_jpu04", true);        junction k331_jpd04("k331_jpd04", true);
    junction k331_jcu01("k331_jcu01", true);        junction k331_jcd01("k331_jcd01", true);
    junction k331_jcu02("k331_jcu02", true);        junction k331_jcd02("k331_jcd02", true);
    
    k331_jcu01.settrack1(&k331_tcu01);              k331_jcd01.settrack1(&k331_tcd01);
    k331_jcu01.settrack2(&k331_tcu02);              k331_jcd01.settrack2(&k331_tcd02);
    k331_jcu01.setjunction1(&k331_jpu01);           k331_jcd01.setjunction1(&k331_jpd01);
    k331_jcu01.setjunction2(&k331_jpu02);           k331_jcd01.setjunction2(&k331_jpd02);
    k331_jpu01.settrack1(&k331_tpu01);              k331_jpd01.settrack1(&k331_tpd01);
    k331_jpu01.setjunction1(&k331_jpu03);           k331_jpd01.setjunction1(&k331_jpd03);
    k331_jpu02.settrack1(&k331_tpu02);              k331_jpd02.settrack1(&k331_tpd02);
    k331_jpu02.setjunction1(&k331_jpu04);           k331_jpd02.setjunction1(&k331_jpd04);
    k331_jpu03.setjunction1(&k331_jcu02);           k331_jpd03.setjunction1(&k331_jcd02);
    k331_jpu03.settrack1(&k331_tcu03);              k331_jpd03.settrack1(&k331_tcd03);
    k331_jpu04.setjunction1(&k331_jcu02);           k331_jpd04.setjunction1(&k331_jcd02);
    k331_jpu04.settrack1(&k331_tcu04);              k331_jpd04.settrack1(&k331_tcd04);
    k331_jcu02.settrack1(&k331_tsu01);              k331_jcd02.settrack1(&k331_tsd01);
    
    station k331("금촌", "k331");
    k331.setjufirst(&k331_jcu01);
    k331.setjulast(&k331_jcu02);
    k331.setjdfirst(&k331_jcd01);
    k331.setjdlast(&k331_jcd02);
}