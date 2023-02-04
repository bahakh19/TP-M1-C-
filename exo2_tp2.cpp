#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float t1[10];
    float t2[10];
    //finding the minimum in t1
    float min = t1[0];
    for(float *p1 = t1; p1<t1+10; p1++){
        if(*p1<min){
            min = *p1;
        }
    }
    //finding the max in t1
    float max = t1[0];
    for(float *p1 = t1; p1<t1+10; p1++){
        if(*p1>max){
            min = *p1;
        }
    }
    float *p1 = t1;
    for(float *p2 = t2; p2<t2+10; p2++){
        if(*p2>0){
            *p1 = *p2;
        }
        else
        {
            *p1 = 0;
        }
        p1++;
    }
    cout<<"La valeur de t1 nouveau est : "<<t1[2];
    return 0;
}