#pragma once
#include<iostream>
#include<string>
using namespace std;

class junction{
    public:
        junction(string namev);

        string getname(void);
    private:
        string name;
};

junction::junction(string namev){
    name = namev;
}

string junction::getname(void){
    return name;
}