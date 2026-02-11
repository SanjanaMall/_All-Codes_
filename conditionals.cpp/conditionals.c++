//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     if(n%2==0){ 
//         cout<<"even nunber"<<endl;
//         cout<<"sadu";
//     } 
//     else
//     cout<<"odd nunber";


//  }
// #include<iostream>
//  using namespace std;
//   int main(){
//      int n;
//      cout<<"enter n :";
//      cin>>n;
//      if(n>0){
//          cout<<"number is positive"<<endl;
//          if(n%5==0){
//             cout<<"number is divisible";
//          }else{
//             cout<<"number is not divisible by 5";
//          }
//         }else{
//             cout<<"The number id negative."<<endl;
//         }
//         return 0;
//    }
//    #include <iostream>
//    using namespace std;
   
//    int main() {
//        int n;
//        cout << "Enter a number: ";
//        cin >> n;
   
//       if (n > 0){cout << "The number is positive." <<endl;
//         cout<< n;
//     }
           
//         else{cout<<"the absolute value of the number is: ";
//             cout<< -n;
//         } 
            
   
//        return 0;
//    }
// #include <iostream>
//     using namespace std;
   
//    int main() {
//         int n;
//         cout << "Enter a number: ";
//         cin >> n;
   
//        if(n<0) n= -n;
//        cout<<n;
//     }
// #include <iostream>
//    using namespace std;
   
//    int main() {
//        int x,y;
//        cout << "Enter the cost price: ";
//        cin >> x;
//        cout << "Enter the selling price: ";
//        cin >> y;
   
//       if (x > y){cout << "The seller has made loss " ;
//         cout<<x-y;
//     }
           
//       else if (x < y){cout << "The seller has made profit ";
//         cout<<y-x;
//     }
//    else{
//         cout<<"the seller has neither made profit nor loss";
//    }
        
    
// } 
#include<iostream>
using namespace std;

int main(){
    int l,b ;
    cout<<"Enter the length of the rectangle : ";
    cin>> l;
    cout<<"Enter the beadth of the rectangle : ";
    cin>> b;
    cout<<"the perimeter of the rectangle is :";
    int p = (int)2*(l+b);
    cout<< p<<endl;
    cout<<"the area of the rectangle is :";
    int a = (int)l*b;
    cout<<l*b<<endl;

    if(a>p)
        cout<<"the area of the rectangle is greater than paerimeter of the recangle";
    else
        cout<<"the perimeter of the rectangle is more than the area";

}