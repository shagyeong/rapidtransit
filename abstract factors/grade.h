#include<iostream>
#include<string>
using namespace std;

#include "./line.h"
#include "../static factors/station.h"

class grade{
    public:
        grade();
    private:
        line l;
        string name; //등급 명칭
        station stops[l.getstops()];
};