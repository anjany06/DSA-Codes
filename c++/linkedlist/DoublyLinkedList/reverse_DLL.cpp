#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev; // Pointer to the previous node
public:
  Node(int val, Node *next1, Node *prev1)
  {
    data = val;
    next = next1;
    prev = prev1;
  }

public:
  Node(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
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
};
Node *convertArrToDLL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *prev = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i], NULL, prev);
    prev->next = temp;
    prev = temp;
  }
  return head;
}
void print_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// First Aproach naive brute force Tc-> o(2n) Sc-> o(n)
Node *reverse_1(Node *head)
{
  stack<int> st;
  Node *temp = head;
  while (temp != NULL)
  {
    st.push(temp->data);
    temp = temp->next;
  }
  temp = head;
  while (temp != NULL)
  {
    temp->data = st.top();
    st.pop();
    temp = temp->next;
  }
  return head;
}
// Second Approach O(n) time and O(1) space
Node *reverse2(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL)
  {
    prev = curr->prev;
    curr->prev = curr->next;
    curr->next = prev;
    // so next becomes prev and prev becomes next for moving forward we do curr->prev instead of curr->next

    curr = curr->prev;
  }
  // prev->next becomes prev->prev
  return prev->prev;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4};
  Node *head = convertArrToDLL(arr);
  head = reverse2(head);
  print_list(head);
  return 0;
}