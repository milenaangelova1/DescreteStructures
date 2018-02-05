# Упражнение 2 Декартово произведение (Cartesian Product)
## 1. Кратка теория

<p align="justify">
Ще казваме, че елементите x и y образуват наредена двойка, ако единият от тях е приет за първи, а другият за втори. Означавасе с(x,y) или〈x,y〉. Аналогично наредена n-орка ще наричаме всяко множество от n елемента, в което е указано кой е първи, кой втори и т.н., кой n-ти. Означава се с(x<sub>1</sub>,x<sub>2</sub>,...,x<sub>n</sub>) или〈x<sub>1</sub>,x<sub>2</sub>,...,x<sub>n</sub>〉. Ще казваме, че наредените n-торки(x<sub>1</sub>,x<sub>2</sub>,...x<sub>n</sub>) и (y<sub>1</sub>,y<sub>2</sub>,...y<sub>n</sub>) са равни, ако x<sub>i</sub> = y<sub>i</sub> за всяко i = 1, 2, ... n. Декартово произведениена множествата A и B се нарича множеството от наредени двойки: A×B={(a,b)|a ∈ A, b ∈ B}, т.е. множеството от всички наредени двойки, в които първият елемент е от първото множество, а вторият елемент е от второто множество. По аналогичен начин се въвежда декартово произведение на n множества A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>n</sub> като A<sub>1</sub>×A<sub>2</sub>×···×A<sub>n</sub>={(a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>)|a<sub>i</sub> ∈ A<sub>i</sub>, i= 1, 2, ..., n }.
</p>

![img](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4e/Cartesian_Product_qtl1.svg/1200px-Cartesian_Product_qtl1.svg.png)

## 2. Задачи

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

Функция за инициализиране на структурата Element. Инициализиран е само единият масив А. Вие ще трябва да добавите и другият масив към програмата и да го инициализирате с нечетните числа.
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
Функция за намиране на декартово произведение. Функцията трябва да бъде дописана, така че да принтира резултата от декартовото произведение. Виж резултата от програмата по-долу.
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
![alt tag](https://github.com/milenaangelova1/DescreteStructures/blob/master/images/task2.PNG) <br>

Написаната функция по-долу е функция за на разлика между две множества. Променете я, така че да се получи функция за намиране на обединение между съответните множества.
```
int * difference(struct Element elem) {
    int index=1, j, k, flag = 0;
    int nA = elem.a[0];
    int nB = elem.b[0];
    int* C = malloc(sizeof(int) * nA + sizeof(int) * nB);
    for(j = 1; j<=nA; j++) {
        flag = 1;
        for(k=1;k<=nB; k++) {
            if (elem.b[k] == elem.a[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            C[index] = elem.a[j];
            index++;
        }
    }
    C[0] = index;
    return C;
}
```

