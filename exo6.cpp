#include <iostream>
using namespace std;

int nb_appel = 0; //variable globale qui servira pour compter les fois ou la fonction est exécuter

void call();

int main()
{
    int n;
    cout<<"Veuillez saisir le nombre de fois à appler la fonction : ";
    cin>>n;
    for(int i=0; i<n;i++)
    {
        call();
    }
    return 0;
}

void call()
{
    nb_appel++;
    cout<<"Appel de fonction numéro : "<<nb_appel<<endl;
}