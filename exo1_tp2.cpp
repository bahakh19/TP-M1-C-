#include <iostream>
using namespace std;

void ajouter(int arg1, int * arg2){
    *arg2 = arg1 + *arg2; //rajoute à la valeur de arg2 celle de arg1
}

int main(){
    int p;
    int n;
    cout<<"Fournir la valeur de n : ";
    cin>>n;
    cout<<"Fournir la valeur de p : ";
    cin>>p;
    int *p1 = &n;
    ajouter(2*p,p1);
    cout<<"Voici la nouvelle valeur de n : "<<n<<endl;
    return 0;
}