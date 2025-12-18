// c pointer
// refrence and adress.

#include <stdio.h>

/*
int sum(int *ptr, int *ptr2) 
{
    return *ptr + *ptr2;
}

int main()
{
    int n1, n2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    int result = sum(&n1, &n2);
    printf("sum of %d and %d = %d", n1, n2, result);

    return 0;
}*/

/*
void goodMorning() 
{ 
    printf("Good Morning!");
};

void goodEvening() 
{
    printf("Good Evening");
}

void say(void (*fn)())
{
    fn();
}

int main()
{
    say(goodEvening);
    return 0;
}*/

/*
void add() { printf("Add\n"); };
void subtract() { printf("Subtract\n"); };
void multiplication() { printf("multiplication\n"); };

int main()
{
    void (*oprations[3])() = { add, subtract, multiplication };
    for(int i = 0; i < 3; i++) {
        oprations[i]();
    }

    return 0;
}*/

/*
void add(int a, int b) { printf("Result: %d\n", a + b); }
void subtract(int a, int b) { printf("Result: %d\n", a - b); }
void multiply(int a, int b) { printf("Result: %d\n", a * b); }

int main() {
  int choice, x = 10, y = 5;

  void (*operations[3])(int, int) = { add, subtract, multiply };

  printf("x = %d, y = %d\n\n", x, y);
  printf("Choose an operation:\n");
  printf("0: Add\n1: Subtract\n2: Multiply\n");
  scanf("%d", &choice);

  if (choice >= 0 && choice < 3) {
    operations[choice](x, y);
  } else {
    printf("Invalid choice!\n");
  }

  return 0;
}*/



// null pointer
/*
int main() {
    int *ptr = NULL;

    if(ptr == NULL) {
        printf("The pointer is Null.\n");
    }

    return 0;
}*/

// void pointer
/*
int main() {
    int num = 10;
    float pi = 3.14;
    void *ptr;

    ptr = &num;
    printf("Int value %d\n", *(int *)ptr);

    ptr = &pi;
    printf("Float value %d\n", *(float *)ptr);

    return 0;
}*/


//function pointer
/*
void greet() { printf("Hello from the function."); }

int main() {
    void (*fn)();
    fn = greet;
    fn();

    return 0;
}*/


// pointer to pointer
/*
int main() {
    int num = 20;
    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num %d\n", num);
    printf("Value of ptr %d\n", *ptr);
    printf("Value of ptr2 %d\n", **ptr2);

    return 0;
}*/