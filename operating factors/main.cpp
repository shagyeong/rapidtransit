#include<iostream>
#include<string>
#include<fstream>
#include "input.h"
using namespace std;

int main(int argc, char* argv[]){
    //05시 30분부터 6분 간격
    ofstream timetable;
    timetable.open(argv[1]);

    timetable << tablestring(19800, "일산", "") << endl;
    timetable << tablestring(20160, "문산", "급") << endl;
    timetable << tablestring(20520, "문산", "") << endl;
    
    return 0;
}