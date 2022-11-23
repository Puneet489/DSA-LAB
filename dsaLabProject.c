#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    char firstname[20];
    char lastname[20];
    long number;
    struct node *next;
};

struct node *start = NULL;

struct node *getnode()
{
    return ((struct node *)malloc(sizeof(struct node)));
}

void display(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%s ", temp->firstname);
        printf("%s ", temp->lastname);
        printf("%d ", temp->number);
        temp = temp->next;
    }
}
void insert()
{
    struct node *temp, *nn;
    nn = getnode();
    temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("Enter First name:\n");
    scanf("%s", &nn->firstname);
    printf("Enter Last name:\n");
    scanf("%s", &nn->lastname);
    printf("Enter number:\n");
    scanf("%d", &nn->number);
    temp->next = nn;
    nn->next = NULL;
    display(start);
}

struct node *create()
{
    struct node *temp, *nn;
    if (start != NULL)
        insert();
    else
    {
        nn = getnode();
        start = nn;
        temp = start;
        printf("Enter First name:\n");
        scanf("%s", &nn->firstname);
        printf("Enter Last name:\n");
        scanf("%s", &nn->lastname);
        printf("Enter number:\n");
        scanf("%d", &nn->number);
        nn->next = NULL;
        display(start);
    }
}
void search()
{
    struct node *temp;
    char *f, *l;
    temp = start;
    printf("Enter name to be searched:\n");
    scanf("%s", &f);
    scanf("%s", &l);
    while ((temp->firstname == f) && (temp->lastname == l))
    {
        temp = temp->next;
    }
    printf("%s ", temp->firstname);
    printf("%s ", temp->lastname);
    printf("%d \n", temp->number);
}

void del()
{
    struct node *pretemp, *temp;
    char *f, *l;
    temp = start;
    pretemp = start->next;
    printf("Enter name :");
    scanf("%s", &f);
    scanf("%s", &l);
    while (temp != NULL)
    {
        if ((pretemp->firstname == f) && (pretemp->lastname == l))
        {
            printf("%s ", temp->firstname);
            printf("%s ", temp->lastname);
            printf("%s \n", temp->number);
            temp->next = pretemp->next;
            free(pretemp);
            break;
        }
        else
        {
            temp = temp->next;
            pretemp = pretemp->next;
        }
    }
}

int main()
{
    int op, ch;
    do
    {
        printf("-------Welcome--------\n ");
        printf("1.Create\n2.Insert\n3.Display\n4.Delete\n5.Search\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            display(start);
            break;
        case 4:
            del();
            break;
        case 5:
            search();
            break;
        }
        printf("Do you want to quit ? 1 for yes / 0 for no:");
        scanf("%d", &op);
    } while (op != 1);
    return 0;
}
