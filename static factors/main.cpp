#include<iostream>
using namespace std;

#include "junction.h"
#include "station.h"

int main(void){
    //k329 : 운정역
    //2면 4선식 역

    track tpu01("tpu01", 0);
    track tpu02("tpu02", 0);
    track tpd01("tpd01", 0);
    track tpd02("tpd02", 0);

    track tsu01("tsu01", 0);
    track tsd01("tsd01", 0);

    track tcu01("tcu01", 0);
    track tcu02("tcu02", 0);
    track tcu03("tcu03", 0);
    track tcu04("tcu04", 0);
    track tcd01("tcd01", 0);
    track tcd02("tcd02", 0);
    track tcd03("tcd03", 0);
    track tcd04("tcd04", 0);

    junction jpu01("jpu01");
    junction jpu02("jpu02");
    junction jpu03("jpu03");
    junction jpu04("jpu04");
    junction jpd01("jpd01");
    junction jpd02("jpd02");
    junction jpd03("jpd03");
    junction jpd04("jpd04");

    junction jcu01("jcu01");
    junction jcu02("jcu02");
    junction jcd01("jcd01");
    junction jcd02("jcd02");

    junction k329_junctions[] = {
        jcu01, jpu01, jpu02, jpu03, jpu04, jcu02,
        jcd01, jpd01, jpd02, jpd03, jpd04, jcd02
    };
    track k329_tracks[] = {
        tcu01, tcu02, tpu01, tpu02, tcu03, tcu04, tsu01,
        tcd01, tcd02, tpd01, tpd02, tcd03, tcd04, tsd01
    };

    junction* k329_j0 = &k329_junctions[0];

    return 0;
}