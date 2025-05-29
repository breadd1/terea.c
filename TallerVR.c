#include <stdio.h>

int main() {
    int rut = 0, error = 0, compara = 0, x[8], i = 0;
    char dv; // dv es el digito verificador
    printf("\nIngrese RUT a verificar (Ej: 12345678): ");
    scanf("%d", &rut);
    printf("\nIngrese digito verificador (Ej: K): ");
    scanf(" %c", &dv);
    compara = rut;
    while (compara > 0 && i < 7)
    {
        x[i] = compara % 10;    
        printf("%d\n", x[i]);
        compara /= 10;
        i++;
    }
    
    if (rut <= 99999999 && rut >= 10000000) { //Verificador de rut con 8 digitos.
    }else { 
        if ((rut >= 0 && rut < 10000000) || (rut > 99999999) ){
            error ++;
        }
    }
    if ((dv != 'K') && ('0') && ('1') && ('2') && ('3') && ('4') && ('5') && ('6') && ('7') && ('8') && ('9')) { //Verificador del digito fuera de rango.
        error ++;
    }
    if (error >= 1) {
        printf("RUT o Digito verificador incorrecto!!");
    } else {
        if (error == 0) {
            printf("\nEl rut es correcto!");
        }
    }
    return 0;    
}