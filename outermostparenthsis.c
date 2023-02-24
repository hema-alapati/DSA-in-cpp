// question:
// https://practice.geeksforgeeks.org/problems/outermost-parentheses/1
#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    scanf("%s",&s);

    int l=1,r=0;
    int i=1;
    while(i<strlen(s)){
        if (s[i]=='('){
           l++;
        }
        else{
            r++;
        }
        
        if (r==l){
            i=i+2;l=l+1;r=r-1; 
            // for removing opening and closing bracket of valid bracket string
        }
        printf("%c",s[i]);
        i++;
    }
}