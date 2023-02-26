#include<stdio.h>
int Binaryadd(int r1,int r2,int carry){
    if (r1==0 && r2==0 ){
        if (carry==0){
            printf("0");
            carry=0;
        }
        else{
            printf("1");
            carry=0;
        }
    }
    if ((r1==1 && r2==0) || (r1==0 && r2==1)){
        if (carry==0){
            printf("1");
            carry=0;
        }
        else{
            printf("0");
            carry=1;
        }
    }
   
    if (r1==1 && r2==1){
        if (carry==0){
            printf("0");
        }
        else{
            printf("1");
        }
        carry=1;

    }
    return carry;
    
}

int main() {
    int a,b,carry=0;
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);
    int flag=1,flag1=0,flag2=0;
    int r1,r2;
    while(flag){
        if (a>0){
            r1 = a%10;
            a = (int)a/10;
        }
        else{
            flag1 = 1;
            r1 = 0;
        }
        if (b>0){
            r2 = b%10;
            b = (int)b/10;
        }
        else{
            flag2 = 1;
            r2 = 0; 
        }
        if (flag1 && flag2){
            break;
        }

        carry = Binaryadd(r1,r2,carry);
        
    }
    printf("%d",carry);
    
}