#include<stdio.h>
//#include<time.h>

int main ()
{
    int num;
    srand(time(NULL));
    num=rand()%7;
    switch(num)
    {
     case 0:
            printf("monday");break;
     case 1:
            printf("Tuesday");break;
     case 2:
            printf("Wednesday");break;
     case 3:
             printf("Thursday");break;
     case 4:
             printf("Friday");break;
     case 5:
             printf("Saturday");break;
     case 6:
             printf("Sunday");break;
     default:
        printf("error!");break;

    }


}
