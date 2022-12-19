/*ax^2+bx+c şeklindeki deklemin köklerini bulma*/

#include"stdio.h"
#include"math.h"
int main(){
	int a,b,c;
	float x1,x2;
	float delta;
	printf("denklemin a'sini giriniz: ");
	scanf("%d",&a);
	printf("denklemin b'sini giriniz: ");
	scanf("%d",&b);
	printf("denklemin c'sini giriniz: ");
	scanf("%d",&c);
	
	delta=b*b-4*a*c;
	x1=(-b+(sqrt(delta)))/2*a;/*sqrt ifadesi math kütüphanesinde kök içine almak demek*/
	x2=(-b-(sqrt(delta)))/2*a;
	printf("denklemin 1.koku %.2f,2.koku %.2f dir.",x1,x2);	
	
	return 0;
}
