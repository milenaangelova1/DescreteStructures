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
    unsigned long long length;
} Relation;


Set * create_set(unsigned n);
void print(Set * set);
unsigned long long c(unsigned n, unsigned k);
Relation * generate_combinations(unsigned n, unsigned k);
