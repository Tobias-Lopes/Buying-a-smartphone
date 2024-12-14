#include <stdio.h>
#include <string.h>

#define MAX_SMARTPHONES 100

typedef struct {
    char modelo[40];
    int memoria;        
    float processador;  
    float camera;       
    float bateria;      
} Smartphone;

int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[]) {
    if (qnt_cadastrada >= MAX_SMARTPHONES) {
        printf("Cadastro cheio. Não é possível adicionar mais smartphones.\n");
        return qnt_cadastrada;
    }

    Smartphone novo;
    scanf(" %[^\n]s", novo.modelo);
    scanf(" %d", &novo.memoria);
    scanf(" %f", &novo.processador);
    scanf(" %f", &novo.camera);
    scanf(" %f", &novo.bateria);

    phones[qnt_cadastrada] = novo;
    return qnt_cadastrada + 1;
}

// Função para pesquisar smartphones que atendam aos requisitos mínimos
int pesquisaSmartphones(int qnt_cadastrada, Smartphone phones[], Smartphone reqMin) {
    int encontrados = 0;

    for (int i = 0; i < qnt_cadastrada; i++) {
        if (phones[i].memoria >= reqMin.memoria &&
            phones[i].processador >= reqMin.processador &&
            phones[i].camera >= reqMin.camera &&
            phones[i].bateria >= reqMin.bateria) {
            // Smartphone atende aos requisitos mínimos
            printf("Modelo: %s\n", phones[i].modelo);
            printf("Memoria: %dGB\n", phones[i].memoria);
            printf("Processador: %.2fGhz\n", phones[i].processador);
            printf("Camera: %.2fMPixels\n", phones[i].camera);
            printf("Bateria: %.2fmA\n\n", phones[i].bateria);
            encontrados++;
        }
    }

    return encontrados;
}

int main() {
    Smartphone phones[MAX_SMARTPHONES];
    int qnt_cadastrada = 0;
    char continuar;

    // Cadastro de smartphones
    do {
        scanf(" %c", &continuar);

        if (continuar == 's' || continuar == 'S') {
            qnt_cadastrada = cadastraSmartphone(qnt_cadastrada, phones);
        }
    } while (continuar == 's' || continuar == 'S');

    // Entrada dos requisitos mínimos
    Smartphone reqMin;
    scanf(" %d", &reqMin.memoria);
    scanf(" %f", &reqMin.processador);
    scanf(" %f", &reqMin.camera);
    scanf(" %f", &reqMin.bateria);

    // Pesquisa de smartphones compatíveis
    int encontrados = pesquisaSmartphones(qnt_cadastrada, phones, reqMin);

    // Exibição do total encontrado
    printf("%d smartphones encontrados.\n", encontrados);

    return 0;
}
