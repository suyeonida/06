#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//팩토리얼 계산함수  
int factorial(int n){
	
	int i;
	int factorial=1;
	for(i=1;i<=n;i++){
		factorial= factorial*i;
	}
		return factorial;
}
//정수 받는 함수
int get_number(){
		
	int x;
	printf("input the number: ");
	scanf("%d", &x);
	return x;
	} 
//최종계산함수 (combination)
int combination(int n, int r){
	int a,b,c;
	a=factorial(n);
	b=factorial(n-r);
	c=factorial(r);
	
	return a/(b*c);
}
 int main(int argc, char *argv[]) {
	
	int n,r, output;
	n=get_number();
	r=get_number();
	
	output= combination(n,r);
	
	printf("The result is %d",output);
	
	return 0;
	
	
}


