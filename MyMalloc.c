#include <stddef.h>
#include <unistd.h>

typedef struct block_header{
    size_t size;
    int is_free;
    struct block_header *next;
}block_header_t;

void *my_malloc(size_t size){
    if(size == 0){
        return NULL;
    }

    size_t total_size = sizeof(block_header_t) + size;

    void *nuevo_espacio = sbrk(total_size);

    if(nuevo_espacio == (void *) -1){
        return NULL;
    }

    block_header_t *header = (block_header_t *)nuevo_espacio;

    header -> size = size;
    header -> is_free= 0;
    header -> next = NULL;

    return (void *)(header + 1);
}

void my_free(void *pointer){
    if(pointer == NULL){
        return;
    }
    
    block_header_t *header = ((block_header_t *)pointer) -1;

    header -> is_free = 1;

}
