#pragma once
#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"

#include "./stations.h"

int main(void){
    junction* iter = k334.getjdfirst();

        while(iter != NULL){
            cout << iter->gettrack1()->getname() << endl;
            iter = iter->getjunction1();
        }
    
    return 0;
}