# Pointers in C

A pointer holds a memory address

```c
#include <stdio.h>

void main() {
  int x = 7;
  
  // Creating a pointer
  int *ptrx = &x  // &x signifies the memory address of x
  
  printf("Address of x is %x", ptrx);
  // %x means hexadecimal
  /* Address of x is 6e41a4ec */
  // Memory address changes everytime
  
  // Assigning value to the memory address which the pointer holds [ptrx = 6e41a4ec = 20]
  *ptrx = 20;
  printf("Value of x ptr is %d", *ptrx); 
}
```
