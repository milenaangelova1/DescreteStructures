typedef struct Set {
    unsigned * array;
    unsigned length;
} Set;

typedef struct Pair {
    unsigned x;
    unsigned y;
} Pair;

typedef struct Relation {
    Pair * pairs;
    int length;
} Relation;

unsigned * random_generator(unsigned numbers, unsigned max, unsigned min);
Set * set(unsigned number_of_elements, unsigned max, unsigned min);
void print(Set * set);
Relation * cartesian_product(Set * A, Set * B);
void print_cartesian_product(Relation * cartesian_product);
