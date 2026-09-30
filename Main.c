#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *my_malloc(size_t size);
void my_free(void *pointer);



int main()
{
    printf("----iniciando prueba---\n");

    printf("Pidiendo memoria para un numero...\n");
    int *mi_numero = (int *)my_malloc(sizeof(int));

    if(mi_numero != NULL){
        *mi_numero = 42;
        printf("exito: %d\n", *mi_numero);

        printf("liberando memoria\n");
        my_free(mi_numero);
        printf("memoria liberada\n\n");
    }
    printf("---pruebas finalizadas---");

    return 0;
}
