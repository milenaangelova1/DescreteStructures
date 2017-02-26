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
Резултатът от програмата.
![alt tag]()
