# Упражнение 2 Декартово произведение (Cartesian Product)

<b>Задача 1.</b> Да се напише програма на С, която да намира декартово произведение
между две множества A и B. <br>
Елементи на множеството А ca: <br>
```
  A = {x|x∈N, 1≤2x≤10 } 
```
Елементи на множеството B ca: <br>
```
  B = {x|x∈N, 1≤2x-1≤10 }
```
  
## Упътване 

Да се използва следната структура: 
```
  struct Element {
      int *a;
      int *b;
  };
```

Функция за инициализиране на структурата Element. 
```
struct Element initializeArrays() {
    int i;
    struct Element elm;
    int nEven = aN/2;

    elm.a = (int *)malloc(sizeof(int)*nEven);

    for(i=1;i<=nEven; i++) {
        elm.a[i] = 2*i;
    }
    
    elm.a[0] = nEven;
    return elm;
}
```
Функция за намиране на декартово произведение:
```
void cartesianProduct(struct Element elm) {
    int i, j;
    printf("cartessian product=");
    printf("{");
    ....
    printf("}");
}
```
Резултатът от програмата. <br>
![alt tag](https://github.com/milenaangelova1/DescreteStructures/blob/master/images/task1.PNG) <br>

<b>Задача 2. </b>Да се напише програма, която намира декартово произведение над множеството C и всички двойки елементи, които съвпадат. Множеството C е обединението от множествата А и B. Използвайте инициализираните множества от първата задача. 

```
Пример:
А = {2,4,6,8,10}  B = {1,3,5,7,9} 
Обединението на множествата е C = A U B = {1,2,3,4,5,6,7,8,9,10}
Декартово произведение над C:

```
Написаната функция по-долу е функция за намиране на разлика между две множества. Променете я, така че да се получи функция за намиране на обединение между съответните множества.
```
int difference(struct Element elem) {
    int i=0, j, k, flag = 0;
    int nA = sizeof(elem.a)/sizeof(int);
    int nB = sizeof(elem.b)/sizeof(int);
    int* C = malloc(sizeof(int) * nA + sizeof(int) * nB);
    for(j = 0; j<nA; j++) {
        flag = 1;
        for(k=0;k<nB; k++) {
            if (elem.B[k] == elem.A[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            C[i] = elem.A[j];
            i++;
        }
    }

    return C;
}
```
Резултатът от програмата. <br>
![alt tag](https://github.com/milenaangelova1/DescreteStructures/blob/master/images/task2.PNG) <br>
