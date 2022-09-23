#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"

#include "./setstations.h"

int main(void){
    setstations();

    cout << k329.getname() << endl;
    cout << k328.getname() << endl;
    //cout << k329.getdownstation()->getname() << endl;
    /*
    junction* jiter = k329.getjdfirst();
    station* siter = &k329;

    //운정~일산 1선정차
    while(jiter != NULL){
        cout << jiter->gettrack1()->getname() << endl;
        jiter = jiter->getjunction1();
    }
    
    while(siter != NULL){
        cout << siter->getname() << endl;
        siter = siter->getdownstation();
    }
    */

    return 0;
}