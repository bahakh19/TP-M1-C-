#include <iostream>
using namespace std;

const int LMAX_NOM = 30;

struct date{
    int jour;
    int mois;
    int annee;
};

struct personne1{
    char nom[LMAX_NOM];
    date date_inscr;
};

struct personne2{
    int min_size;
    char *nom = new char[min_size];
    date date_inscr;
};

void inscr_personne1(struct personne1 P){
    cout<<"Veuillez entrée votre Nom sans dépasser "<<LMAX_NOM<<" lettres : ";
    //cin>>(P->nom);
    cin>>P.nom[LMAX_NOM];
    cout<<"Veuillez saisir le jour, mois et année d'inscription : ";
    //cin>>(P->date_inscr).jour;
    cin>>P.date_inscr.jour;
    //cin>>(P->date_inscr).mois;
    cin>>P.date_inscr.mois;
    //cin>>(P->date_inscr).annee;
    cin>>P.date_inscr.annee;
}

void inscr_personne2(struct personne2 P1){
    cout<<"Veuillez entrée votre Nom sans dépasser "<<LMAX_NOM<<" lettres : ";
    cin>>P1.nom[LMAX_NOM];
    personne2 P2;
    P2.min_size = 0;
    for(int i=0; i<LMAX_NOM; i++){
        if(*(P1.nom)!='\0'){
            P2.min_size += 1;
            *(P2.nom) = *(P1.nom);
        }
        P1.nom++;
        P2.nom++;
    }
    delete [] P1.nom;
    cout<<"Veuillez saisir le jour, mois et année d'inscription : ";
    cin>>P2.date_inscr.jour;
    cin>>P2.date_inscr.mois;
    cin>>P2.date_inscr.annee;
}

int main(){
    personne1 p1;
    personne2 p2;
    inscr_personne1(p1);
    cout<<"Nom est : "<<endl;
    for(int i = 0; i<LMAX_NOM; i++){
        cout<<p1.nom[i];
    }
    cout<<"Nom finie."<<endl;
    cout<<"Jour : "<<p1.date_inscr.jour<<", mois : "<<p1.date_inscr.mois<<", année : "<<p1.date_inscr.annee<<endl;
    return 0;
}