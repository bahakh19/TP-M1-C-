#include <iostream>
using namespace std;

const int NMOIS = 12;

struct enreg{
    int stock;
    float prix;
    int ventes[NMOIS];
};

void Change(struct enreg *R){
    (R->stock) = 0;
    for(int i = 0; i<NMOIS; i++){
        (R->ventes)[i] = 0;
    }
}

int main(){
    enreg Reg;
    Reg.stock = 40;
    Reg.prix = 12;
    for(int i=0; i<NMOIS; i++){
        Reg.ventes[i] = i;
    }
    enreg *p = &Reg;
    Change(p);
    cout<<"Stock : "<<Reg.stock<<endl;
    for(int i=0; i<NMOIS; i++){
        cout<<"Ventes "<<i<<" : "<<Reg.ventes[i]<<endl;
    }
    return 0;
}