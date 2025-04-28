#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }

  void push_back(int val)
  {
    Node *newNode = new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void print_list()
  {
    Node *temp = head;

    while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
  }

  int helper(Node *temp, int key)
  {
    if (temp == NULL)
    {
      return -1;
    }
    if (temp->data == key)
    {
      return 0;
    }

    int idx = helper(temp->next, key);
    if (idx == -1)
    {
      return -1;
    }
    return idx + 1;
  }

  int search_rec(int key)
  {
    return helper(head, key);
  }
};
int main()
{
  List LL;
  LL.push_back(1);
  LL.push_back(2);
  LL.push_back(3);
  LL.push_back(4);
  LL.push_back(5);
  LL.push_back(6);

  LL.print_list();
  cout << endl;
  cout << LL.search_rec(16);
  cout << endl;

  return 0;
}
