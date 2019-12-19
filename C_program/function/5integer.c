#include<stdio.h>
#include<math.h>
void calculate(int,int,int,int,int,int*,float*,double*);
int main()
{
    int a,b,c,d,e,sum;
    float avg;
    double sd;
    printf("Enter 5 integers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    calculate(a,b,c,d,e,&sum,&avg,&sd);
    printf("sum=%d,average=%f,sd=%lf",sum,avg,sd);
    return 0;
}
void calculate(int p,int q,int r,int s,int t,int *sum,float *avg,double *sd)
{
    *sum=p+q+r+s+t;
    *avg=*sum/5.0;
    *sd=sqrt((pow(p-*avg),2)+(pow(q-*avg),2)+(pow(r-*avg),2)+(pow(s-*avg),2)+(pow(t-*avg),2));

}
