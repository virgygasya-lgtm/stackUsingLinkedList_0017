#include <iostream> 
using namespace std;

class Node
{
    ;public:
    int data;

Node *next;

Node()
{
    next = NULL;
}

};
class stack
{
    private:
    Node *top;
    stack()
{
    top = NULL;
}

int push(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Push value: " << value << endl;
return value;
bool isEmpty()
{
    return top == NULL;
}
void pop()
{
    if (isEmpty())
{
    cout << "Stack is empty." << endl;
}
Node *temp = top;
top = top->next;
cout << "Popped value: " << temp->data << endl;
delete temp;

void peek()
{
    Node *current = top;
while (current != NULL)
{
    cout << current->data << " " << endl;
    current = current->next;
}
int main()
{
    stack stack;

    int choice = 0;
    int value;
    while (choice != 5)
{
    cout << "1.push\n";
    cout << "2.pop\n";
    cout << "3.peek\n";
    cout << "4.Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the value to push: ";
        cin >> value;
        stack.push(value);
        break;

    case 2:
        if (!stack.isEmpty())
        {
            stack.pop();
        }
        else
        {
            cout << "Stack is empty. Cannot pop." << endl;
        }
        break;

    case 3:
        if (!stack.isEmpty())
        {
            stack.peek();
        }
        else
        {
            cout << "Stack is empty.No top value." << endl;
        }
        break;

    case 4:
        cout << "Exiting program." << endl;
        break;

    default:
        cout << "invalid choice. Try again." << endl;
        break;
    }

    cout << endl;
}

return 0;