#include <stdio.h>
#include <math.h>

int main() {
    int a; 
	int b; 
	int c;
	int dt;
    printf("hay nhap a : ");
    scanf("%d",&a);
    
    printf("hay nhap b : ");
    scanf("%d",&b);
    printf("hay nhap c : ");
    scanf("%d",&c);
    float x1,x2;
    if (a==0){
        if(b!=0){
            x1=-(float)c/(float)b;
            printf("nghiem cua pt %dx^2 + %dx + %d = 0 la %f\n",a ,b ,c ,x1 );
        }else{
            if(c==0){
                printf("phuong trình vô so nghiem");
            }else{
                printf("phuong trình vô nghiem");
            }
        }
    }else if(a!=0){
        dt = b*b-4*a*c;
        if(dt==0){
            x1=-b/2*a;
            printf("phuong trình có 1 nghiem kep là %f\n",x1);
        }else if(dt >0){
            x1=(-b+sqrt(dt))/2*a;
            x2=(-b-sqrt(dt))/2*a;
            printf("phuong trình có 2 nghiem x1 = %f và x2 = %f\n", x1 ,x2);
        }else if (dt<0){
            printf("phuong trình vô nghiem");
        }
    }

    return 0;
}
