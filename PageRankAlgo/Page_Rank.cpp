#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
float Adj[10][10],Adj2[10][10],d=0,temp,c[10],x[10];
int i,j,n;
cout<<"enter the order of the matrix: ";
cin>>n;
float sum[n];
//entering elements of adjaceny matrix
for(i=0;i<n;i++){
cout<<"ROW"<<i+1<<" ";
for(j=0;j<n;j++){
cin>>Adj[i][j];
}
}
//displaying the adjacent matrix
cout<<"the adjaceny matrix you've entered: "<<endl;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
sum[i]+=Adj[i][j];

cout<<Adj[i][j]<<"\t";
}
cout<<endl;
}

for(i=0;i<n;i++){
for(j=0;j<n;j++){
Adj[i][j]=fabs((Adj[i][j])/sum[i]);
}
cout<<endl;
}
cout<<"the prob adjaceny matrix:"<<endl;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<setprecision(3)<<Adj[i][j]<<"\t \t";
}
cout<<endl;
}
//finding transpose of adj matrix
for(j=0;j<n;j++){
for(i=0;i<n;i++){
Adj2[i][j]=Adj[j][i];
}
cout<<endl;
}
//displaying the transpose matrix
cout<<"transpose of adjaceny matrix:"<<endl;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<Adj2[i][j]<<"\t \t";
}

cout<<endl;
}
cout<<endl<<"enter vector: ";
for(i=1;i<n;i++){
cin>>x[i];
}

do
{
for(i=0;i<n;i++)
{
c[i]=0;
for(j=0;j<n;j++)
c[i]+=Adj2[i][j]*x[j];
}
for(i=0;i<n;i++)
x[i]=c[i];

temp=d;
d=0;

for(i=0;i<n;i++)
{
if(fabs(x[i])>fabs(d))
d=x[i];
}
for(i=0;i<n;i++)
x[i]/=d;

}while(fabs(d-temp)>0.00001);
float sum2=0,x2[10];

for(i=0;i<n;i++)
sum2+=x[i];
cout<<"Eigen value is : "<<d<<endl;
cout<<endl;
cout<<"Eigenvector is: ";
for(i=0;i<n;i++)
if(sum2>1)
cout<<endl<<x[i]/sum2;
else
cout<<endl<<x[i];
}
