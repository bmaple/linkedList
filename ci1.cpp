#include <iostream>

using namespace std;

struct node
{
    int value;
    node * next;
    node()
    {
    value = 0;
    next = NULL;
    }
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
    void insert(int val)
    {
        node * valNode = new node(val);
        this->next = valNode;
    }

};
struct ilist
{
    node * head;
    node * tail; 
    ilist(int init[], int initSize)
    {   
        head = new node(init[0]);
        node * curNode; 
        curNode = head;
        for(int i = 1; i < initSize; i++)
        {
            node * temp = new node(init[i]);
            curNode->next = temp;
            curNode = curNode->next;
        }
    }
    void print()
    {
        node* curNode = this->head;
        while(curNode != NULL)
        {
            cout << curNode->value << " ";
            curNode = curNode->next;
        }
        cout << '\n'; 
    }
    //append(node)
    //{
    //}
    friend void insert(node & obj);
};
int main()
{
    int nums[5] = {1,2,3,4,5};
    ilist lnums(nums, 5);
    //cout << lnums.head->value << endl;
    //cout << lnums.head->next->value << endl;
    lnums.print();

    return 0;
}
