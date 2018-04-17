///Name: MD.Shamim Jahan Sohag
///University: Dhaka International University
///Fb: fb.com/sohagmahin
///Email: sohagmahin@yahoo.com
#include<stdio.h>
int main(){
    int b1[3],b2[3],b3[3];
    int BCG,BGC,CBG,CGB,GBC,GCB,min,temp;
    char f,s,t;
    while(scanf("%d %d %d %d %d %d %d %d %d",&b1[0],&b1[1],&b1[2],&b2[0],&b2[1],&b2[2],&b3[0],&b3[1],&b3[2])!=EOF)
    {
        BCG=b1[1]+b1[2]+ b2[0]+b2[1]+ b3[0]+b3[2];
        BGC=b1[1]+b1[2]+ b2[0]+b2[2]+ b3[0]+b3[1];
        CBG=b1[0]+b1[1]+ b2[1]+b2[2]+ b3[0]+b3[2];
        CGB=b1[0]+b1[1]+ b2[0]+b2[2]+ b3[1]+b3[2];
        GBC=b1[0]+b1[2]+ b2[1]+b2[2]+ b3[0]+b3[1];
        GCB=b1[0]+b1[2]+ b2[0]+b2[1]+ b3[1]+b3[2];
        min=BCG;
        if(BCG<=BGC && BCG<=CBG && BCG<=CGB && BCG<=GBC && BCG<=GCB){
            min=BCG;
            f='B';
            s='C';
            t='G';
        }
        else if(BGC<=BCG && BGC<=CBG && BGC<=CGB && BGC<=GBC && BGC<=GCB){
            min=BGC;
            f='B';
            s='G';
            t='C';
        }
        else if(CBG<=BGC && CBG<=BGC && CBG<=CGB && CBG<=GBC && CBG<=GCB){
            min=CBG;
            f='C';
            s='B';
            t='G';
        }
        else if(CGB<=BGC && CGB<=BGC && CGB<=CBG && CGB<=GBC && CGB<=GCB){
            min=CGB;
            f='C';
            s='G';
            t='B';
        }
        else if(GBC<=BGC && GBC<=BGC && GBC<=CBG && GBC<=CGB && GBC<=GCB){
            min=GBC;
            f='G';
            s='B';
            t='C';
        }
        else {
            min=GCB;
            f='G';
            s='C';
            t='B';
        }
        printf("%c%c%c %d\n",f,s,t,min);

    }
    return 0;
}
