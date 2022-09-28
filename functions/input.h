#include<iostream>
#include<string>
#include<sstream> //string stream
using namespace std;

string tablestring(int time, string dest, string grade){
    stringstream ts; //tablestring

    int hour = time / 3600; time %= 3600;
    int minute = time / 60; time %= 60;
    int second = time;

    ts << hour;   ts << ":";
    ts << minute; ts << ":";
    ts << second; ts << " ";

    ts << dest;
    ts << grade;

    return ts.str();
}