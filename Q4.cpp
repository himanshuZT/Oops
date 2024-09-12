#include<iostream>
using namespace std;
   int maximum(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        int k=2;
        int total=n-i-1;
        int c=i+1;
        int sum=arr[i];
       while(total-k>=0){
        for(int j=c;j<c+k;j++){
        sum=sum+arr[j];}
        c=c+k;
        total=total-k;
        k++;
       }
        if(sum>max)
        {
            max=sum;
        }
        }
        return max;

    }
int main()
{int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
   
    }
       int ans= maximum(arr,n);
    cout<<ans<<endl;
    return 0;
}
//Max Special Sum