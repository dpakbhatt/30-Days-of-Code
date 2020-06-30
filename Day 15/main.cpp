#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
        Node *temp = new Node(data);
        temp->data = data;
        temp->next = nullptr;
        if(head == nullptr){
            head = temp;
            return head;
        }
        Node *temp1 = head;
        while(temp1->next != nullptr){
            temp1 = temp1->next;
        }
        temp1->next = temp;

        return head;

      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}
