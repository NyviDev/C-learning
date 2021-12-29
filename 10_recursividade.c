#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int somaVRec(int v[], int i) {
    if (i < MAX) {
        return v[i] + somaVRec(v, i+1);
    }
    else {
        return 0;
    } 
}

int main() {
   int v[MAX] = {1, 2, 3, 4, 5};

   printf("%d", somaVRec(v, 0));


}