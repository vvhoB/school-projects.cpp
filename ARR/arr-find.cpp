#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 
void gen(int arr[])
{
  srand(time(NULL));
  for(int i=0; i<10;i++)
    arr[i]=rand()%20;
}

void print(int arr[])
{
  for(int i=0;i<10;i++)
  	cout << arr[i] << " ";
}

bool find(int arr[], int search)
{
  int i=0;
  while(arr[i]!=search)
  {
    if(i==10) return false;
    i++;
  }
  return true;
}

int main()
{
  int arr[10];
  cout << "Search value: ";
  int search;
  cin >> search;
  gen(arr);
  print(arr);
  if(find(arr,search)) cout << "\nEntered value IS in the array. ";
    else cout << "\nEntered value IS NOT in the array. ";
}

//The program takes a value and searches 
//for it in a randomly generated array.