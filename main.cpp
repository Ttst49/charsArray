#include <iostream>
#include "cstring"

using namespace std;

[[maybe_unused]]
int firstCharArray(){
    char tt[20];
    tt[0] = 'B';
    tt[1] = 'O';
    tt[2] = 'N';
    tt[3] = 'J';
    tt[4] = 'O';
    tt[5] = 'U';
    tt[6] = 'R';
    tt[7] = '\0';
    cout << tt;
    return 0;
}
[[maybe_unused]]
int usingCinWithCharArray(){
    char tt[20];
    cout << "tapez une chaine de caractère";
    cin >> tt;
    cout << "Vous avez saisi: " << tt;

    return 0;
}

[[maybe_unused]]
int compareTwoCharArray(){
    char tt[20];
    cout << "Tapez une chaine de caractère";
    cin >> tt;
    if (strcmp(tt,"bonjour") == 0){
        cout << "Gagné";
    } else{
        cout << strcmp("bonjour",tt) << endl <<"Perdu";
    }

    return 0;
}

[[maybe_unused]]
int getLexicographicOrder(){
    char a[20];
    cout << "Tapez une chaine de caractère a tester";
    cin >> a;
    if (strcmp(a,"bonjour")==0){
        cout << "La chaine est identique";
    }else if (strcmp(a,"bonjour")>0){
        cout << "La chaine " << a << " est après bonjour";
    }else{
        cout << "La chaine " << a << " est avant bonjour";
    }
    return 0;
}

[[maybe_unused]]
int copyStringToAnother(){
    char a[20], b[20], c[20];
    cout << "Donnez la valeur qui sera associée par la suite dans le code" << endl;
    cin >> b;
    strcpy(a,b);
    strcpy(c,a);
    cout << "La chaine c vaut: " << c;

    return 0;
}

[[maybe_unused]]
int getCharArrayLength(){
    char a[20];
    int aLength;
    cout << "Donnez une chaine de caractère" << endl; cin >> a;
    aLength = strlen(a);
    cout << "La taille de la chaine est: " << aLength;
    return 0;
}

[[maybe_unused]]
int charArrayWithSpaces(){
    char tt[15];
    cout << "Tapez une chaine de caractères avec espace" << endl;
    cin.getline(tt,15);
    cout << "Vous avez tapé " << tt;

    return 0;
}

int main() {
    charArrayWithSpaces();
    return 0;
}
