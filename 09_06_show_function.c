#include<stdio.h>
#include<string.h>

struct employee{
    int code;void show(struct employee emp){
    float salary;
    char name[20];
};


printf("The code of employee is: %d\n", emp.code);
printf("The salary of employee is: %f\n", emp.salary);
printf("The Name of employee is: %s\n", emp);
emp.code =34;
}
int main()
{
    struct employee e1;
struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101;
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Abhinav");

    show(e1);
   
printf("The code of employee is: %d\n", e1.code);

return 0;
}