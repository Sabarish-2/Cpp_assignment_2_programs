#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char names[10][10], temp[10];
  int i, j;
  cout<<"Enter any 10 names  : ";
  for(i=0; i<10; i++)
  {
    cin>>names[i];
  }
  for(i=0; i<10; i++)
  {
    cout<<names[i]<<"\n";
  }
  for(i=9; i>=0; i--)         
  {
    for(j=0; j<=i; j++)
    {
      if(strcmp(names[j], names[j+1])>0)
      {
        strcpy(temp, names[j]);
        strcpy(names[j], names[j+1]);
        strcpy(names[j+1], temp);
      }
    }
  }
  cout<<"Names rearranged in alphabetical order : \n";
  for(i=0; i<10; i++)
  {
    cout<<names[i]<<"\n";
  }
  return 0;
}