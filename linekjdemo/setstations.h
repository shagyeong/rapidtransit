#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"

#include "./setk329.h"
#include "./setk328.h"
#include "./setk327.h"
#include "./setk326.h"
/*
역명 역번
문산 k335
파주 k334
월롱 k333
금촌 k331
금릉 k330
운정 k329
야당 k328
탄현 k327
일산 k326
풍산 k325
백마 k324
곡산 k323
대곡 k322
능곡 k321
행신 k320
강매 k319
화전 k318
수색 k317
상암 k316
가좌 k315
홍대 k314
서강 k313
공덕 k312
효창 k311
용산 k310

신촌 p314
서울 p313
*/
void setstations(void){
    /* 각 역 트랙과 정션 설정 */
    setk329();
    setk328();
    setk327();
    setk326();

    /* 단위역 이어붙이기-하행*/
    k329.setdownstation(k328);
    k328.setdownstation(k327);    
    k327.setdownstation(k326);
    //k326.setdownstation(k325);

    /* 단위역 이어붙이기-상행 */
    //k329.setupstation(k330);
    k328.setupstation(k329);
    k327.setupstation(k328);
    k326.setupstation(k327);
}