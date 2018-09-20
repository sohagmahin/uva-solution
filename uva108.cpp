#include<iostream>
#include<cstdio>
#include<climits>
#include<cstring>
using namespace std;
int temp[100];
int kadans(int arry[],int n);
int kadansTwoD(int arry[][100],int N);
int main()
{
    int N;
    int arry[100][100];
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&N)==1){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
        scanf("%d",&arry[i][j]);
    }
    int maxSum=kadansTwoD(arry,N);
    cout<<maxSum<<endl;
    }
    return 0;
}

int kadans(int arry[],int n){

    int maxCurrent,maxGlobal,kMaxUP,kMaxDown;
        maxCurrent=maxGlobal=arry[0];
    for(int i=1;i<n;i++){
            if(arry[i]>(maxCurrent+arry[i])){
                maxCurrent=arry[i];
                kMaxUP=i;
            }
            else{
                maxCurrent=maxCurrent+arry[i];
            }
            if(maxCurrent>maxGlobal){
                maxGlobal=maxCurrent;
                kMaxDown=i;
            }
    }
    kMaxUP=0,kMaxDown=0;
    return maxGlobal;
}
int kadansTwoD(int arry[][100],int N){
    int currentSum=INT_MIN,maxSum=INT_MIN,col,row;
    col=row=N;
    for(int L=0;L<col;L++){
            for(int R=L;R<col;R++){
            for(int i=0;i<row;i++){
                temp[i]+=arry[i][R];
        }
        currentSum=kadans(temp,row);
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
    }
      memset(temp,0,row*sizeof(temp[0]));
    }
    return maxSum;
}
