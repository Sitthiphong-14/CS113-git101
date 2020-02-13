#include<stdio.h>
#include<stdlib.h>
int main()
{
    int name[20];
    int name, i=1;
    char chr;
    //gets(name);รับได้แค่สตริง
    //fgets(name, 20, stdin);กำหนดขนาด
    //getchar(chr);รับได้ตัวเดียว
    //atoi(); array to int
    //atof(); array to float
    //atoll(); array to long long
    puts(name);//แสดงแล้วขึ้นบรรทัดใหม่เลย
    putchar(100); //ออก ascii 100

    //&& //คือ and
    //|| //คือ or

    while(i > 0)
    {
        i++;//ถ้าส่งinfinit loop ให้ส่ง ctrl+c หยุด loop
    }
    for(i = 0;i < 10;i++)//วรรคแรกกำหนดค่า;วรรค2เช็ค;วรรค3ทำหลังทำข้างในหมดแล้ว
    {
        printf("True");
    }
    while(10){}//ควร
    for(;;){}//ไม่ควร
}