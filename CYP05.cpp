#include <stdio.h>

int main() {
    int numCalif, cont, cont2, ordenado = 0;
    int numCuenta[2000];
    float calif[2000];
    double guardado;
    scanf("%i",&numCalif);
    
    if (numCalif > 0) {
        for (cont = 0;cont < numCalif;cont++) {
            scanf("%i", &numCuenta[cont]);
            scanf("%f", &calif[cont]);
        }
        while (!ordenado) {
            ordenado = 1;
            cont = 0;
            while (cont < numCalif - 1) {
                if (numCuenta[cont] > numCuenta[cont + 1]) {
                    ordenado = 0;
                    guardado = numCuenta[cont];
                    numCuenta[cont] = numCuenta[cont + 1];
                    numCuenta[cont + 1] = guardado;
                    guardado = calif[cont];
                    calif[cont] = calif[cont + 1];
                    calif[cont + 1] = guardado;
                }
                else {
                    if (numCuenta[cont] == numCuenta[cont + 1]) {
                        ordenado = 0;
                        if (calif[cont] < calif[cont + 1]) {
                            calif[cont] = calif[cont + 1];
                        }
                        for (cont2 = cont + 1;cont2 < numCalif - 1;cont2++) {
                            numCuenta[cont2] = numCuenta[cont2 + 1];
                            calif[cont2] = calif[cont2 + 1];
                        }
                        numCalif--;
                    }
                }
                cont++;
            }
        }
        printf("%i", numCalif);
        for (cont = 0;cont < numCalif;cont++) {
            printf("\n%i %f", numCuenta[cont], calif[cont]);
        }
    }
    else {
        printf("0");
    }
    return 0;
}