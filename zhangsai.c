#include<stdio.h>
#define N 10
int  fun(int *p,int m);  //�����Ӻ��� 
int main(){
int a[N],i,m;   
	for(i=0;i<N;i++){ 
		a[i]=i+1;                 //�����鸳ֵ 
	} 
	printf("������һ������\n");
	scanf("%d",&m); 
	fun(a,m);        //�����Ӻ��� 
	for(i=0;i<N;i++){
		if(a[i]==0) printf("%d�ű���̭\n",i+1);         //�������̭�ı�� 
		else  printf("%d��ʤ��\n",i+1);
	}
	return 0;
	 
}
int fun(int *p,int m){
	int count=0,i=0,leftcount=N;
	while(leftcount>1){    //�����鳤��=1ʱ����ѭ�� 
		if(*(p+i)!=0)      //�жϵ�ǰ�����Ƿ�Ϊ0 
		{ 
		    count++;      //�кż�1 
		    if(m==count){    //�жϱ���Ƿ���ڹ涨�ĺ� 
			    *(p+i)=0;    
			    count=0;
				leftcount--;
			}
	    }i++;
		if(i==N) i=0;  //�ж��±��Ƿ񳬹����鳤�� 
	}
}

