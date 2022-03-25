//Design a stack that returns the minimum element in constant time

#include<iostream>
#include<stack>
using namespace std;

class Min_stack
{
  stack<int> s; //main stack to store the elements
  stack<int> aux;// auxiliary stack to store the minimum elements

public:
  void push(int val)//Inserts a given elementon top of the stack
  {
    s.push(val);//push the given element into the main stack

    //if the auxiliary stack is empty then push the given element into it
    if(aux.empty())
    {
      aux.push(val);
    }
    else
    {
      //push the given element into the auxiliary stack
      //if it is less than or equals to the current minimum
      if(aux.top() >= val)
      {
        aux.push(val);
      }
    }
  }
  //Remove the top element from the stack and return it
  int pop()
  {
    //removes the top element from the main stack
    int top = s.top();

    //remove the top element from the aux stack only if it is min
    if(top == aux.top())
    {
      aux.pop();
    }
    return top;//Returns the removed element
  }
  //Returns the top element of the stacks
  int top()
  {
    return s.top();
  }
  //Return the total number of elements in the stacks
  int size()
  {
    s.size();
  }
  //Check whether the stack is empty or not , if empty then returns true or else false
  bool isEmpty()
  {
    s.empty();
  }
  //Returns the minimum element from the stack in constant time
  int get_min()
  {
    return aux.top();
  }
};

int main()
{
  Min_stack s;

  s.push(6);
  cout  << s.get_min() << endl;

  s.push(7);
  cout << s.get_min() << endl;

  s.push(9);
  cout << s.get_min() << endl;

  s.push(4);
  cout << s.get_min() << endl;

  s.push(2);
  cout << s.get_min() << endl;

  cout << s.pop() << endl;

  cout << s.get_min() << endl;

  s.push(12);
  cout << s.get_min() << endl;

  cout << s.pop() << endl;

  cout << s.get_min() << endl;

  cout << s.pop() << endl;

  cout << s.get_min() << endl;

  return 0;
}
