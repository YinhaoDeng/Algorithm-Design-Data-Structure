/* 
   class for double ended stack of ints
   allows pushes and pops from both ends.
*/

#ifndef DOUBLEENDSTACK_H
#define DOUBLEENDSTACK_H

#define CAP 8

class DoubleEndStack{
 public:
  // constructor
  DoubleEndStack();

  //push operators

  void pushLeft(int val); // puts a val in the left end of the stack
  void pushRight(int val); // puts val in the right end of the stack
  int popLeft(); // takes val off the left end of the stack
  int popRight(); // takes val off the right end of the stack

 private:
  int content[CAP];
  int left; // left index
  int right; // right index
  int count;
};

#endif // DOUBLEENDSTACK_H
