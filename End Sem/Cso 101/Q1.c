#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct student{
    char name[11];
    int id,jee,twel;
    
};
int main(int argc, char const *argv[])
{
    struct student a[50];
    for (int i = 0; i < 50; i++)
    {
        a[i].id=((rand()+10000)%100000);
        a[i].jee=(rand()%301);
        a[i].twel=(rand()%101);
       for (int j = 0; j < 10; j++)
            a[i].name[j]= (rand()%26) + 97;
            a[i].name[10]='\0';
    }
     printf("Student Name    Student Id  Scholarship\n");
     printf("____________________________________________\n");
    for (int i = 0; i < 50; i++)
    {
        int scl=0;
        if (a[i].jee>=200 && a[i].jee<=300)
        {
            if (a[i].twel>=90 && a[i].twel<=100)
            {
                scl=100;
            }
            else if (a[i].twel>=80 && a[i].twel<90)
            {
                scl=75;
            }
            else if (a[i].twel>=70 && a[i].twel<80)
            {
               scl=50;
            }
            
        }
      else  if (a[i].jee>=100 && a[i].jee<200)
        {
            if (a[i].twel>=90 && a[i].twel<=100)
            {
                scl=75;
            }
            else if (a[i].twel>=80 && a[i].twel<90)
            {
                scl=50;
            }
            else if (a[i].twel>=70 && a[i].twel<80)
            {
               scl=25;
            }
            
        }
       
        
        printf("|%-10s   |  %-10.5d   |  %-10d|\n", a[i].name, a[i].id,  scl);
        
    }
    
    return 0;
}
