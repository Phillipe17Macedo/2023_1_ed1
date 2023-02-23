#include<stdio.h>

struct No {
    int x;
    No *proximo;
};

struct Data {
    int dia, mes, ano, idade;
};

// Passagem de par�metro por valor
// I.e. uma c�pia da struct � criada na mem�ria
void imprimir(Data d) {
    printf("PV %02d/%02d/%04d\n", d.dia, d.mes, d.ano);
}

// Passagem de par�metro por refer�ncia
// I.e. usamos a mesma posi��o de mem�ria da struct
// na fun��o principal
void imprimir(Data *d) {
    printf("PR %02d/%02d/%04d\n", d->dia, d->mes, d->ano);
}

// Vetores sempre s�o passados por refer�ncia
void imprimirVetor(int v[], int n) {

}

int main() {

    int a;

    scanf("%d", &a);
    printf("%d\n", a);

    int *p = &a;

    printf("%d\n", *p);
    Data d;
    d.dia = 23;
    d.mes = 2;
    d.ano = 2023;
    imprimir(d);
    imprimir(&d);

    int v[10];
    imprimirVetor(v, 10); // <- v indica o endere�o de mem�ria

    return 0;
}
