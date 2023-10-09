#include <stdio.h>

void saludar() {
    printf("Bienvenido a la calculadora.\n");
}

float sumar(float n1, float n2) {
    return n1 + n2;
}
float restar (float n1, float n2) {
    return n1 - n2;
}

float multiplicar (float n1, float n2) {
    return n1 * n2;
}

float dividir (float n1, float n2) {
    if (n2 != 0)
        return n1 / n2;
    else {
        printf("No se puede dividir por cero.\n");
        return 0;
    }
}
int main() {
    saludar();
    
    float n1, n2, resultado;
        int operacion;
        
        
        printf("Ingrese el primer numero: ");
        scanf("%f", &n1);
        
        printf("Ingrese el segundo numero: ");
        scanf("%f", &n2);
        
        printf("1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n");
        printf("Elija la operacion (1, 2, 3, 4): ");
        
        scanf("%d", &operacion);
        
        switch (operacion) {
        case 1:
            resultado = sumar(n1, n2);
            break;
        case 2:
            resultado = restar(n1, n2);
            break;
        case 3:
            resultado = multiplicar(n1, n2);
            break;
        case 4:
            resultado = dividir(n1, n2);
            break;
        default:
            printf("Operacion no valida.\n");
        }
        
        printf("Resultado: %.2f\n ", resultado);
    
    return 0;
}