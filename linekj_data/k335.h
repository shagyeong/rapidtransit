#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"
/*
역명 : 문산
역번 : k335
                                      tsu01
                                      jcu02 jcd01
                            tcu04     tcu03 tcd01     tcd02
jxx00 jxx00 jxx00 x x jxx00 jpu04 4 3 jpu03 jpd01 2 1 jpd02 jxx00
txx00 txx00 txx00 x x txx00 tpu02 4 3 tpu01 tpd01 2 1 tpd02 txx00
jxx00 jxx00 jxx00 x x jxx00 jpu02 4 3 jpu01 jpd03 2 1 jpd04 hxx00
                            tcu02     tcu01 tcd03     tcd04
                                      jcu01 jcd02
                                            tsd01
*/
station k335("문산", "k335");

//u                                             //d
track k335_tpu01("k335_tpu01", 70, 200, true);  track k335_tpd01("k335_tpd01", 70, 200, true);
track k335_tpu02("k335_tpu02", 70, 200, true);  track k335_tpd02("k335_tpd02", 70, 200, true);
track k335_tcu01("k335_tcu01", 70, 200, true);  track k335_tcd01("k335_tcd01", 70, 200, true);
track k335_tcu02("k335_tcu02", 70, 200, true);  track k335_tcd02("k335_tcd02", 70, 200, true);
track k335_tcu03("k335_tcu03", 70, 200, true);  track k335_tcd03("k335_tcd03", 70, 200, true);
track k335_tcu04("k335_tcu04", 70, 200, true);  track k335_tcd04("k335_tcd04", 70, 200, true);
track k335_tsu01("k335_tsu01", 70, 900, true);  track k335_tsd01("k335_tsd01", 70, 900, true);
    
junction k335_jpu01("k335_jpu01", true);        junction k335_jpd01("k335_jpd01", true);
junction k335_jpu02("k335_jpu02", true);        junction k335_jpd02("k335_jpd02", true);
junction k335_jpu03("k335_jpu03", true);        junction k335_jpd03("k335_jpd03", true);
junction k335_jpu04("k335_jpu04", true);        junction k335_jpd04("k335_jpd04", true);
junction k335_jcu01("k335_jcu01", true);        junction k335_jcd01("k335_jcd01", true);
junction k335_jcu02("k335_jcu02", true);        junction k335_jcd02("k335_jcd02", true);

int main(void){    
    k335_jcu01.settrack1(&k335_tcu01);              k335_jcd01.settrack1(&k335_tcd01);
    k335_jcu01.settrack2(&k335_tcu02);              k335_jcd01.settrack2(&k335_tcd02);
    k335_jcu01.setjunction1(&k335_jpu01);           k335_jcd01.setjunction1(&k335_jpd01);
    k335_jcu01.setjunction2(&k335_jpu02);           k335_jcd01.setjunction2(&k335_jpd02);
    k335_jpu01.settrack1(&k335_tpu01);              k335_jpd01.settrack1(&k335_tpd01);
    k335_jpu01.setjunction1(&k335_jpu03);           k335_jpd01.setjunction1(&k335_jpd03);
    k335_jpu02.settrack1(&k335_tpu02);              k335_jpd02.settrack1(&k335_tpd02);
    k335_jpu02.setjunction1(&k335_jpu04);           k335_jpd02.setjunction1(&k335_jpd04);
    k335_jpu03.setjunction1(&k335_jcu02);           k335_jpd03.setjunction1(&k335_jcd02);
    k335_jpu03.settrack1(&k335_tcu03);              k335_jpd03.settrack1(&k335_tcd03);
    k335_jpu04.setjunction1(&k335_jcu02);           k335_jpd04.setjunction1(&k335_jcd02);
    k335_jpu04.settrack1(&k335_tcu04);              k335_jpd04.settrack1(&k335_tcd04);
    k335_jcu02.settrack1(&k335_tsu01);              k335_jcd02.settrack1(&k335_tsd01);
    
    k335.setjufirst(&k335_jcu01);
    k335.setjulast(&k335_jcu02);
    k335.setjdfirst(&k335_jcd01);
    k335.setjdlast(&k335_jcd02);
    
    return 0;
}