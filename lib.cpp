//
// Created by Alex Fragalà on 09/12/21.
//
#include <iostream>
#include "string.h"
#include "lib.h"

using namespace std;

bool posizione(char A[10][20], char B[10], int &b){
    for(int i=0; i<=10; i++){
        if (strcmp(B, A[i])==0){
            b=i;
            return true;
        }
    }
    return false;
}
