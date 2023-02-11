#include <iostream>
using namespace std;

struct complexe{
    float re_part, im_part;
};

struct complexe Somme(struct complexe c1, struct complexe c2){
    struct complexe res;
    res.re_part = c1.re_part + c2.re_part;
    res.im_part = c1.im_part + c2.im_part;
    return res;
}

void Multiply(float nb1, struct complexe *p){
    p->re_part = (p->re_part) * nb1;
    p->im_part = (p->im_part) * nb1;
}

int main(){
    complexe c1,c2;
    c1.re_part = 2;
    c1.im_part = 2;
    c2.re_part = 3;
    c2.im_part = 3;
    float r = 5;
    complexe c = Somme(c1,c2);
    cout<<"Réel : "<<c.re_part<<endl;
    cout<<"Complexe : "<<c.im_part<<endl;
    complexe *p = &c;
    Multiply(r, p);
    cout<<"Réel : "<<c.re_part<<endl;
    cout<<"Complexe : "<<c.im_part<<endl;
    return 0;
}