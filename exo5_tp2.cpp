#include <iostream>
using namespace std;

int main(){
    //i)
    cout<<"Veuillez fournir la taille du premier tableau n :";
    int n;
    cin>>n;
    cout<<"Veuillez entrer les valeurs du tableau les unes après les autres : "<<endl;
    int *tab1 = new int[n];
    //ii)
    for(int i = 0; i<n;i++){
        int nb;
        cin>>nb;
        *tab1=nb;
        tab1++;
    }
    //iii)
    int *tab2 = new int[n];
    tab1 -= n; 
    for(int i = 0; i<n;i++){
        *tab2 = (*tab1) * (*tab1);
        tab2++;
        tab1++;
    }
    //iv)
    tab1 -= n;
    delete [] tab1;
    tab2 -= n;
    cout<<"Les valeurs du second tableau sont : "<<endl;
    for(int i = 0; i<n;i++){
        int val = *tab2;
        cout<<"1 : "<<val<<endl;
        tab2++;
    }
    tab2 -= n;
    delete [] tab2;
    return 0;
}