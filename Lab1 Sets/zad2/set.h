#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_RAND_NUMBERS 10

typedef struct Set {
    unsigned * array;
    unsigned length;
} Set;

Set * set(unsigned number_of_blocks);
unsigned * random_generator(unsigned number_of_rand_numbers);
void print(Set * set);
unsigned find_element(Set * set, unsigned element);
Set * Union(Set * A, Set * B, Set * C);
Set * Union_two_sets(Set * A, Set * B);
Set * intersection(Set * A, Set * B, Set * C);
Set * intersection_two_sets(Set * A, Set * B);
Set * difference(Set * A, Set * B, Set * C);
Set * difference_two_sets(Set * A, Set * B);
Set * symmetric_difference(Set * A, Set * B, Set * C);
