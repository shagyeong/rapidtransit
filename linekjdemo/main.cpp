#include<iostream>
#include "../static factors/track.h"
#include "../static factors/junction.h"
#include "../static factors/station.h"

#include "../dynamic factors/train.h"

#include "./setstations.h"
#include "./reachtime.h"

int main(void){
    setstations();

    train kj001("kj001", 3.0, 3.5, 110, 110, 8);

    int limits[] = {70, 70, 70, 70, 70,
                    70, 70, 70, 70, 70,
                    70, 70, 70, 70, 70,
                    70, 70, 70, 70, 70,
                    70, 70, 70, 70, 70};

    int* lim = &limits[0];

    reachtime(k329, k326, kj001, lim);

    cout << endl;
    
    reachtime(k329, k328, kj001, lim);

    return 0;
}