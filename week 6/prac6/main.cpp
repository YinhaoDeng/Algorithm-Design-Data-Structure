#include "Individual.h"
#include "BitFlipProb.h"
#include "BitFlip.h"
#include "Rearrange.h"
#include <iostream>
#include <string>
using namespace std;

Individual* execute(Individual* indPtr,Mutator* mPtr,int  k){
mPtr->mutate(indPtr,k);
return indPtr;
}


int main(){
	string binarystr1;
	cin>>binarystr1;
	int k1;
	cin>>k1;
	string binarystr2;
	cin>>binarystr2;
	int k2;
	cin>>k2;


	BitFlip A;
	Rearrange B;
	Individual X(binarystr1);
	Individual Y(binarystr2);
	Individual *X_1=execute(&X,&A,k1);
	Individual *Y_1=execute(&Y,&B,k2);
	cout<<X_1->getString()<<" "<<Y_1->getString()<<" "<<Y_1->getMaxOnes();

}