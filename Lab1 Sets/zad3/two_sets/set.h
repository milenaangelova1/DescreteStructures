#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_RAND_NUMBERS 10

typedef struct Set {
    char * array;
    unsigned length;
} Set;

Set * set(unsigned number_of_blocks);
char * random_generator(unsigned number_of_rand_numbers);
void print(Set * set);
unsigned find_element(Set * set, char element);
Set * Union(Set * A, Set * B);
Set * intersection(Set * A, Set * B);
Set * difference(Set * A, Set * B);
Set * symmetric_difference(Set * A, Set * B);
