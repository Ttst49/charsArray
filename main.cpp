#include <iostream>

using namespace std;


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

int usingCinWithCharArray(){
    char tt[20];
    cout << "tapez une chaine de caractère";
    cin >> tt;
    cout << "Vous avez saisi: " << tt;


    return 0;
}

int main() {
    usingCinWithCharArray();
    return 0;
}
