#include<iostream>
#include<string>
using namespace std;

//실제로는 다른 디렉토리에서 include
class station; 

class grade{
    public:
        grade(); //allstop
        grade(station* station0);

    private:
        string name; //등급 명칭

        station* stations; //첫 번재 정차역의 포인터
};