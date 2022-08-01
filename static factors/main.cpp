#include<iostream>
#include "junction.h"
#include "track.h"
#include "station.h"
using namespace std;

int main(void){
    //운정 : k329
    //운정역 트랙 선언
    platformtrack tpu01("tpu01", 200, true, 3, 8, true);
    platformtrack tpu02("tpu02", 200, true, 4, 8, false);

    platformtrack tsu01("tsu01", 1500, true, 0, 0, false);

    platformtrack tcu01("tcu01", 1, true, 0, 0, false);
    platformtrack tcu02("tcu02", 2, true, 0, 0, false);
    platformtrack tcu03("tcu03", 3, true, 0, 0, false);
    platformtrack tcu04("tcu04", 4, true, 0, 0, false);

    //운정역 정션 선언
    junction jpu01("jpu01", true);
    junction jpu02("jpu02", true);
    junction jpu03("jpu03", true);
    junction jpu04("jpu04", true);

    junction jcu01("jcu01", true);
    junction jcu02("jcu02", true);

    jcu01.settrack1(&tcu01); jcu01.setjunction1(&jpu01);
    jcu01.settrack2(&tcu02); jcu01.setjunction2(&jpu02);

    jpu01.settrack1(&tpu01); jpu01.setjunction1(&jpu03);
    jpu02.settrack1(&tpu02); jpu02.setjunction1(&jpu04);

    jpu03.settrack1(&tcu03); jpu03.setjunction1(&jcu02);
    jpu04.settrack1(&tcu04); jpu03.setjunction1(&jcu02);

    jcu02.settrack1(&tsu01);

    station k329("운정", "k329");

    return 0;
}