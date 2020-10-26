#include<iostream>
using namespace std;

int spiral(int a[10][10], int i, int j, int p, int l, int key,int m,int n, int count)
{
  if(count==m*n)
  {
    return 0;
  }
  else if(p%4==1)
  {
    //i=0;j=n-1,l=0//i=1,j=n-2,l=1
    for(int x=i;x<=j;x++)
    {
      cout<<a[l][x]<<" ";
      ++count;
    }
    l=j;
    ++p;
    spiral(a, i+1, m-key, p,l,key,m,n,count);
  }
  else if(p%4==2)
  {
      //i=1,j=m-1,l=n-1//i=2,j=m-2,l=n-2
    for(int x=i;x<=j;x++)
    {
      cout<<a[x][l]<<" ";
      ++count;
    }
    l=j;
    ++key;
    ++p;
    spiral(a, i-1, n-key, p,l,key,m,n,count);
  }
  else if(p%4==3)
  {
        //i=0,j=n-2,l=m-1//i=1;i=n-3,l=m-2
    for(int x=j;x>=i;x--)
    {
      cout<<a[l][x]<<" ";
      ++count;
    }
    l=i;
    ++p;
    spiral(a, i+1, m-key, p,l,key,m,n,count);
  }
  else
  {
        //i=1,j=m-2,l=0//i=2.j=m-3,l=1
    for(int x=j;x>=i;x--)
    {
      cout<<a[x][l]<<" ";
      ++count;
    }
    l=i;
    ++p;
    spiral(a, i, n-key, p,l,key,m,n,count);
  }
}

int main()
{
  int a[10][10]={0};
  int m,n;
  cout<<"Enter the order of matrix in form of m*n: ";
  cin>>m>>n;
  int p=1,count=0;
  int l=0,key=1;
  cout<<"Enter the matrix: ";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  spiral(a,0,n-1,p,l,key,m,n,count);
  // int spiral(int a[10][10], int i, int j, int p, int l, int key,int m,int n, int count)
}
