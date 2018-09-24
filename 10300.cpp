///Name: MD.Shamim Jahan Sohag
///University: Dhaka International University
///Fb: fb.com/sohagmahin
///Email: sohagmahin@yahoo.com

#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
long long int solution(vector<vector<long long> >vec,int n){
    long long int sum=0;
    for(int i=0;i<n;i++){
            if(vec[i][1]!=0)
                sum+=vec[i][0]*vec[i][2];
            else
                sum+=0;
    }
    return sum;
}
int main()
{
    vector<vector<long long> >vec(20);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vec[i].resize(3);
        for(int j=0;j<3;j++){
            cin>>vec[i][j];
        }
    }
    long long int sum= solution(vec,n);
    cout<<sum<<endl;
    }
    return 0;
}
