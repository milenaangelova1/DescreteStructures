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
    unsigned length;
} Relation;

unsigned * random_generator(unsigned numbers, unsigned max, unsigned min);
Set * set(unsigned number_of_elements, unsigned max, unsigned min);
void print(Set * set);
Relation * cartesian_product(Set * A, Set * B);
void print_cartesian_product(Relation * cartesian_product);

Relation * Union(Relation * rel1, Relation * rel2);
Relation * difference(Relation * rel1, Relation * rel2);
Set * difference_sets(Set * A, Set * B);
unsigned find_element(Relation * relation, Pair pair);
unsigned find_element_sets(Set * set, unsigned element);
Set * intersection_sets(Set * A, Set * B);
Relation * intersection(Relation * A, Relation * B);
