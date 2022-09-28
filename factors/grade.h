#include<iostream>
#include<string>
using namespace std;

#include "./line.h"
#include "./station.h"

class grade{
    public:
        grade();
    private:
        line l;
        string name; //등급 명칭
};