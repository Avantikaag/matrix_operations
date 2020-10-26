#include<iostream>
using namespace std;
int multiply(int m1, int n1, int m2, int n2, int a[10][10], int b[10][10], int i, int j)
{
  int sum,p;
  if(i==m1)
  {
    return 0;
  }
  while(j<n2)
  {
    sum=0,p=0;
    for(int x=0;x<n1;x++)
    {
      sum+=(a[i][x])*(b[x][j]);
    }
    ++j;
    cout<<sum<<" ";
  }
  cout<<endl;
  multiply(m1,n1,m2,n2,a,b,(i+1),0);
}

int main()
{
  int a[10][10]={0},b[10][10]={0};
  int m1,n1,m2,n2;
  cout<<"Enter the order of first matrix: ";
  cin>>m1>>n1;
  cout<<"Enter the order of second matrix: ";
  cin>>m2>>n2;
  if(n1!=m2)
  {
    cout<<"Matrices can't be multiplied";
    return 0;
  }
  cout<<"Enter first matrix: ";
  for(int i=0;i<m1;i++)
  {
    for(int j=0;j<n1;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"Enter second matrix: ";
  for(int i=0;i<m2;i++)
  {
    for(int j=0;j<n2;j++)
    {
      cin>>b[i][j];
    }
  }

  multiply(m1,n1,m2,n2,a,b,0,0);
}
