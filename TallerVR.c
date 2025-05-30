#include <stdio.h>

int main() {
    int rut = 0, error = 0, compara = 0, x[9], i = 0, z = 2;
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
    }else { //cambiar a else if
        if ((rut >= 0 && rut < 10000000) || (rut > 99999999) ){
            error ++;
        }
    }
    if (dv != 'K' && dv != '0' && dv != '1' && dv != '2' && dv != '3' && dv != '4' && dv != '5' && dv != '6' && dv != '7' && dv != '8' && dv != '9') {
        error++;
    }
    if (error >= 1) {
        printf("RUT o Digito verificador incorrecto!!\n");
    } else {
        if (error == 0) {
            printf("\nEl rut es correcto!\n");
        }
    }
    i = 0;
    while(i != 8){
        x[i] = x[i] * z;
        z++;
        i++;
        if(z == 8){
            z = 2;
        }
        printf("%d", x[i]);
    }
    for(i = 0; i = 7; i++){
        x[9] += x[i];
    }
    printf(" %d\n", x[9]);
    return 0;    
}
