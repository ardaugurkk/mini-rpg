#include <stdio.h>
#include <stdlib.h>

void hasarver(float *hasar, float *can) {

    printf("Kaç hasar vereceksin?\n\n");
    scanf("%f", hasar);
    
    *can = *can - *hasar;

    if (*can < 0) {
        *can = 0;
    }
}

void canver(float *can, int *iksir) {

    if (*can < 0) {
        *can = 0;
    }

    if(*can <= 0 && *iksir > 0) {
        printf("Canın bitti, can basıldı.\n\n");
        *can = *can + 30;
        *iksir -= 1;
    }
    else if (*iksir > 0) {
        *can = *can + 30;
        *iksir -= 1;
    }

    else if (* can == 100) {
        printf("Canın zaten full, can basılmadı.\n\n");
    }

    else if (*iksir <= 0 && *can <= 0) {
        printf("Oyunu kaybettiniz.\n");
        exit(0);
    }

    else if (*iksir <= 0) {
        printf("Yeterli iksirin yok, can basılamadı.\n\n");
    }

    if (*can > 100) {
        *can = 100;
    }
}


int main() {

    float can = 100;
    int iksir = 3;
    float hasar;
    char girdi;

    while (1) {

        if (can <= 0) {
            canver(&can, &iksir);
            }

        printf("Mevcut canın: %.2f\nMevcut iksirin: %d\nHasar ver veya can bas. (H/C)\n\n", can, iksir);
        scanf(" %c", &girdi);

            if (girdi == 'H' || girdi == 'h') {
            hasarver(&hasar, &can);
            }  

            else if (girdi == 'C' || girdi == 'c') {
            canver(&can, &iksir);
            } 
    }

    return 0;
}

        

        

