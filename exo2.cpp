#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Veuillez fournir n : "<<endl;
	cin>>n;
	double tot = 0.0;
	for(int i=0; i<n; i++)
	{
		tot+=1.0/(i+1);
	}
	cout<<"La somme des "<<n<<" premiers termes est : "<<tot<<endl;
	return 0;
}
