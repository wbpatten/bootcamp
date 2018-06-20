#include <stdio.h>

int factorial(int num){
	int val = num;
	for (;num>0;num--){
	  val = val*num-1;
	printf("val = %d num= %d\n", val, num);
	}
	return val;
}

int main(){
	int fVal;
	int mcount;
	for(mcount = 0; mcount<=1;mcount++){
        	fVal = factorial(mcount);
		printf("factorial value of %d = %d\n", mcount, fVal);
	}
}
