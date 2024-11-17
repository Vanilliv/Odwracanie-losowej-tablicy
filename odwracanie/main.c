#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ASCII kody liter:
// 65 - 90 - DU�E LITERY
// 97 - 122 - ma�e litery

void wypelnijTablice(char a[], int rozmiar){
    srand(time(NULL));
    for(int i = 0; i<rozmiar; i++){
        int mod = ((rand() % 2) == 0) ? 97 : 65;
        a[i] = (char)((rand() % 26) + mod);
    }
}

void wyswietlTablice(char a[], int rozmiar){
    printf("Wyswietlam zawartosc tablicy:\n");
    for(int i = 0; i<rozmiar; i++){
        printf("%c", a[i]);
    }
    printf("\n");
}

void odwrocTabliceV1(char a[], int rozmiar){
    char temp;
    for(int i = 0; i < (rozmiar/2); i++)
        {
            temp = a[i];
            a[i] = a[rozmiar - 1 - i];
            a[rozmiar - 1 - i] = temp;
        }
}

void odwrocTabliceV2(char a[], int rozmiar){

}

int main(){
    int rozmiar = 50;
    char tablica[rozmiar] ;
    printf("Tablica losowych znakow o rozmiarze %i\n", rozmiar);
    wypelnijTablice(tablica, rozmiar);
    printf("Tablica gotowa\n");
    wyswietlTablice(tablica, rozmiar);
    printf("Odwracam tablice z wykorzystaniem dodatkowej zmiennej\n");
    odwrocTabliceV1(tablica, rozmiar);
    wyswietlTablice(tablica, rozmiar);
    printf("Odwracam tablice z wykorzystaniem wylacznie tablicy\n");
    odwrocTabliceV2(tablica, rozmiar);
    wyswietlTablice(tablica, rozmiar);
    return 0;
}
