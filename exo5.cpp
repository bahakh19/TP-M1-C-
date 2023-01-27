#include <iostream>
using namespace std;

float calculatrice(float, float, char);

bool is_div_by0 = false; //variable globale qui servira pour controler la division par 0
bool is_unsupported_op = false; //variable globale qui servira pour controler l'erreur d'opération

int main()
{
    int nb1;
    int nb2;
    char op;
    float res;
    cout<<"Veuiller saisir le premier nombre : ";
    cin>>nb1;
    cout<<"Veuiller saisir l'opération à effectuer parmis (+,-,*,/) : ";
    cin>>op;
    cout<<"Veuiller saisir le second nombre : ";
    cin>>nb2;
    res = calculatrice(nb1, nb2, op);
    if(is_div_by0==false & is_unsupported_op==false)
    {
        cout<<nb1<<op<<nb2<<" = "<<res<<endl;
    }
    return 0;
}

float calculatrice(float nb1, float nb2, char op)
{
    
    switch(op)
    {
        case '+':
            return nb1 + nb2;
        case '-':
            return nb1 - nb2;
        case '*':
            return nb1 * nb2;
        case '/':
            if(nb2==0.0)
            {
                cout<<"Division par 0 impossible!"<<endl;
                is_div_by0 = true; //permettra de savoir si l'on est dans ce cas
                return 0.0;
            }
            else
            {
                return nb1/nb2;
            }
        default:
            cout<<"L' opération : "<<op<<" est non prise en compte"<<endl;
            is_unsupported_op = true; //permettra de savoir si l'on est dans ce cas d'erreur
            return 0.0;
    }
}