#include<iostream>
using namespace std;

#include "junction.h"
#include "station.h"

int main(void){
    //k329 : 운정역
    //2면 4선식 역

    track tpu01("tpu01", 201, true);
    track tpu02("tpu02", 202, true);
    track tpd01("tpd01", 203, true);
    track tpd02("tpd02", 204, true);

    track tsu01("tsu01", 1, true);
    track tsd01("tsd01", 2, true);

    track tcu01("tcu01", 3, true);
    track tcu02("tcu02", 4, true);
    track tcu03("tcu03", 5, true);
    track tcu04("tcu04", 6, true);
    track tcd01("tcd01", 7, true);
    track tcd02("tcd02", 8, true);
    track tcd03("tcd03", 9, true);
    track tcd04("tcd04", 10, true);

    junction jpu01("jpu01", true);
    junction jpu02("jpu02", true);
    junction jpu03("jpu03", true);
    junction jpu04("jpu04", true);
    junction jpd01("jpd01", true);
    junction jpd02("jpd02", true);
    junction jpd03("jpd03", true);
    junction jpd04("jpd04", true);

    junction jcu01("jcu01", true);
    junction jcu02("jcu02", true);
    junction jcd01("jcd01", true);
    junction jcd02("jcd02", true);

    junction k329_junctions[] = {
        jcu01, jpu01, jpu02, jpu03, jpu04, jcu02,
        jcd01, jpd01, jpd02, jpd03, jpd04, jcd02
    };

    return 0;
}