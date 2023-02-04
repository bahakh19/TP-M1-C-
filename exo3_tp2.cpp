#include <iostream>
using namespace std;

//fonction qui calcule la somme des éléments d'un tableau
void CalculSum(float  *tab, int size, float **p_sum){
    /*Nous fournissons en entrer l'adresse du pointeur p_sum car la variable val sera local à la fonction
    CalculSum donc pour prendre sa valeur nous devons assigner a la référence de notre pointeur p_sum
    la référence de la variable local val.
    */
    float val = 0.0;
    for(int i=0; i<size; i++){
        val += *(tab + i);
    }
    *p_sum = &val;
}

int main(){
    float tabl1[7] = {1,2,3,4,5,6,7};
    float *p_tabl1 = tabl1;
    int size = sizeof(tabl1) / sizeof(int);
    float *p_sum_;
    CalculSum(p_tabl1, size, &p_sum_);
    float res = *p_sum_; //Très important de stocker le résultat dans une variable sinon le cout change la valeur du pointeur
    cout<<res<<endl;
    cout<<"La somme est de : "<<res<<endl;
    return 0;
}
