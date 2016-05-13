#include <stdio.h>


int fact(int n){
	int s=1,i;
	for(i=1;i<=n;i++){
		s*=i;
	}
	return s;
}

int p(int n,int r){
	if(n<r)
		return 0;
	return fact(n)/fact(n-r);
}

int c(int n,int r){
	return fact(n)/(fact(n-r)*fact(r));
}

int main(){
	/*double r,area;
	printf("¹ÝÁö¸§À» ÀÔ·ÂÇÏ¼¼¿ä :");
	scanf("%lf",&r);
	area=3.141592*r*r;
	printf("¿øÀÇ ³ÐÀÌ = %lf",area); 
	*/
	int a[5]; // a[0] : ÀÜµ·, a[1]=500, a[2]=100 a[3]=50, a[4]=10¿øÀÇ ÀÜµ· °³¼ö. 
	printf("ÀÜµ·À»ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%d",&a[0]);
	a[1]=a[0]/500;
	a[0]=a[0]%500;
	a[2]=a[0]/100;
	a[0]=a[0]%100;
	a[3]=a[0]/50;
	a[0]=a[0]%50;
	a[4]=a[0]/10;
	
	printf("500¿ø : %d°³, 100¿ø : %d°³, 50¿ø : %d°³ , 10¿ø : %d°³ ",a[1],a[2],a[3],a[4]);
	
	getchar();
	return 0;
}
