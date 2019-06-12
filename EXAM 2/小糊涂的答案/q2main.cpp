#include "DoubleEndStack.h"


#include <iostream>
using namespace std;

int main(){

  // setup a stack object and a val to store pops
  DoubleEndStack s;
  int tmp;

  // these operations can't help
  cout << s.popLeft() << " " << s.popRight() << endl;

  cout<< "now pushRight a few times"<<endl;
  s.pushRight(1);
  s.pushRight(2);
  s.pushRight(3);
  s.pushRight(4);

  cout<< "now pushLeft a few times - last one won't work"<<endl;
  s.pushLeft(5);
  s.pushLeft(6);
  s.pushLeft(7);
  s.pushLeft(8);

  cout<<"now pop right a few times"<<endl;
  cout << s.popRight() << endl;
  cout << s.popRight() << endl;
  cout << s.popRight() << endl;
  cout << s.popRight() << endl;
  cout << s.popRight() << endl;

  cout<<"now pop left a few times - last couple will be -1's."<<endl;
  cout << s.popLeft() << endl;
  cout << s.popLeft() << endl;
  cout << s.popLeft() << endl;
  cout << s.popLeft() << endl;
  cout << s.popLeft() << endl;
  cout << s.popLeft() << endl;
  
}
