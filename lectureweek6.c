//pointer ชี้เก่งง!!!
//pointer คือตัวแปรที่มีหน้าที่เก็บ address
#include<stdio.h>
int main()
{
    //วิธีสร้าง pointer
    int a = 20;//a มีค่าเท่ากับ 20
    int *ptr_a = &a;//ptr_a คือ pointer ที่เก็บ address ของตัวแปร a
    int **ptrOfptr_a = &ptr_a;//ptr0fptr_a คือ pointer ที่เก็บ address ของ pointer ptr_a

    printf("%p\n",ptr_a);//%p print address ของ ptr_a
    printf("%d\n",*ptr_a);//print ค่าที่ pointer ptr_a ชี้อยู่

    printf("\n");

    int x = 1, y = 2, z[10];
    int *ip; // ip is a pointer to int

    ip = &x; // ip now points to x
    y = *ip;
    *ip = 0;
    ip = &z[0];// ip now points to z[0]
    //x = 0,y = 1

    int *a_ptr, b;
    b = 10;
    a_ptr = &b;
    printf("(1) b = %d, *a_ptr = %d\n", b, *a_ptr);//ค่าของ b และ ค่าที่ pointer a_ptr ชี้อยู่
    *a_ptr *= 2;
    printf("(2) b = %d, *a_ptr = %d\n\n", b, *a_ptr);//ค่าของ b และ ค่าที่ pointer a_ptr ชี้อยู่ เมื่อ*2
    printf("The address of a is %p\n"
           "The value of a_ptr is %p\n\n", &b, a_ptr);//print address ออกมา
    printf("&*a_ptr = %p\n", &*a_ptr);//(1)
    printf("*&a_ptr = %p\n", *&a_ptr);//(2)
    //ไม่ว่าจะเขียนแบบไหนก็มีค่าเท่ากัน
}