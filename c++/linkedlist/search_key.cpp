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
  int search_key(int val)
  {
    Node *temp = head;
    int idx = 0;

    while (temp != NULL)
    {
      if (temp->data == val)
      {
        return idx;
      }
      temp = temp->next;
      idx++;
    }
    return -1;
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
  int idx = LL.search_key(15);
  cout << idx;
  return 0;
}
