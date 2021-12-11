#include <iostream>
#include "lib.h"


using namespace std;


int main() {
    int b=0;
    char A[10][20], B[20];
    for(int i=0; i<10; i++) {
            cin >> A[i];

    }

        cin >> B;
    if (posizione(A,B,b)){
        cout << b << endl;
    }else{
        cout << "non presente" << endl;
    }

    return 0;
}
