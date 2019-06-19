#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int getMiddle(struct Node *head)
{
    struct Node *single_ptr = head;
    struct Node *double_ptr = head;

    if (head != NULL)
    {
        while (double_ptr != NULL && double_ptr->next!=NULL)
        {
            /* code */
            double_ptr = double_ptr->next->next;
            single_ptr = single_ptr->next;
        }
        
    }
    return single_ptr->data;
};