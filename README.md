# my_malloc

## Summary
For this project, I implement my own version of several memory allocation functions from the C standard library.

## Detail
I implement two functions:

* **`void *malloc(size_t size);`**   
* **`void free(void *ptr);`**

For each functions, I implement 2 ways, one is **First Fit** and the other one is **Best Fit**:
* For First Fit, I will find the first fit free memory to allocate.
* For Best Fit, I will find the best fit memory to allocate.

## Function Implementation
**malloc()**  
If there is free memory space, I will allocate from free memory space list. If there's no free memory space, I will use sbrk() to create more memory space.

**free()**  
To free a memory space, I put them into free memory space list for future allocate.
