# Упражнение 2 Декартово произведение (Cartesian Product)
## 1. Кратка теория

<p align="justify">
Ще казваме, че елементите x и y образуват наредена двойка, ако единият от тях е приет за първи, а другият за втори. Означавасе с(x,y) или〈x,y〉. Аналогично наредена n-орка ще наричаме всяко множество от n елемента, в което е указано кой е първи, кой втори и т.н., кой n-ти. Означава се с(x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>n</sub>) или〈x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>n</sub>〉. Ще казваме, че наредените n-торки (x<sub>1</sub>,x<sub>2</sub>,...x<sub>n</sub>) и (y<sub>1</sub>, y<sub>2</sub>, ..., y<sub>n</sub>) са равни, ако x<sub>i</sub> = y<sub>i</sub> за всяко i = 1, 2, ... n. Декартово произведениена множествата A и B се нарича множеството от наредени двойки: A×B={(a,b)|a ∈ A, b ∈ B}, т.е. множеството от всички наредени двойки, в които първият елемент е от първото множество, а вторият елемент е от второто множество. По аналогичен начин се въвежда декартово произведение на n множества A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>n</sub> като A<sub>1</sub>×A<sub>2</sub>×···×A<sub>n</sub>={(a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>)|a<sub>i</sub> ∈ A<sub>i</sub>, i= 1, 2, ..., n }.
</p>

![img](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4e/Cartesian_Product_qtl1.svg/1200px-Cartesian_Product_qtl1.svg.png)

## 2. Задачи

<b>Задача 1.</b> Да се напише програма на С, която да намира декартово произведение
между две множества A и B. Използвайте генераторът за генериране на случайни числа от
предишното упражнение, със следните интервали:
за множеството А: числата трябва да са в интервал [65, 90], а за B трябва да са между [97, 122].
Напишете функция, която да принтира декартовото произведение, като двойките елементи, да се
представят като букви. 

Структури и прототипи на функции:
```
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

Set * set(int number_of_elements, unsigned max, unsigned min);
void print(Set * set);
Relation * cartesian_product(Set * A, Set * B);
void print_cartesian_product(Relation * cartesian_product);
int * random_generator(int number_of_rand_numbers, unsigned max, unsigned min);   

int main(int argc, const char * argv[]) {
    srand((int)time(NULL));
    Set * A = set(5, 90, 65);
    Set * B = set(5, 122, 97);

    printf("Set A: \n");
    print(A);
    printf("Set B: \n");
    print(B);

    printf("\n");

    Relation * result = cartesian_product(A, A);
    print_cartesian_product(result);

    Relation * result1 = cartesian_product(A, B);
    print_cartesian_product(result1);

    free(A);
    free(B);
    free(result);
    free(result1);

    return 0;
}
```
<b>Задача 2.</b> Да се напише програма, която да проверява дали следното твърдение 
е вярно. 

![img](https://latex.codecogs.com/gif.latex?%5Cleft%20%28%20A%20%5Ctimes%20B%20%5Cright%20%29%20%5Csetminus%20%5Cleft%20%28%20C%20%5Ctimes%20D%20%5Cright%20%29%20%3D%20%5Cleft%20%28%20%5Cleft%20%28%20A%5Csetminus%20C%20%5Cright%20%29%20%5Ctimes%20B%20%5Cright%20%29%20%5Ccup%20%5Cleft%20%28%20A%20%5Ctimes%20%5Cleft%20%28%20B%5Csetminus%20D%20%5Cright%20%29%20%5Cright%20%29)

За целта е необходимо да се напишат нови функции за обединение, сечение и разлика, така че те 
да работят със структура Relation.

```
typedef struct Set {
    int * array;
    int length;
} Set;

typedef struct Pair {
    int x;
    int y;
} Pair;

typedef struct Relation {
    Pair * pairs;
    int length;
} Relation;

int * random_generator(int numbers, unsigned max, unsigned min);
Set * set(int number_of_elements, unsigned max, unsigned min);
void print(Set * set);
Relation * cartesian_product(Set * A, Set * B);
void print_cartesian_product(Relation * cartesian_product);

Relation * Union(Relation * rel1, Relation * rel2);
Relation * difference(Relation * rel1, Relation * rel2);
Set * difference_sets(Set * A, Set * B);
unsigned find_element(Relation * relation, Pair pair);
unsigned find_element_sets(Set * set, int element);
Set * intersection_sets(Set * A, Set * B);
Relation * intersection(Relation * A, Relation * B);


int main(int argc, const char * argv[]) {
    srand((int)time(NULL));
    Set * A = set(3, 90, 65);
    Set * B = set(3, 90, 65);
    Set * C = set(3, 90, 65);
    Set * D = set(3, 90, 65);
    
    printf("Set A: \n");
    print(A);
    printf("Set B: \n");
    print(B);
    
    printf("Set C: \n");
    print(C);
    printf("Set D: \n");
    print(D);
    
    printf("\n");
    
    Relation * result = cartesian_product(A, A);
    // print_cartesian_product(result);
    
    Relation * result1 = cartesian_product(A, B);
    // print_cartesian_product(result1);
    
    Relation * left_side = ...;
    Relation * right_side = ...;
    print_cartesian_product(left_side);
    print_cartesian_product(right_side);
    
    free(A);
    free(B);
    free(C);
    free(D);
    free(result);
    free(result1);
    free(left_side);
    free(right_side);
    
    return 0;
}
```




