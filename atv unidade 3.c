#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    int choice, num1, num2;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Calcular fatorial\n");
        printf("2. Calcular n-esimo termo da sequencia de Fibonacci\n");
        printf("3. Calcular MDC de dois numeros\n");
        printf("4. Sair\n");
        printf("Digite sua escolha (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite um numero para calcular o fatorial: ");
                scanf("%d", &num1);
                printf("Fatorial de %d é %d\n", num1, fatorial(num1));
                break;
            case 2:
                printf("Digite um numero para calcular o n-esimo termo de Fibonacci: ");
                scanf("%d", &num1);
                printf("O %d-esimo termo de Fibonacci é %d\n", num1, fibonacci(num1));
                break;
            case 3:
                printf("Digite dois números para calcular o MDC: ");
                scanf("%d %d", &num1, &num2);
                printf("O MDC de %d e %d é %d\n", num1, num2, mdc(num1, num2));
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Escolha Opção invalida! Tente novamente.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

