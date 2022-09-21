#include "../static factors/station.h"
#include "../static factors/track.h"
#include "../static factors/junction.h"

#include "../dynamic factors/train.h"

//ss : 시작역, es : 정지역
//direction : 참=상역->하역, 거짓=하역->상역
//두 역 사이에 하나 이상의 역이 존재하면 '미정차'를 가정하고 산출


int* standardtime(station ss, station es, train t, bool direction){
    //차량 제원 입력
    double acc = t.getacc();
    double dec = t.getdec();
    int ts = t.gettspeed();
    
    //정션 순회자
    junction* iter;

    if(direction == true){ //상역->하역
        iter = ss.getjdlast();
        
        while(iter != es.getjdlast()){

        }
    }
    else{ //하역->상역

    }
}