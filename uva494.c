#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    int i,c,flag;
    char ch[1000];
    while(gets(ch)){
    c=0;
    flag=1;
    for(i=0;ch[i]!='\0';i++){
            if((ch[i]>='A' && ch[i]<='Z')||(ch[i]>='a' && ch[i]<='z')){
                if(flag==1){
                c++;
                flag=0;
                }
            }
            else
                flag=1;

    }
    printf("%d\n",c);
    }
    return 0;
}
