#include <iostream>
using namespace std;

int Occurences(char *p_char, char l){
    int nb_occ = 0;
    while(*p_char!='\0'){
        if(l==*p_char){
            nb_occ++;
        }
        p_char++;
    }
    return nb_occ;
}

int main(){
    char char_tab[]{'K','h','a','l','e','d','b','l','l','x','O'};
    char *p_char = char_tab;
    char l = 'l';
    int occs = Occurences(p_char, l);
    cout<<"Il y a : "<<occs<<" occurences de "<<l<<" dans la chaine."<<endl;
    return 0;
}