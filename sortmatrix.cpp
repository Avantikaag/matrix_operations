#include<iostream>
using namespace std;
int sort(int a[10][10], int m, int n, int p, int q)
{
  int temp=0;
  while(p<m)
  {
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(a[p][j]<a[p][i])
        {
          temp=a[p][i];
          a[p][i]=a[p][j];
          a[p][j]=temp;
        }
      }
    }
    ++p;
  }
  while(q<n)
  {
    for(int i=0;i<m;i++)
    {
      for(int j=i+1;j<m;j++)
      {
        if(a[j][q]>a[i][q])
        {
          temp=a[i][q];
          a[i][q]=a[j][q];
          a[j][q]=temp;
        }
      }
    }
    ++q;
  }
  cout<<"Resultant matrix is: ";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

int main()
{
  int a[10][10]={0};
  int m,n;
  cout<<"Enter the order of matrix in form of m*n: ";
  cin>>m>>n;
  int p=0,q=0;
  cout<<"Enter the matrix: ";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<endl;
  sort(a,m,n,p,q);
  return 0;
}
