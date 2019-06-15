#include <iostream>
#include <vector>
using namespace std;


/* Task 2: Implement the following function recursively to produce the i-th element of the described sequence.
 */
int Sequence(int i)
{
	if(i==1)
	{
		return 12;
	}else if(i>1)
	{
		return Sequence(i-1)+6;
	}
}

// You are not supposed to change the main function
int main() {
    cout << Sequence(1)<< endl; //
    cout << Sequence(2)<< endl; //
    cout << Sequence(150)<< endl; //

}

