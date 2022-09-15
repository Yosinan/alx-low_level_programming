#include "main.h" 
 /** 
  * print_triangle() - prints triangle using # 
  * 
  * it has no return type 
  */ 
 void print_triangle(int size) 
 { 
         if (size > 0) 
         { 
                 int i, j, k; 
  
                 for (i = 1; i <= size; i++) 
                 { 
                         for(j = size; j > i; j--) 
                                 _putchar(' '); 
                         for (k = 1; k <= i; k++) 
                                 _putchar('#'); 
                         _putchar('\n'); 
                 } 
         } 
         else 
                 _putchar('\n'); 
 }
