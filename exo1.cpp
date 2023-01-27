#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;	
	cout<<"Entrer une valeur positive (0 pour terminer) : "<<endl;
	cin>>x;
	cout<<"La racine de "<<x<<" est "<<sqrt(x)<<endl;
	while(x!=0.0)
	{
		if(x<0.0)
		{
			cout<<"La valeur ne peut pas être négative"<<endl;
		}
		cout<<"Entrer une valeur positive (0 pour terminer) : "<<endl;
		cin>>x;
		cout<<"La racine de "<<x<<" est "<<sqrt(x)<<endl;	
	}
	cout<<"Fin du programme"<<endl;
	return 0;
}
