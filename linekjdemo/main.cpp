#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"

#include "./setstations.h"

int main(void){
    setstations();

    junction* iter = k329.getjdfirst();

    //운정~일산 1선정차
    while(iter != NULL){
        cout << iter->gettrack1()->getname() << endl;
        iter = iter->getjunction1();
    }
    
    return 0;
}