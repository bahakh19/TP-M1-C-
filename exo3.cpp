#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout<<"Veuillez indiquez la hauteur de l'arbre : ";
	cin>>n;
	string mult = "*";

	for(int i=0;i<n;i++)
	{
		string eq;
		
		for(int j=0; j<(n-i-1); j++)
		{
			eq+="=";
		}
		if(i>0)
		{
			mult+="*";
			mult+="*";
		}
		cout<<eq + mult + eq<<endl;
	}
	return 0;
}
