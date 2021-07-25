#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int giverand(int,int);
int bernoulli(int,int);

int main(){
	int n;
	scanf("%d",&n);
	int a;
	int sel;
	for(int i=0;i<n;++i){
		scanf("%d",&a);
		if(bernoulli(1,i+1))sel=a;
	}
	printf("%d is randomly choosen\n",sel);
}


int giverand(int lower,int upper){
	srand(time(0));
	return rand()%(upper-lower+1)+lower;
}


int bernoulli(int n,int d){
	if(n>d || d==0)return -1;
	if(n==0)return n;
	if(n==d) return 1;
	
	
	if(giverand(0,d)>n)return 0;
	else return 1;
}
