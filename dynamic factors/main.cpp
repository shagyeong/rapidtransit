#include<iostream>
using namespace std;

#include "train.h"

int main(void){
    performance linekj_allstop_pf(3.5, 3.5, 70, 110, 8);
    performance linekj_rapid_pf(3.5, 3.5, 110, 110, 8);

    cout << linekj_allstop_pf.acc << endl;
    return 0;
}