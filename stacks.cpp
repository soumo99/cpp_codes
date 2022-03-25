#include<iostream>
#include<stack>
using namespace std;

class Stack
{
  public :
      int size;
      int *arr;
      int top;

  Stack(int size)
  {
    this -> size = size;
    arr = new int(size);
    top = -1;
  }

  void push(int element)
  {
    if(size-top>1) // checking whether the stack is empty or not
    {
      top++; // since not empty so data can be inserted
      arr[top] = element;
    }
    else
    {
      cout<<"Stack overflow"<<endl;
    }
  }

  void pop()
  {
    if(top>=0)//indicates that some element is present inside the stack
    {
      top--;//so removes the topmost element
    }
    else
    {
      cout<<"Stack underflow"<<endl;
    }

  }

  int peek()
  {
    if(top>=0) // indicates some element is present inside the stack
    {
      return arr[top]; // returns the topmost element
    }

    else
    {
      cout<<"Stack is Empty"<<endl;
      return -1;
    }
}

  bool isEmpty()
  {
    if(top == -1) // Stack is empty so returns -1
    {
      return true;
    }

    else
    {
      return false;
    }
  }
};


int main()
{
  Stack st(6);

  st.push(22);
  st.push(44);
  st.push(15);
  st.push(20);

  // st.push(22);
  // st.push(44);
  // st.push(20);

  cout << st.peek() << endl;

  st.pop();
  cout<< st.peek() << endl;

  st.pop();
  cout<< st.peek() << endl;

  st.pop();
  cout<< st.peek() << endl;

  st.pop();
  cout<< st.peek() << endl;

  if(st.isEmpty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack is not empty" << endl;
  }


  return 0;
}
