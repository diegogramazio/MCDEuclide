#include <stdio.h>

/* programma che legge due interi ed informa l'utente sul
 * massimo comun divisore fra i due interi letti; per calcolare
 * il massimo comun divisore viene utilizzato l'algoritmo di Euclide.*/
int main() {
       int x, y;          // interi da leggere
       int xapp, yapp;       // variabili d'appoggio per non perdere i dati di INPUT
       int resto;          // il resto della divisione fra i numeri

       /* INPUT */
       printf("Caro utente, introduci due interi.\n");
       scanf("%d%d", &x, &y);

       xapp=x;     //duplico i valori di x e y per non perderli
       yapp=y;

       /* calcolo il mcd tramite l'algoritmo di Euclide */
       while(x%y!=0){
            resto = x%y;
            x = y;
            y = resto;
       }

       /* OUTPUT */
       printf("Il MCD fra %d e %d %c %d.\n", xapp, yapp, 138, y);
 }
