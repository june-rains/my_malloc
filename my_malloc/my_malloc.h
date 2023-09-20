#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct memory
{
    size_t size;
    struct memory *prev;
    struct memory *next;
} memory_t;

size_t memory_size = sizeof(memory_t);
memory_t *first = NULL;
unsigned long total_memory = 0;
void *ff_malloc(size_t size);
void ff_free(void *ptr);
void *bf_malloc(size_t size);
void bf_free(void *ptr);
void *find_first_fit_in_freelist(size_t size);
void *find_best_fit_in_freelist(size_t size);
void *split_into_two(memory_t *block, size_t size);
void *remove_from_freelist(memory_t *block);
void *create_mem(size_t size);
void free_memory(void *ptr);
void insert_into_freelist(memory_t *prevOne, memory_t *nextOne, memory_t *ptr_begin);
void merge(memory_t *block);
unsigned long get_data_segement_size();
unsigned long get_data_segement_free_space_size();