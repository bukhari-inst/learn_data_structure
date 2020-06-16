#include<stdio.h>
#include<conio.h>
#include<iostream>
#include <fstream>
#include <ctime>

using namespace std;
struct TreeNode
{
    int *data;
    TreeNode **child_ptr;
    bool leaf;
    int n,p;

}*root = NULL, *np = NULL, *x = NULL;
TreeNode * init()
{
    int i;
    np = new TreeNode;
    np->data = new int[5];
    np->child_ptr = new TreeNode *[6];
    np->leaf = true;
    np->n = 0;
    for (i = 0; i < 6; i++)
    {
        np->child_ptr[i] = NULL;
    }
    return np;
}
void searchOrTraverse(TreeNode *p)
{
    cout<<endl;
    int i;
    for (i = 0; i < p->n; i++)
    {
        if (p->leaf == false)
        {
            searchOrTraverse(p->child_ptr[i]);
        }
        cout << " " << p->data[i];
    }
    if (p->leaf == false)
    {
        searchOrTraverse(p->child_ptr[i]);
    }
    cout<<endl;
}
void sort(int *p, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
int childSplitOp(TreeNode *x, int i)
{
    int j, mid;
    TreeNode *np1, *np3, *y;
    np3 = init();
    np3->leaf = true;
    if (i == -1)
    {
        mid = x->data[2];
        x->data[2] = 0;
        x->n--;
        np1 = init();
        np1->leaf = false;
        x->leaf = true;
        for (j = 3; j < 5; j++)
        {
            np3->data[j - 3] = x->data[j];
            np3->child_ptr[j - 3] = x->child_ptr[j];
            np3->n++;
            x->data[j] = 0;
            x->n--;
        }
        for (j = 0; j < 6; j++)
        {
            x->child_ptr[j] = NULL;
        }
        np1->data[0] = mid;
        np1->child_ptr[np1->n] = x;
        np1->child_ptr[np1->n + 1] = np3;
        np1->n++;
        root = np1;
    }
    else
    {
        y = x->child_ptr[i];
        mid = y->data[2];
        y->data[2] = 0;
        y->n--;
        for (j = 3; j < 5; j++)
        {
            np3->data[j - 3] = y->data[j];
            np3->n++;
            y->data[j] = 0;
            y->n--;
        }
        x->child_ptr[i + 1] = y;
        x->child_ptr[i + 1] = np3;
    }
    return mid;
}
void insertionOp(int a)
{
    int i, temp;
    x = root;
    if (x == NULL)
    {
        root = init();
        x = root;
    }
    else
    {
        if (x->leaf == true && x->n == 5)
        {
            temp = childSplitOp(x, -1);
            x = root;
            for (i = 0; i < (x->n); i++)
            {
                if ((a > x->data[i]) && (a < x->data[i + 1]))
                {
                    i++;
                    break;
                }
                else if (a < x->data[0])
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
            x = x->child_ptr[i];
        }
        else
        {
            while (x->leaf == false)
            {
                for (i = 0; i < (x->n); i++)
                {
                    if ((a > x->data[i]) && (a < x->data[i + 1]))
                    {
                        i++;
                        break;
                    }
                    else if (a < x->data[0])
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                if ((x->child_ptr[i])->n == 5)
                {
                    temp = childSplitOp(x, i);
                    x->data[x->n] = temp;
                    x->n++;
                    continue;
                }
                else
                {
                    x = x->child_ptr[i];
                }
            }
        }
    }
    x->data[x->n] = a;
    sort(x->data, x->n);
    x->n++;
}
int searchPos(int key, int *key_arr, int n)
{
    int pos = 0;
    while (pos < n && key > key_arr[pos])
        pos++;
    return pos;
}//End of searchPos()/
int searchPos(int x, int *key_arr, int n);
void search(int key)
{
    int pos, i, n;
    TreeNode *ptr = root;
    printf("Search path:\n");
    while (ptr)
    {
        n = ptr->n;
        for (i = 0; i < ptr->n; i++)
            printf(" %d", ptr->data[i]);
        printf("\n");
        pos = searchPos(key, ptr->data, n);
        if (pos < n && key == ptr->data[pos])
        {
            printf("Key %d found in position %d of last dispalyed node\n", key, i);
            return;
        }
    }
    printf("Key %d is not available\n", key);
}//End of search()/

void waktu()
{
    clock_t tStart = clock();
    /* Do your stuff here */
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}

int main()
{
    int d =0, cari;
    ifstream ifs,ifs1;

    ifs.open ("big-data-100.txt", ifstream::in);

    //int c = ifs.get();

    while (ifs.good())
    {
        ifs >> d;
        //cout << d<<endl;
        insertionOp(d);
    }


    ifs.close();


    ifs1.open ("Data-Cari.txt", ifstream::in);

    //int c = ifs.get();

    while (ifs1.good())
    {
        ifs1 >> cari;
        //cout << cari<<endl;
        search(cari);
    }


    ifs.close();

    clock_t tStart = clock();

    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
    searchOrTraverse(root);
    getch();
}
