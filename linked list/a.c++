// ll_traverse

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }

    Node *nodeToNext = new Node(data);
    nodeToNext->next = temp->next;
    temp->next = nodeToNext;
}

void DeleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head->next = head;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10); // user input?
    Node *head = node1;
    Node *tail = node1;

    // print(head);
    // InsertAtHead(head,5);
    // InsertAtHead(head,8);
    // InsertAtHead(head,6);
    // // print(head);
    // InsertAtTail(tail,21);
    // InsertAtTail(tail,32);
    // InsertAtTail(tail,25);
    // // print(head);
    // InsertAtPos(head,tail,2,99);
    // InsertAtPos(head,tail,4,97);
    // InsertAtPos(head,tail,6,90);
    // // print(head);

    // // DeleteNode(head,4);
    // DeleteNode(head,10);
    // // print(head);

    // int n;
    // cin >> n;
        InsertAtHead(head, 1);
        InsertAtHead(head, 2);
        InsertAtHead(head, 3);
    
    // for (int i = 0; i < n; i++){
    //     int a;
    //     cin >> a;
    //     // int index;
    //     // cin>>index;
    //     InsertAtHead(head, a);
    //     // InsertAtTail(tail,a);
    //     // InsertAtPos(head,tail,index,a);
    //     cout << "Changed data: ";
    //     print(head);
    // }
    print(head);
    DeleteNode( head,4);
    print(head);

    return 0;
}