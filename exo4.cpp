#include <iostream>
using namespace std;

int main()
{
    long n;
    cout<<"Veuillez entrée la valeur de n : ";
    cin>>n;
    double v[n];
    v[0] = 0.0; v[1] = 0.0; v[2]=1.0;
    long SIZE = n;
    for(int i=3; i<=SIZE; ++i)
    {
        v[i] = v[i-1] + v[i-2] + v[i-3];
    }
    cout<<"La valeur du "<<n<<"ème terme est : "<<v[n]<<endl;
    return 0;
}