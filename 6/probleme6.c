#include<stdio.h>
int main(){
int t[100],i,a,n,k;
printf("donner la taille ");
scanf("%d",&n);
for ( i = 0; i <n; i++)
{
    printf("remplir le tableau \t");
    scanf("%d",t[i]);
}
printf("****GIVE ME THE KEY****");
scanf("%d",&k);
for ( i = 0; i <n; i++)
{
    if (k==t[i])
    {a=i;}
    else{k=-1;} 
}
printf("%d",k);
return(0);
}