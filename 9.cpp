 #include<iostream>
using namespace std;
int main()
{
   int a[3];
   int tmp;
  for(int i=0;i<3;i++)
    cin>>a[i];
  for(int i=0;i<3;i++)
    for(int j=1;j<3-i;j++)
  {
      if(a[j]<a[j-1])
      {
          tmp=a[j];
          a[j]=a[j-1];
          a[j-1]=tmp;
      }
  }
  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
  return 0;
}
