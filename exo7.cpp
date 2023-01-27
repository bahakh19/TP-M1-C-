#include <iostream>
using namespace std;

long euclide(long, long);

int main()
{
    int nb1,nb2,res;
    cout<<"Veuillez saisir le premier nombre : ";
    cin>>nb1;
    cout<<"Veuillez saisir le second nombre : ";
    cin>>nb2;
    res = euclide(nb1,nb2);
    cout<<"Le PGCD de "<<nb1<<" et "<<nb2<<" est : "<<res<<endl;
    return 0;
}

long euclide(long nb1, long nb2)
{
    if(nb2 == 0)
    {
        return nb1;
    }
    else
    {
        return euclide(nb2, nb1%nb2);
    }
}