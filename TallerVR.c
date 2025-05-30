#include <stdio.h>

int main() {
    while(1){
        int rut = 0, error = 0, compara = 0, x[7], i = 0, z = 2, r;
        char dv; // dv es el digito verificador
        int dvn, f = 0;// me niego a usar un monton de if
        for(i = 0; i < 8; i++){
            x[i] = 0;
        }
        printf("ingresa 0 para cerrar el programa.");
        printf("\nIngrese RUT a verificar (Ej: 12345678): ");
        scanf("%d", &rut);
        i = 0;
        compara = rut;
        while (compara > 0 && i <= 7)
        {
            x[i] = compara % 10;    
            compara /= 10;
            i++;
        }
        if (x[0] == 0){
            break;
        }
        printf("\nIngrese digito verificador (Ej: K): ");
        scanf(" %c", &dv);
        if (rut <= 99999999 && rut >= 10000000) { //Verificador de rut con 8 digitos.
        }else if ((rut >= 0 && rut < 10000000) || (rut > 99999999) ){
                error ++;   
            }
        if (dv != 'K' && dv != 'k' && dv != '0' && dv != '1' && dv != '2' && dv != '3' && dv != '4' && dv != '5' && dv != '6' && dv != '7' && dv != '8' && dv != '9') {
            error++;
        }
        if (error >= 1) {
            printf("RUT o Digito verificador fuera de rango!!\n");
            continue;
        } else if (error == 0) {
    
        }
        for(i = 0; i <= 7; i++){
            x[i] = x[i] * z;
            z++;
            if(z == 8){
                z = 2;
            }
        }
        for(i = 1; i <= 7; i++){
            x[0] += x[i];
        }
        r = x[0] / 11;
        x[0] = x[0] - (11 * r);
        x[0] = 11 - x[0];
        if (x[0] == 10 && (dv == 'k' || dv == 'K')){
            printf("el rut es valido\n");
        }
        else if (x[0] == 11 && dv == '0'){
            printf("el rut es valido}n");
        }
        else{
            dvn = dv-'0';
            if (dvn == x[0]){
                printf("el rut es valido\n");
            }
            else{
                printf("RUT o Digito verificador incorrecto!!\n");
            }
        }
    }
    return 0;    
}
