#include <stdio.h>
#include <stdlib.h>

struct LIST
{
    int data;
    struct LIST* next;
};

void push_head(struct LIST** head, int data);
int sum_LIST(struct LIST* head);
void max_min(struct LIST** head, int temp);

int main()
{
    struct LIST* head = NULL;
    struct LIST* tail = NULL;
    struct LIST* ptr;
    for(int i = 0; i < 10; i++)
    {
        push_head(&head, rand()%10);
    }
    printf()
    int sum = sum_LIST(head);
    printf("%d", sum);

    return 0;
}

void push_head(struct LIST** head, int data)
{
    struct LIST* ptr = (struct LIST*)malloc(sizeof(struct LIST));
    ptr->data = data;
    ptr->next = NULL;
    ptr->next = *head;
    *head = ptr;
}

int sum_LIST(struct LIST* head)
{
    int sum = 0;
    struct LIST* ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        sum += ptr->data;
        ptr = ptr->next;
    }
    return sum;
}

void max_min(struct LIST** head, int temp)
{
    struct LIST* ptr = NULL;
    struct LIST* max = NULL;
    struct LIST* min = NULL;
    
    ptr = *head;
    max = *head;
    min = *head;
    while(ptr != NULL) 
    {
        if(ptr->data > max->data)
        {
            max = ptr;
        }
        if(ptr->data < min->data)
        {
            min = ptr;
        }
        ptr = ptr->next;
    }
    ptr1 = head;
    ptr2 = head;
    while(ptr1->next != max)
    {
        ptr = ptr1->next;;
    }
    ptr1->next = min;
    ptr2->next = max;
    struct LIST* temp = max->next;
    max->next = temp;

    ptr2->next = min;
    ptr1->next = max;
}