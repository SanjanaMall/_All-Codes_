#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
//     int main() {


//         int num;
//         cin>>num;
//         if (isEven(num)){
//             cout<<"Number is Even"<<endl;
//              }
//         else{
//             cout<<"Number is Odd"<<endl;
//         }
       
    
//     return 0;

// int factorial(int n){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact =fact*i;

//     } 
//     return fact;
// }

// int nCr(int n, int r){
//     int num = factorial(n);
//     int denom = factorial(r)*factorial(n-r);
//     return num/denom;

// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<"Answer is "<< nCr(n,r)<<endl;
//}


//CALLING A FUNCTION::::::

// void printCounting(int n){
//     for(int i=1;i<=n;i++)
//     cout<<i<<endl;
// }
// int main(){
//     int n;
//     cin>>n;

//     printCounting(n);

//     return 0;
// }


// bool isPrime(int n){
//     for(int i = 2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }    
//     return 1;
    
// }
// int main(){
//     int n;
//     cin>>n;

//     if (isPrime(n)){
//         cout<<"Is a prime number"<<endl;
//     }
//     else{
//         cout<<"Not a prime number"<<endl;
//     }

//     return 0;
// }

// void dummy(int n) {
//     n++;
//     cout<< "n is " << n << endl;

// }

// int main() {
//     int n;
//     cin>>n;
//     dummy(n);
//     cout<<"Number n is "<< n << endl;

//     return 0;
// }

// void update(int a){
//     a = a/2;

// }
// int main(){
//     int a = 10;
//     update(a);
//     cout<<a<<endl;
// }

// int update(int a){
//     a -= 5;
//     return a;

// }
// int main(){
//     int a = 15;
//     update(a);
//     cout<<a<<endl;
//}

// int update(int a){
//     int ans = a*a;
//     return ans;

// }
// int main(){
//     int a = 15;
//     update(a);
//     cout<<a<<endl;
// }

// void printArray(int arr[], int size){
//     cout<<"Printing the array "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"printing done "<<endl;

// }

// int main(){

//     int second[3]={4,5,2};

//     int n=15;
//     printArray(second,15);

//     int third[2]={5,2};

//     n=10;
//     printArray(third,10);

//     int fourth[5]={9,1,4,5,2};

//     n=12;
//     printArray(fourth,12);


    

//     return 0;
// }
// int main(){
//     char ch[5]={'a','b','c','r','p'};
// cout<<ch[3]<<endl;

// cout<<"Printing the array"<<endl;
// for(int i =0;i<5;i++){
//     cout<<ch[i]<<" ";

// }
// cout<<endl;
// cout<<"Printing done"<<endl;

// return 0;

// }

// int getMax(int num[],int n){
//     int maxi = INT_MIN;

//     for(int i = 0;i<n;i++){
//         maxi = max(maxi,num[i]);

//         // if(num[i]>max){
//         //     max = num[i];
//         // }
//     }
//     return maxi; 
// }

// int getMin(int num[],int n){
//     int mini = INT_MAX;

//     for(int i = 0;i<n;i++){

//         mini = min(mini,num[i]);
//         // if(num[i]<min){
//         //     min = num[i];
//         // }
//     }
//     return mini; 

// }

// int main(){
//     int size;
//     cin>>size;

//     int num[12];

//     for(int i = 0; i<size;i++){
//         cin>>num[i];
//     }

//     cout<<"Maximum value is "<<getMax(num, size)<<endl;
//     cout<<"Minimum value is "<<getMin(num, size)<<endl;
// }

// void update(int arr[], int n){
//     cout<<endl << "inside the function"<<endl;

//     arr[0]=12;

//     for(int i =0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     cout<< "Going back to main function "<<endl;
// }

// int main(){
//     int arr[3]={1,23,3};
//     update(arr, 3);

//     cout<<"Printing in the main function"<<endl;
//     for(int i = 0;i<3;i++){
//         cout<<arr[i]<<" ";

        
//     }
// }

// int array(int arr[],int n){
    
//     cout<<"Array is"<<endl;
//     int sum = 0;
//     for(int i= 0;i<=n;i++){
//         sum = sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[5]={32,-31,12,52,24};
    
//     array(arr,5);
//     int sum = 0;

//     cout<<"Sum of the elements of the array is: ";
//     for(int i= 0;i<5;i++){
//         sum = sum+arr[i];
        
//     }
//     cout<<sum<<endl;
//     return 0;

// } 

// bool search(int arr[],int n, int num){
//     for(int i= 0;i<=n;i++){
//         if(arr[i]==num);
//         return 1;
           
//     }
//     return  0;
// }
// int main(){
//     int arr[10]={3,5,9,-3,4,2,-7,4,7,11};

//     cout<<"Enter the number:"<<endl;
//     int num;
//     cin>>num;
    
//     bool found = search(arr,10,num);
//         if(found){
//             cout<<"key is present"<<endl;
//         }else{
//             cout<<"Key is not present"<<endl;
//         }
//     return 0;

// } 


//REVERSING THE ARRAY
// void printArray(int arr[],int n){
    
//     for(int i= 0;i<n;i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }
// int reverse(int arr[],int n){
    
//     int start = 0;
//     int end = n-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[10]={12,4,8,45,73,32,-31,12,52,24};
//     int brr[5]={12,45,73,12,24};
    
//     reverse(arr,10);
//     reverse(brr,5);
//     printArray(arr,10);
//     printArray(brr,5);

    
//     return 0;

// } 

// void printArray(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    

// }

// void swapAlternate(int arr[ ], int size){
//     for(int i = 0; i<size; i+=2){
//         if(i+1 < size){
//             int temp = arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }

// }

// int main(){
//     int even[6]={4,6,23,45,64,34};
//     int odd[5]={12,41,23,26,8};

//     swapAlternate(even, 6);
//     printArray(even,6);

//     cout<<endl;

//     swapAlternate(odd, 5);
//     printArray(odd,5);

//     return 0;
// }


// int unique(int arr[], int size){
//     int ans = 0;
//     for(int i=0; i<size;i++){
//         ans = ans^arr[i];

//     }
//     return ans;
// }

// int main(){
//     int arr[]={1, 5, 3, 5, 1};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int uniqueElement = unique(arr, size);
//     cout<<"The unique element is :"<<uniqueElement<<endl;

//     return 0;
// }


//all the count of elements are unique 

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

}
int main(){
    int arr[]= {1,2,2,3,3,3,4,4,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count[100] = {0};

    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }

    bool isUnique=true;
    for(int i=0;i<size;i++){
        if(count[i]==0)continue;
        for(int j=i+1;j<size;j++){
            if(count[i]==count[j]){
                isUnique=false;
                break;

            }        
        }
        if(isUnique)break;
    }
    if (isUnique){
        cout<<"All element occurances are unique"<<endl;
    }else{
        cout<<"There are duplicate occurances"<<endl;
    }
    return 0;
}


 









