#include<iostream>
using namespace std;

#include "junction.h"
#include "station.h"

int main(void){
    //station s1;
    station s2("k326", "일산");

    //cout << s1.snumber << s1.sname << endl;
    cout << s2.snumber << s2.sname << endl;

    return 0;
}