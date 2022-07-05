#include<iostream>
using namespace std;

#include "junction.h"
#include "station.h"

int main(void){
    station s2("k326", "일산");
    cout << s2.snumber << s2.sname << endl;

    junction j1("j1", s2);

    cout << j1.jnumber << endl;

    return 0;
}