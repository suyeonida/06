#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//���丮�� ����Լ�  
int factorial(int n){
	
	int i;
	int factorial=1;
	for(i=1;i<=n;i++){
		factorial= factorial*i;
	}
		return factorial;
}
//���� �޴� �Լ�
int get_number(){
		
	int x;
	printf("input the number: ");
	scanf("%d", &x);
	return x;
	} 
//��������Լ� (combination)
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


