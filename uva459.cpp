#include<bits/stdc++.h>
#define mx 1000
using namespace std;

int parent[mx];
void makeSet(int n){
	parent[n]=n;
	return;
}
int FindParent(int u){
	if(parent[u]==u)
	return u;
	return FindParent(parent[u]);
}
void Union(int u,int v){
	int rep_u=FindParent(u);
	int rep_v=FindParent(v);
	if(rep_u!=rep_v){
		parent[rep_u]=rep_v;
	}
	return;
}
 int FindOverlap(int n){
    set<int>s;
 	for(int i=0;i<n;i++){
 		s.insert(FindParent(i));
	 }
	 return s.size();
 }
int main()
{
  //  freopen("input.txt","r",stdin);
  //  freopen("out.txt","w",stdout);
    string st;
	int t,flag=0;
	cin>>t;
	getchar();
	getchar();
	while(t--){
		char ch;
		ch=getchar();
		getchar();
		int n=ch-'A'+1;
		for(int i=0;i<=n;i++)
		makeSet(i);
		while(getline(cin,st) && st.size()){
			int u=st[0]-'A';
			int v=st[1]-'A';
			Union(u,v);
		}
		int result=FindOverlap(n);
		if(flag == 0)
            flag++;
        else
            printf("\n");
		printf("%d\n",result);
			memset(parent,0,sizeof(parent));

	}
	return 0;
}
