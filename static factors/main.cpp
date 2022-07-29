#include<iostream>
using namespace std;

#include "junction.h"
#include "station.h"
#include "null.h"

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

    unijunction jpu01("jpu01", true, NJ, tpu01);
    unijunction jpu02("jpu02", true, NJ, tpu02);
    unijunction jpu03("jpu03", true, NJ, tcu03);
    unijunction jpu04("jpu04", true, NJ, tcu04);
    unijunction jpd01("jpd01", true, NJ, tpd01);
    unijunction jpd02("jpd02", true, NJ, tpd02);
    unijunction jpd03("jpd03", true, NJ, tcd03);
    unijunction jpd04("jpd04", true, NJ, tcd04);

    bijunction jcu01("jcu01", true, NJ, tcu01, NJ, tcu02);
    unijunction jcu02("jcu02", true, NJ, tsu01);
    bijunction jcd01("jcd01", true, NJ, tcd01, NJ, tcd02);
    unijunction jcd02("jcd02", true, NJ, tsd01);
    
    jpu01.setjunction1(jpu03);
    jpu02.setjunction1(jpu04);
    jpu03.setjunction1(jcu02);
    jpu04.setjunction1(jcu02);
    jpd01.setjunction1(jpd03);
    jpd02.setjunction1(jpd04);
    jpd03.setjunction1(jcd02);
    jpd04.setjunction1(jcd02);
    jcu01.setjunction1(jpu01);jcu01.setjunction2(jpu02);
    //jcu02.setjunction1(); 다음역의 정션을 가리킴
    jcd01.setjunction1(jpd01);jcd01.setjunction2(jpd02);
    //jcd02.setjunction1(); 다음역의 정션을 가리킴

    //운정역 상행 1선 정차
    //jcu01-jpu01-jpu03-jcu02

    cout << (jcu01.gettrack1()).getname() << endl;
    cout << (jcu01.getjunction1()).getname() << endl;
    cout << jcu01.getname() << endl;
    //상속 클래스의 생성자 호출 수정 요함

    return 0;
}