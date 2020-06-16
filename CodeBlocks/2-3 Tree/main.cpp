/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on 27 November 2019, 10.37
 */

#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#define M 3

using namespace std;

/*
 *
 */

typedef struct _node
{
    int n; /* n < M No. of keys in node will always less than order of B tree */
    int keys[M - 1]; /*array of keys*/
    struct _node *p[M]; /* (n+1 pointers will be in use) */
} node;
node *root = NULL;

typedef enum KeyStatus
{
    Duplicate,
    SearchFailure,
    Success,
    InsertIt,
    LessKeys,
} KeyStatus;

void insert(int key);
void display(node *root, int);
void DelNode(int x);
void search(int x);
KeyStatus ins(node *r, int x, int* y, node** u);
int searchPos(int x, int *key_arr, int n);
KeyStatus del(node *r, int x);
void eatline(void);
void inorder(node *ptr);
int totalKeys(node *ptr);
void printTotal(node *ptr);
int getMin(node *ptr);
int getMax(node *ptr);
void getMinMax(node *ptr);
int max(int first, int second, int third);
int maxLevel(node *ptr);
void printMaxLevel(node *ptr);

int main()
{
    int key;
    int choice;
    printf("Creation of 2-3 tree for M=%d\n", M);
    while (1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("6.Enumerate\n");
        printf("7.Total Keys\n");
        printf("8.Min and Max Keys\n");
        printf("9.Max Level\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        eatline();

        switch (choice)
        {
        case 1:
            printf("Enter the key : ");
            scanf("%d", &key);
            eatline();
            insert(key);
            break;
        case 2:
            printf("Enter the key : ");
            scanf("%d", &key);
            eatline();
            DelNode(key);
            break;
        case 3:
            printf("Enter the key : ");
            scanf("%d", &key);
            eatline();
            search(key);
            break;
        case 4:
            printf("Btree is :\n");
            display(root, 0);
            break;
        case 5:
            exit(1);
        case 6:
            printf("Btree in sorted order is:\n");
            inorder(root);
            putchar('\n');
            break;
        case 7:
            printf("The total number of keys in this tree is:\n");
            printTotal(root);
            break;
        case 8:
            getMinMax(root);
            break;
        case 9:
            printf("The maximum level in this tree is:\n");
            printMaxLevel(root);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }/*End of switch*/
    }/*End of while*/
    return 0;
}/*End of main()*/

void insert(int key)
{
    node *newnode;
    int upKey;
    KeyStatus value;
    value = ins(root, key, &upKey, &newnode);
    if (value == Duplicate)
        printf("Key already available\n");
    if (value == InsertIt)
    {
        node *uproot = root;
        root = (node*) malloc(sizeof (node));
        root->n = 1;
        root->keys[0] = upKey;
        root->p[0] = uproot;
        root->p[1] = newnode;
    }/*End of if */
}/*End of insert()*/

KeyStatus ins(node *ptr, int key, int *upKey, node **newnode)
{
    node *newPtr, *lastPtr;
    int pos, i, n, splitPos;
    int newKey, lastKey;
    KeyStatus value;
    if (ptr == NULL)
    {
        *newnode = NULL;
        *upKey = key;
        return InsertIt;
    }
    n = ptr->n;
    pos = searchPos(key, ptr->keys, n);
    if (pos < n && key == ptr->keys[pos])
        return Duplicate;
    value = ins(ptr->p[pos], key, &newKey, &newPtr);
    if (value != InsertIt)
        return value;
    /*If keys in node is less than M-1 where M is order of 2-3 tree*/
    if (n < M - 1)
    {
        pos = searchPos(newKey, ptr->keys, n);
        /*Shifting the key and pointer right for inserting the new key*/
        for (i = n; i > pos; i--)
        {
            ptr->keys[i] = ptr->keys[i - 1];
            ptr->p[i + 1] = ptr->p[i];
        }
        /*Key is inserted at exact location*/
        ptr->keys[pos] = newKey;
        ptr->p[pos + 1] = newPtr;
        ++ptr->n; /*incrementing the number of keys in node*/
        return Success;
    }/*End of if */
    /*If keys in nodes are maximum and position of node to be inserted is last*/
    if (pos == M - 1)
    {
        lastKey = newKey;
        lastPtr = newPtr;
    }
    else     /*If keys in node are maximum and position of node to be inserted is not last*/
    {
        lastKey = ptr->keys[M - 2];
        lastPtr = ptr->p[M - 1];
        for (i = M - 2; i > pos; i--)
        {
            ptr->keys[i] = ptr->keys[i - 1];
            ptr->p[i + 1] = ptr->p[i];
        }
        ptr->keys[pos] = newKey;
        ptr->p[pos + 1] = newPtr;
    }
    splitPos = (M - 1) / 2;
    (*upKey) = ptr->keys[splitPos];

    (*newnode) = (node*) malloc(sizeof (node)); /*Right node after split*/
    ptr->n = splitPos; /*No. of keys for left splitted node*/
    (*newnode)->n = M - 1 - splitPos; /*No. of keys for right splitted node*/
    for (i = 0; i < (*newnode)->n; i++)
    {
        (*newnode)->p[i] = ptr->p[i + splitPos + 1];
        if (i < (*newnode)->n - 1)
            (*newnode)->keys[i] = ptr->keys[i + splitPos + 1];
        else
            (*newnode)->keys[i] = lastKey;
    }
    (*newnode)->p[(*newnode)->n] = lastPtr;
    return InsertIt;
}/*End of ins()*/

void search(int key)
{
    int pos, i, n;
    node *ptr = root;
    printf("Search path:\n");
    while (ptr)
    {
        n = ptr->n;
        for (i = 0; i < ptr->n; i++)
            printf(" %d", ptr->keys[i]);
        printf("\n");
        pos = searchPos(key, ptr->keys, n);
        if (pos < n && key == ptr->keys[pos])
        {
            printf("Key %d found in position %d of last dispalyed node\n", key, i);
            return;
        }
        ptr = ptr->p[pos];
    }
    printf("Key %d is not available\n", key);
}/*End of search()*/

int searchPos(int key, int *key_arr, int n)
{
    int pos = 0;
    while (pos < n && key > key_arr[pos])
        pos++;
    return pos;
}/*End of searchPos()*/



