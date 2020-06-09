#include <stdio.h>

void time_2(double*,int*,int*);
void round(double*,int*,int*);

int main(void)
{
	double num=1.0;
	int num_pow=0,count=0;
	while(1){
		time_2(&num,&num_pow,&count);
		round(&num,&num_pow,&count);
		printf("2 ^ %d = %f ~ 10^%d\n",count,num,num_pow);
	}
	return 0;
}

void time_2(double* num,int* num_pow,int* count){
	*num*=2;
	return 0;
}

void round(double* num,int* num_pow,int* count){
	if(*num>=10){
		*num/=10;
		*num_pow+=1;
	}
	*count+=1;
	return 0;
}