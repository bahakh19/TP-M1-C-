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

struct complexe SumTab(struct complexe tab[], int n){
    complexe s;
    s.re_part = 0;
    s.im_part = 0;
    for(int i = 0; i<n; i++){
        s = Somme(s,tab[i]);
    }
    return s;
}

int main(){
    complexe c1,c2,c3,c4;
    c1.re_part = 4;
    c1.im_part = 6;
    c2.re_part = 5;
    c2.im_part = 1;
    c3 = c1;
    c4 = c2;
    complexe tab[4];
    tab[0] = c1;
    tab[1] = c2;
    tab[2] = c3;
    tab[3] = c4;
    complexe res = SumTab(tab, 4);
    cout<<"Réel : "<<res.re_part<<endl;
    cout<<"Complexe : "<<res.im_part<<endl;
    return 0;
}