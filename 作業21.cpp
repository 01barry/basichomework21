#include <stdio.h> 

#include <stdlib.h>

struct servitor

{

   char ID[8],name0[12];

   int hourly_pay,hours,payment;

};

void calc(struct servitor *);

int main(void)

{

   struct servitor emp51; 

   printf("請輸入編號,姓名,時薪,工作時數: ");

   scanf(" %s %s %d %d", emp51.ID, emp51.name0, &emp51.hourly_pay, &emp51.hours);

   calc(&emp51);

   printf("月收入: %d\n", emp51.payment);

   system("pause"); 

   return 0;

}



void calc(struct servitor *p)

{

    p->payment=p->hourly_pay*p->hours;

}
