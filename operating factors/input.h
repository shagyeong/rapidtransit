#include<iostream>
#include<string>
using namespace std;

string tablestring(int time){
    int hour = time / 3600; time %= 3600;
    int minute = time / 60; time %= 60;
    int second = time;

    cout << hour << endl;
    cout << minute << endl;
    cout << second << endl;

    return "nothing";
}