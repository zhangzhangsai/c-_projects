#include<stdio.h>
#define N 10
int  fun(int *p,int m);  //声明子函数 
int main(){
int a[N],i,m;   
	for(i=0;i<N;i++){ 
		a[i]=i+1;                 //给数组赋值 
	} 
	printf("请输入一个数：\n");
	scanf("%d",&m); 
	fun(a,m);        //调用子函数 
	for(i=0;i<N;i++){
		if(a[i]==0) printf("%d号被淘汰\n",i+1);         //输出被淘汰的编号 
		else  printf("%d号胜利\n",i+1);
	}
	return 0;
	 
}
int fun(int *p,int m){
	int count=0,i=0,leftcount=N;
	while(leftcount>1){    //当数组长度=1时结束循环 
		if(*(p+i)!=0)      //判断当前数组是否为0 
		{ 
		    count++;      //叫号加1 
		    if(m==count){    //判断编号是否等于规定的号 
			    *(p+i)=0;    
			    count=0;
				leftcount--;
			}
	    }i++;
		if(i==N) i=0;  //判断下标是否超过数组长度 
	}
}

