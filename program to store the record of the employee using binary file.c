
#include<stdio.h>
int main()
{
    FILE *fp;
    typedef struct employee
    {
        int emp_code;
        char name[30];
        int hra;
        int da;
        int ta;
    }EMPLOYEE;

    EMPLOYEE e[5];
    int i;
    fp = fopen("employee.txt","wb");
    if(fp == NULL)
    {
        printf("\n Error opening file");
        return 0;
    }

    printf("\n Enter the 5 details");
    for(i=0;i<5;i++)
    {
        printf("\n\n Enter the employee code: ");
        scanf("%d",&e[i].emp_code);
        printf("\n Enter the name of the employee: ");
        scanf("%s",&e[i].name);
        printf("\n Enter HRA, DA and TA: ");
        scanf("%d %d %d",&e[i].hra, &e[i].da, &e[i].ta);
        fwrite(&e[i], sizeof(e[i]),1,fp);
    }
    fclose(fp);
    return 0;
    
}
