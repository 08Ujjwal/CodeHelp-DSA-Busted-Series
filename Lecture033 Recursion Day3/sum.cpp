#include <iostream>
using namespace std;
#include<math.h>

int  gsum(int arr[],int size){
  if(size==0){
      return 0;
  }
  int i=0;
  return arr[i]+gsum(arr+1,size-1);
  i++;
}
    

int main(){
  
  int arr[5]={1,4,2,5,6};
  int size=5;
  int sum=gsum(arr,size);
  cout<<sum;

}
