#include<iostream>
using namespace std;
void ChangeSort(int score[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(score[j]<score[i])
            {
                temp=score[j];
                score[j]=score[i];
                score[i]=temp;
            }
        }
    }
}
void SelectionSort(int score[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(score[j]<score[k])
                k=j;
        }
        if(k!=i)
        {
            temp=score[k];
            score[k]=score[j];
            score[i]=temp;
        }
    }
}
void BubbleSort(int score[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(score[j]<score[j-1])
            {
                temp=score[j];
                score[j]=score[j-1];
                score[j-1]=temp;
            }
        }
    }
}
void ShowScore(int score[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<score[i]<<" ";
    }
    cout<<endl;
}
void SetScore(int score[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>score[i];
    }
}
int main()
{
    int score[10];
   SetScore(score,10);
   ChangeSort(score,10);
    ShowScore(score,10);
    SelectionSort(score,10);
    ShowScore(score,10);
    BubbleSort(score,10);
    ShowScore(score,10);
    return 0;
}
