#include<iostream>
#include "junction.h"
#include "track.h"
#include "station.h"
using namespace std;

int main(void){
    //운정 : k329
    //운정역 트랙 선언
    track tpu01("tpu01", 70, 200, true);
    track tpu02("tpu02", 70, 200, true);

    track tsu01("tsu01", 120, 1500, true);

    track tcu01("tcu01", 70, 1, true);
    track tcu02("tcu02", 70, 2, true);
    track tcu03("tcu03", 70, 3, true);
    track tcu04("tcu04", 70, 4, true);

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

    //4선 상대식 1선 정차
    //jcu01-jpu01-jpu03-jcu02
    junction iter = jcu01;

    cout << iter.getname() << endl;
    cout << iter.gettrack1()->getname() << endl;
    cout << endl;

    iter = *iter.getjunction1();
    cout << iter.getname() << endl;
    cout << iter.gettrack1()->getname() << endl;
    cout << endl;

    iter = *iter.getjunction1();
    cout << iter.getname() << endl;
    cout << iter.gettrack1()->getname() << endl;
    cout << endl;

    iter = *iter.getjunction1();
    cout << iter.getname() << endl;
    cout << iter.gettrack1()->getname() << endl;
    cout << endl;

    return 0;
}