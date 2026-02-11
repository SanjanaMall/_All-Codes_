// #include<iostream>
// using namespace std;
// int main(){
//     int apples;
//     cin>>apples;
//     cout<<"hello world"<<endl;
//     cout<<"Number of apples:"<<apples<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<"The sum of two numbers is :" <<int (a+b)<<endl;
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a:"<<a<<endl;
//     cin>>a;
//     cout<<"enter b:"<<b;
//     cin>>b;


//     int c;
//     c=b;
//     b=a;
//     a=c;
//     cout<<"a:"<<a<<endl;
//     cout<<"b:"<<b;

//     return 0;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num1=6;
//     int num2=12;
//     //arithamtic operator
//     cout<<num1+num2<<endl;
//     cout<<num1-num2<<endl;
//     cout<<num1*num2<<endl;
//     cout<<num1/num2<<endl;
    
//     // relational operator
//     cout<<(num1==num2)<<endl;
//     cout<<(num1!=num2)<<endl;
//     cout<<(num1<=num2)<<endl;
//     cout<<(num1>=num2)<<endl;

//     //Assignment opertator
//     num1+=3;
//     cout<<num1<<endl;
//     num2-=3;
//     cout<<num2<<endl;
    

//     return 0;


// }

// #include<iostream>
// using namespace std;
// int main(){
//        bool exp1=true;
//        bool exp2=false;
//     // relational operator
//     cout<<(exp1&&exp2)<<endl;
//     cout<<(exp1||exp2)<<endl;
//     cout<<(!exp1)<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num1 = 5;
//     cout<<(num1<<1)<<endl;
//     cout<<(num1>>1)<<endl;

//     int num2 = 8 ;
//     cout<<(num1&num2)<<endl;
//     cout<<(num1|num2)<<endl;

    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 14;
//     cout<<sizeof(a)<<endl;
//     char name = 'a';
//     cout<<sizeof(name)<<endl;

//     bool flag;
//     a==name? flag = true: flag = false;
//     cout<<flag<<endl;
//     cout<<(&a)<<endl;

//     int c = 6;
//     cout<<(c++)<<endl;
//     int b =c + 6;
    
//     cout<<(b)<<endl;
//     cout<<(b--)<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

// cout<<"Hello World" <<endl <<"Welcome to the world of pramming with c++" <<endl;
// int num;
// cin>>num;
// cout<<"The entered number is: "<<num<<endl;
// //integer data type
// int apples = 5;
// cout<<apples<<endl;
// cout<<"size of int :"<<sizeof(apples)<<endl;
 
// //char
// char sign = '&';
// cout<<sign<<endl;
// cout<<"Size of the char :"<<sizeof(sign)<<endl;

// float score = 3.14;
// cout<<score<<endl;
// cout<<"Size of the float: "<<sizeof(score)<<endl;
// return 0; 
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num1;
//     cout<<" Enter the 1st number :";
//     cin>>num1;
//     int num2;
//     cout<<"Enter the second number :";
//     cin>>num2;
//     cout<<"Sum of two numbers is :"<<(num1+num2)<<endl;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 3; 
//     int max;

//     a > b ? max=a : max=b;
//     cout<<max<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num1;
//     int num2;
//     cout<<"Enter the first number:" <<endl;
//     cin>>num1;
//     cout<<"Enter the second number:" <<endl;
//     cin>>num2;

//     if(num2>num1){
//         cout<<"The division of two number is:" <<(num1/num2)<<endl;
//     }
//     else if(num1>num2){
//         cout<<"The multiplication of two number is:" <<(num1*num2)<<endl;  
//     }else{
//         cout<<"The sum of two number is:" <<(num1+num2)<<endl;    
//     }
//     return 0;
// } 


// #include<iostream>
// using namespace std;
// int main(){
//     int cost_price;
//     int selling_price;
//     cout<<"Enter the cost_price number:" <<endl;
//     cin>>cost_price;
//     cout<<"Enter the selling_price number:" <<endl;
//     cin>>selling_price;

//     if(selling_price>cost_price){
//         cout<<"Congratulations!!! you made a profit of:" <<(selling_price-cost_price)<<endl;
//     }
//     else if(selling_price<cost_price){
//         cout<<"You made a loss of:" <<(cost_price-selling_price)<<endl;  
//     }else {
//         cout<<"You neither made loss nor profit :" <<endl;
//     }
//     return 0;
// } 

// #include<iostream>
//  using namespace std;
//  int main(){
//      int num1;
//      int num2;
//      int num3;
//      cout<<"Enter the first number:" <<endl;
//      cin>>num1;
//      cout<<"Enter the second number:" <<endl;
//      cin>>num2;
//      cout<<"Enter the third number:" <<endl;
//      cin>>num3;

//      if(num1>num2 && num1>num3){
//          cout<<"Num1 of greatest of all three number :" <<num1<<endl;
//      }
//      else if(num2>num1 && num2>num3){
//          cout<<"Num2 of greatest of all three number :" <<num2<<endl;
//      }else{
//         cout<<"Num3 of greatest of all three number :" <<num3<<endl;
//      }
//      return 0;
//  } 

// #include<iostream>
// using namespace std;
// int main(){
//     char alphabet;
//     cout<<"Enter the character:";
//     cin>>alphabet;

//     switch(alphabet){
//         case 'a':
//         cout<<"It is a vowel" <<endl;
//         break;
//         case 'e':
//         cout<<"It is a vowel" <<endl;
//         break;
//         case 'i':
//         cout<<"It is a vowel" <<endl;
//         break;
//         case 'o':
//         cout<<"It is a vowel" <<endl;
//         break;
//         case 'u':
//         cout<<"It is a vowel" <<endl;
//         break;
//         default:
//         cout<<"It ia a consonant"<<endl;
//         break;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num1;
//     int num2;
//     cout<<"Enter the  num1:";
//     cin>>num1;
//     cout<<"Enter the num2:";
//     cin>>num2;

//     cout<<"Enter an operator(+,-,*,/,%): ";
//     char op;
//     cin>>op;

//     switch(op){
//         case '+':
//         cout<<"Sum of two numbers is:" <<num1+num2<<endl;
//         break;
//         case '-':
//         cout<<"Difference of two numbers is:" <<num1-num2<<endl;
//         break;
//         case '*':
//         cout<<"Product of two numbers is:" <<num1*num2<<endl;
//         break;
//         case '/':
//         cout<<"Division of two numbers is:" <<num1/num2<<endl;
//         break;
//         case '%':
//         cout<<"Remiander of two numbers is:" <<num1%num2<<endl;
//         break;
//         default:
//         cout<<"Enter the valid operator"<<endl;
//         break;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;

//     if(num%2==0){
//         cout<<"The enetered number is even:"<<num<<endl;
//     }else{
//         cout<<"the entered number is odd:"<<num<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter your marks:"<<endl;
//     cin>>marks;
//     if(marks>75){
//         cout<<"Excellent!!! keep going"<<endl;
//     }else if(marks<75 && marks>60){
//         cout<<"Good!!! Do practice"<<endl;
//     }else{
//         cout<<"Work hard"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your age:"<<endl;
//     cin>>age;
//     if(age>50){
//         cout<<"Excellent!!! you are old"<<endl;
//     }else if(age<50 && age>21){
//         cout<<"Good!!! you are adult"<<endl;
//     }else{
//         cout<<"You are kid"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter your marks:"<<endl;
//     cin>>marks;
//     if(marks>35){
//         if(marks>75){
//             cout<<"Excellent!!! keep going"<<endl;
//         }else if(marks<75 && marks>60){
//             cout<<"Good!!! Do practice"<<endl;
//         }else{
//             cout<<"Work hard"<<endl;
//         }
//     }
//     else{
//         cout<<"You are fail"<<endl;
//     }

//     marks>35? cout<<"Pass"<<endl:  cout<<"Fail"<<endl; 

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;

//     if(num%2==0 && num%3==0){
//         cout<<"The enetered number is even and divisible by 3:"<<num<<endl;
    
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number: "<<endl;
//     cin>>num;

//     if(num%3==0 || num%5==0){
//         cout<<"The enetered number is divisible by 3 or 5:"<<num<<endl;
    
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
//  int main(){
//     int day;
//      cout<<"Enter the day:";
//      cin>>day;

//      switch(day){
//          case 1:
//          cout<<"It's Monday" <<endl;
//          break;
//          case 2:
//          cout<<"It's Tuesday" <<endl;
//          break;
//          case 3:
//          cout<<"It's Wednesday" <<endl;
//          break;
//          case 4:
//          cout<<"It's Thursday" <<endl;
//          break;
//          case 5:
//          cout<<"It's Friday"<<endl;
//          break;
//          case 6:
//          cout<<"It's Saturday"<<endl;
//          break;
//          case 7:
//          cout<<"It's Sunday"<<endl;
//          break;
//          default:
//          cout<<"Enter valid day"<<endl;
//         break;
//      }

//  }
//print the sum of the first n natural umbers, wheren n is the input
// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cin>>num;
//     int sum = 0;
//     int i = 1;
//     while(i<=num){
//         sum+=i;
//         i++;
//     }

//     cout<<sum<<endl;
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"enter the natural number till whose sum to be printed"<<endl;
//     cin>>num;
//     int sum = 0;
//     for(int i = 1; i<=num; i++){
//         sum+=i;
        
//     }
//     cout<<sum<<endl;

//     return 0; 
// }
//print the first multiple of 5 whuch is also multiple of 7
// #include<iostream>
// using namespace std;

// int main(){
//         int num =5;
//         while(true){
//             if(num%7==0){
//                cout<<num<<endl;
//                break;
//             }
//             num+=5;
//         }

//     for (int num = 5; ; num+=5){
//         if(num%7==0){
//             cout<<num<<endl;
//             break;
//         }
//         num+=5;
//     }  
// for(int num = 5;;num+=5){
//     for(int j=2;j<7;j++){
//         //code
//         //condition ---break

//     }
// }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int num;
//     cin>>num;
//     int sum=0;
//     do{
//         int num1;
//         cin>>num1;
//         sum+=num1;
//         num--;

//     }while(num>0);

//     cout<<sum<<endl;

//     return 0;
// }

// //print all the values between 1 to 50 except the multiple of 3
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i =1; i<=50;i++){
//         if(i%3==0)
//            continue;
//     cout<<i<<endl;
//     }
//     return 0;
// }

//print the patterns
// #include<iostream>
// using namespace std;
// int main(){
//    int n,m;
//    cin>>n;
//    cin>>m;

//    for(int i = 1; i<=n;i++){
//       for(int j = 1; j<=m;j++){
//       cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0; 
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int n,m;
//    cin>>n; 
//    cin>>m;

//    for(int i = 1; i<=n;i++){
//       for(int j = 1; j<=m;j++){
//          if(i==1 || j==1 || i==n || j==m){
//             cout<<"*";
//          }
//          else{
//             cout<<" ";
//          }
//       }
//       cout<<endl;
//    }
//    return 0; 
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i = 1;i<=n;i++){
//       for(int j= 1;j<=i;j++){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }
 
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//     for( int i = 1;i<=n;i++){
//       for(int j = 1; j<=(n-i);j++){
//          cout<<" ";
//       }
//       for(int j = 1;j<=(2*i-1);j++){
//          cout<<"*";
//       }
//       cout<<endl;
//     }

//     return 0;
// }
//given by the online tutor for the pattern
         //123
         //231
         //312
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;

//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=n;j++){
//          cout<<j;
//       }
//       for(int j=1;j<=(i-1);j++){
//          cout<<j;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

//what chatgpt gave pattern
//123
//231
//312
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;

//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=n;j++){
//          cout<<((i+j)%n+1);
//       }
//       cout<<endl;
//    }
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;

//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=n;j++){
//          cout<<j;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

//123456
//1    6
//1    6
//123456(n==4, m==4)
//chatgpt bro
// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    int m;
//    cin>>n;
//    cin>>m;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <=m; j++) {
//             if (i == 1 || i == n ) {
//                 cout << j ;
//             } else if (j == 1 || j == m) {
//                 cout << j;
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    int m;
//    cin>>n;
//    cin>>m;

//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=m;j++){
//          if((i+j)%2==0){
//           cout<<"1";  
//          }
//          else{
//             cout<<"2";
//          }
         
//       }
//       cout<<endl;
//    }
// }
// #include <iostream>
// using namespace std;

// int main(){
//    int n;
//    int m;
//    cin>>n;
//    cin>>m;

//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//          cout<<j;
//       }
//       cout<<endl;
//    }
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=(n-i);j++){
//          cout<<" ";
//       }
//       for(int j=1;j<=i;j++){
//          cout<<j;
//       }
//       for(int j=(i-1);j>=1;j--){
//          cout<<j;
//       }
//       cout<<endl;
//    }
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int digits=0;
//     while(n>0){
//       digits++;
//       n=n/10;
    
//    }
//    cout<<digits<<endl;
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int sum=0;
//     while(n>0){
//       int lastdigit = n%10;
//       sum+=lastdigit;
//       n=n/10;
//       }
//    cout<<sum<<endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
   
//    int reverse=0;
//    while(n>0){
//       int lastdigit = n%10;
//       reverse = reverse*10 + lastdigit;
//       n=n/10;
//    }
//    cout<<reverse<<endl;
//    return 0;
//}

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;

//    int result=0;
//    for(int i=1;i<=n;i++){
//       if(i%2==0){
//          result-=i;
//       }else{
//          result+=i;
//       }
//    }
//    cout<<result<<endl;
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int factorial=1;
//    for(int i=1;i<=n;i++){
//       factorial*=i;
//       cout<<factorial<<endl;

//    }
//    cout<<endl;
//    return 0;
// } 

//a**b code self 
// #include<iostream>
// using namespace std;
// int main(){
//    int a;
//    int b;
//    cin>>a;
//    cin>>b;
//    int num=1;
//     for(int i=1;i<=a;i++){
//       num*=b;
//     }
//       cout<<a <<" raised to power " <<b<< " is "<< num<<endl;
   
//    cout<<endl;
//    return 0;
// }
//gpt bro
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter the value of a (power): ";
//     cin >> a;

//     cout << "Enter the value of b (base): ";
//     cin >> b;

//     int result = 1;

//     for (int i = 1; i <= a; i++) {
//         result *= b;
//     }

//     cout << b << " raised to the power " << a << " is: " << result << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i =0;
//     do{
//         cout<<"Hello World"<<endl<<"Welcome to the world of C++"<<endl;
//         i++;

//     }while(i<3);
    
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i =20;
//     do{
//         cout<<i<<endl;
//         i++;

//     }while(i<19);
    
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){

//     //Number of characters in line
//     int no_of_chars = 9;
//     for(int j=0;j<no_of_chars;j++){
//         char ch = (char)('A' + j);
//         cout<<ch;
//     }
//     return 0;
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int n= 5;//given input
//     //loop to print upper triangle
//     for(int line = 1; line <=n; line++){
//         //this loop does same work fro the line

//         //before loop is to print spaces
//          int no_of_spaces =(n-line);
//         for(int k = 0; k< no_of_spaces;k++){  
//             cout<<" ";

//         }
//         //Number of characters in line
//         int no_of_chars = 2*line-1;
//         for(int j=0;j<no_of_chars ; j++){
//             char ch = (char)('A' + j);
//             cout<<ch;
//         }
//         cout<<endl;

//         //for printing the lower triangle
//         for(int line = n + 1; line< 2*n-1;line++){
//             int no_of_spaces = (line -n);
//             for(int k=0; k< no_of_spaces; k++){
//                 cout<<" ";
//             }
//             int n0_of_chars = 2*(2*n-line)-1;
//             for(int j = 0; j< no_of_spaces; j++){
//                 cout<<(char)('A'+j);
//             }
//             cout<<endl;
//         }
        
//     } 
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;//given input
//     //to print the upper triangle
//     for( int line = 1; line<=n;line++){
//         //to print spaces before the loop
//         int no_of_spaces = n-line;
//         for(int k= 0; k<no_of_spaces;k++){
//             cout<<" ";
//         }
//         //print the characters in upper triangle
//         int no_of_chars = 2*line-1;
//         for(int j = 0; j<no_of_chars ; j++){
//             char ch = (char)('A'+j);
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     //printing the lower triangle
        
//     for(int line = n-1;line>=1;line--){
//         int no_of_spaces = (n-line);
//         for(int k = 0;k<no_of_spaces;k++){
//             cout<<" ";
//         }
//         int no_of_chars = 2*line-1;
//         for(int j= 0;j<no_of_chars;j++){
//             char ch=(char)('A'+j);
//             cout<<ch;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//printing the loweer triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;//given input
//     for(int line = n + 1; line<=2*n - 1;line++){
//         int no_of_spaces=(line-n);
//         for(int k = 0; k < no_of_spaces; k++){
//             cout<<" ";
//         }
//         int no_of_chars = 2*(2*n - line)-1;
//         for(int j = 0; j < no_of_chars ; j++) {
//             cout<<(char)('A'+j);
//         }
//         cout<<endl;
//        }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for( int line = 0;line<n;line++){
//         for(int i = 0;i<n;i++){
//             if(i==n/2)
//             cout<<"*";
        
//             else if(line==n/2)
//             cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;

//     }
//     return 0; 

// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Please enter the row number: ";
//     cin>>n;
//     int m;
//     cout<<"Please enter the column number: ";
//     cin>>m;
//     for(int i =1;i<=n;i++){
//         for(int j = 1;j<=m;j++){
//             if(i==n/2+1 || j==m/2+1 )
//                 cout<<"*";
//             else
//                 cout<<" ";
//             }
//         cout<<endl;
//     }    
//     return 0;
// }
//bimary to decimal
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans = 0;
//     int power=1;
//     while(n>0){
//         int lastdigit = n%10;
//         ans+= lastdigit+power;
//         power*=2;
//         n/=10;

//     }
//     cout<<ans<<endl;
//     return 0;
// }
//decimal to binary conversion
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans = 0;
//     int power= 1;
//     while(n>0) {
//         int paritydigit = n%2;
//         ans+= paritydigit*power;
//         power*=10;
//         n/=2;
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void welcome(){
//     cout<<("Welcome to C++ programming"); 
//     }
// int main(){
//     welcome();
// }  
// #include<iostream>
// using namespace std;
// int add(int num1, int num2){
//     int sum=num1 + num2;
//     return sum;
// }
// int add(int num1, int num2, int num3){
//     int sum=num1 + num2 + num3;
//     return sum;
// }
// float add(float num1, float num2){
//     float sum=num1 + num2;
//     return sum;
// }
// int main(){
//     int a=5;
//     int b=12; 
//     float c = 12.6;
//     float d = 12.6;
//     // cout<<add(a,b)<<endl;
//     // cout<<add(a,b,c)<<endl;
//     cout<<add(c,d)<<endl;

//     return 0;
// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<pow(2,5)<<endl;
//     cout<<sqrt(69)<<endl;
//     int ans = sqrt(69);
//     cout<<ans<<endl;
//     double doubleans=sqrt(69);
//     cout<<doubleans<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void sum(int x, int y){
//     cout<<(x+y);
// }
// int main(){
//     int p = 10;
//     sum(p,23);
// }

// #include<iostream>
// using namespace std;

// int addition(int x, int y){
//     //processing
//     int result = x + y;
//     return result;
// }
// void fun(string name){
//     cout<<"Are you having fun "<<name<<"?"<<"\n";
// }
// int main(){
//     fun("Sanjana");
//     int response = addition(9,5);
//     cout<<response;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int square(int x){
//     return x * x; 
// }

// int main(){
//     for(int i = 1; i<=5; i++){
//         cout<<square(i)<<endl;

//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int radius = 3;
//     float area = 3.14*radius * radius;
//     float circumference = 2*3.14*radius;
//     cout<<"The area of the circle is : "<<area<<endl;
//     cout<<"The circumference of the circle is : "<<circumference;

// return 0;


// }
// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enetr the age of the person :";
//     cin>>age;
//     if(age>=18){
//         cout<<"You are eligible to vote : Yes"<<endl;
//     }else{
//         cout<<"You are not eligible to vote : No"<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the initial digit :";
//     cin>>a;
//     int b;
//     cout<<"Enter the final digit :";
//     cin>>b;
//     for(int i = a; i<=b ;i++)
//     if(i%2!= 0){
//         cout<<i<<" ";
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;

//     bool isPrime(int num){
//         //function checks if the nuber is prime number or not
//         for(int i = 2; i*i<=(num); i++){
//             if(num%i == 0)
//             return false;
//         }
//     }
// int main(){
//     int a = 2, b= 50;
//     for(int i = a; i<=b; i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int add(int a , int b){
//     int c = a+b;
//     return c;
// }
// int main(){
//     int x=4, y= 13;
//     int z = add(x,y);

// }
// #include<iostream>
// using namespace std;
// void swap(int x, int y){
//     int temp = x;
//     x = y;
//     y= temp;

// }
// int main(){
//     int i = 7, j=2;
//     swap(i, j);
//     cout<<i<< " "<<j<<"\n";
//     return 0;
// }
// #include<iostream>
// using namespace std;

// void swap(int &x , int &y){
//     int temp = x;
//     x = y;
//     y = temp;

// }
// int main(){
//     int x = 9;
//     int c = 2;
//     int &y = x;
//     cout<<x<<" "<<c;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void fun(int x, int y, int z=30 ){
//     cout<<x<<" "<<y<<" "<<z;
// }

// int main(){
//     fun(10, 20);
//     return 0;

// }
// #include<iostream>
// using namespace std;
// void decrease(int n1, int n2){
//     n1--;
//     n2= n2-2;
//     cout(n1) <<":" <<(n2);
//     //n1 and n2 are formal parameters
// }
// int main(){
//     int p = 26;
//     int q = 13;
//     decrease(p,q);
//     cout<<(p)<< ":"<<(q);
//     //p and q are the actual parameters
// }
//program for the "Pass by Reference value"
// #include<iostream>
// using namespace std;
// int main(){
//     int p  = 4;
//     int &q = p;

//     p++;
//     cout<<p<<endl;
//     cout<<q<<endl;
//     cout<<&p<<endl;
//     cout<<&q<<endl;

//     return 0;

// }
// #include<iostream>
// using namespace std;

// void changeValue(int z){
//     z = 100;
// }
// int main(){
//     int a = 6;
//     changeValue(a);
//     cout<<a<<endl;

    

//     return 0;

// }
// #include<iostream>
// using namespace std;

// int main(){
//      int array[]={1,3,5,7,9};
    // cout<<sizeof(array)<<endl;
    // cout<<sizeof(array)/sizeof(array[0])<<endl;
    // int size = sizeof(array)/sizeof(array[0]);

    // for(int idx = 0; idx<size ; idx++){
    //     cout<<array[idx]<<endl;
    // }

    // //for each loop
    // for(int ele:array){
    //     cout<<ele<<endl;
    // }

    // //while loop
    // int index = 0;
    // while(index<size){
    //     cout<<array[index]<<endl;
    //     index++
    // }
//     char vowels[5];
//     for (int idx = 0;idx<5; idx++){
//         cin>>vowels[idx];
//     for(char &element:vowels){
//         cin>>element;

//     }

//     for (int idx = 0;idx<5; idx++){
//     cout<<vowels[idx]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
//  int main(){
    
//     int array[]={1,3,5,7,9};
//     int size = sizeof(array)/sizeof(array[0]);
//     int sum = 0;
//     for(int i = 0;i<size;i++){
//         sum+= array[i];
        
//     }
//     cout<<sum<<endl;
//     return 0;
        

// }
// #include<iostream>
// using namespace std;
//  int main(){
    
//     int array[]={1,3,15,17,9};
//     int max = array[0];
//     for(int i = 1;i<5;i++){
//         if(array[i]>max);
//         max = array[i];
        
    
//     }
//     cout<<max<<endl;
//     return 0;
        

// }
// #include<iostream>
// using namespace std;
//  int main(){
    
//     int num;
//     cout<<"Enter the  number :";
//     cin>>num;
//     int array[]={1,3,15,17,9};
//     int index = -1;
//     for(int i=0;i<5;i++){
//         if(array[i] == num){
//         index = i;
//        break;
//         }
//     }
//     if(index!= -1){
//         cout<<"Element found at index: "<<index<<endl;
//     }else{
//        cout<<"Element not found Returning: -1"<<endl; 
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.resize(5);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.pop_back();
//     v.pop_back();
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//      vector<int> v;
//      int element;
        
//      for(int i = 0; i < 5 ;i++){
//         cin>>element;
//         v.push_back(element);
//      }

//         //cin>>v.[i];

//         for(int i = 0; i < v.size(); i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;

//         v.insert(v.begin()+2,6);

//         //for each loop
//         for (int ele : v){
//             cout<< ele << " ";
            
//         }
//         cout<<endl;

//         v.erase(v.end()-2); 
        
//         //while loop
//         int idx = 0;
//         while(idx < v.size()){
//             cout << v[idx++] << " ";
//         }
//     cout<<endl;
    
//     return 0;

// }


//iterating from the initial point

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     int element;
//     for(int i = 0; i<6;i++){
//         cin>>v[i];
//     }

//     cout<<"Enter x: ";
//     int x;
//     cin>>x;

//     int occurance= -1;
//     for(int i = 0; i<v.size();i++){
//         if(v[i]==x){
//             occurance= i;
//         }
//     }
//     cout<<occurance<<endl;
// }

//iterating from the last

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     int element;
//     for(int i = 0; i<6;i++){
//         cin>>v[i];
//     }

//     cout<<"Enter x: ";
//     int x;
//     cin>>x;

//     int occurance= -1;
//     for(int i =v.size()-1; i>=0;i--){
//         if(v[i]==x){
//             occurance= i;
//         }
//     }
//     cout<<occurance<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     int element;
//     for(int i = 0; i<v.size();i++){
//         cin>>v[i];
//     }

//     cout<<"Enter x: ";
//     int x;
//     cin>>x;

//     int count = 0;
//     for(int ele:v){
//         if( ele == x){
//             count++;
//         }
//     }
//     cout<<count<<endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     int element;
//     for(int i = 0; i<v.size();i++){
//         cin>>v[i];
//     }

//     cout<<"Enter x: ";
//     int x;
//     cin>>x;

//     int count = 0;
//     for(int ele:v){
//         if( ele > x){
//             count++;
//         }
//     }
//     cout<<count<<endl;

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     int element;
//     for(int i = 0; i<v.size();i++){
//         cin>>v[i];
//     }

//     for(int i = 0; i<v.size(); i++){
//         if(v[i]>v[i+1]){
//             cout<<"Vector is not sorted"<< endl;
//             return 0;
//         }
//     }
//     cout<<"Vector is sorted"<<endl;   

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     int element;
//     for(int i = 0; i<v.size();i++){
//         cin>>v[i];
//     }
   
//     int sum= 0;
//     for(int i = 0; i<v.size(); i++){
//         if(i%2==0){
//             sum += v[i];
//         }else{
//             sum-= v[i];
//         }
        

//     }
    
//     cout<<sum<<endl;
    
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){

//     int array[]={2,6,7,3,2};
//     int targetsum=4;

//     int size= 5;

//     int pairs=0;
//     for(int i= 0;i<size;i++){
//         for(int j = i+1;j<size;j++){

//             if(array[i]+array[j]==targetsum){
//                 pairs++;
//             }
//         }
//     }
//     cout<<pairs<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){

//     int array[]={2,6,7,3,2,7,5,9,2};
//     int targetsum=6;

//     int size= 9;

//     int triplets=0;
//     for(int i= 0;i<size;i++){
//         for(int j = i+1;j<size;j++){
//             for(int k = j+1;k<size;k++){

//             if(array[i]+array[j]+array[k]==targetsum){
//                 triplets++;
//             }
//         }
//     }
//     }
//     cout<<triplets<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){

//     int array[]={2,6,7,3,6,7,5,9,5,2};

//     int size= 10;
//     for(int i= 0;i<size;i++){
//         for(int j = i+1;j<size;j++){
//             if(array[i]==array[j]){
//                 array[i]=array[j]=-1;
//             }
//         }
//     }
//     for(int i = 0;i<size;i++){
//         if(array[i]>0){
//             cout<<array[i]<<endl;
//         }
//     }
//     return 0;
// }

//when duplicates are not present
// #include<iostream>
// using namespace std;

// int largestElementIndex(int array[], int size){
//     int INT_MIN=0;
//     int max=INT_MIN;
//     int maxindex = -1;
//     for(int i = 0;i<size;i++){
//         if(array[i]>max){
//             max= array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }
// int main()
// {
//     int array[]={2,3,5,7,6,1};
//     int indexoflargest = largestElementIndex(array,6);
//     cout<<array[indexoflargest]<<endl;
//     array[indexoflargest]=-1;
//     int indexofsecondlargest = largestElementIndex(array,6);
//     cout<<array[indexofsecondlargest]<<endl;


//     return 0;
// }


//when duplicates are present
//elements were transversed 3 times thus new code made
// #include<iostream>
// #include<climits>
// using namespace std;

// int largestElementIndex(int array[], int size){
//     int max=INT_MIN;
//     int maxindex = -1;
//     for(int i = 0;i<size;i++){
//         if(array[i]>max){
//             max= array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }

// int main()
// {
//     int array[]={2,3,5,7,6,1};
//     int n = sizeof(array)/sizeof(array[0]);
//     int indexoflargest = largestElementIndex(array,n);
//     cout<<array[indexoflargest]<<endl;
//     //array[indexoflargest]=-1;
//     int largestelement = array[indexoflargest];
//     for(int i = 0; i<n ; i++){
//         if (array[i] == largestelement){
//             array[i]=-1;
//         }
//     }
//     int indexofsecondlargest = largestElementIndex(array,n);
//     cout<<array[indexofsecondlargest]<<endl;



//     return 0;
// }

//~~whole code in single transverse
//when duplicates are present
// #include<iostream>
// #include<climits>
// using namespace std;

// int secondLargestElement(int array[], int size){
//     int max=INT_MIN;
//     int second_max = INT_MIN;
//     for(int i = 0;i<size;i++){
//         if(array[i]>max){
//             max= array[i];
//         }
//     }

//     for(int i = 0;i<size; i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }

//     for(int i=0;i<size;i++){
//         if(array[i]>second_max && array[i]!=max){
//             second_max=array[i];
//         }
//     }  
//     return second_max;
// }
// int main()
// {
//     int array[]={2,3,5,7,6,1};
//     int n = sizeof(array)/sizeof(array[0]);
//     cout<<secondLargestElement(array,n)<<endl;


//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void sortZeroesAndOnes(vector<int> &v){

//     int zeroes_count = 0;

//#counting zeroes
//     for(int ele:v){
//         if(ele==0){
//             zeroes_count++;
//         }
//     }

//     for(int i = 0;i<v.size();i++){
//         if(i<zeroes_count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
    
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int> v;

//     for(int i = 0; i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
    
//     sortZeroesAndOnes(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//         //cout<<endl;
//     }

//     return 0;

// }


//   sorting by swapping left and right side 
// #include<iostream>
// #include<vector>
// using namespace std;

// void sortZeroesAndOnes(vector<int> &v){

//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }

//         if(v[left_ptr]==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;

//     vector<int> v;

//     for(int i = 0; i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
    
//     sortZeroesAndOnes(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
        
//     }
    

//     return 0;

// }


// #include<iostream>
// #include<vector>
// using namespace std;

// void sortByParity(vector<int> &v){

//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//             swap(v[left_ptr],v[right_ptr]);
//             left_ptr++;
//             right_ptr--;
//         }

//         if(v[left_ptr]%2==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;

//     vector<int> v;

//     for(int i = 0; i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
    
//     sortByParity(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
        
//     }
    

//     return 0;

// }


// //Given am integer array 'a' sorted omm non-decreasing order , retur an array of the square of  each number sorted in non-decreasing order.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void SortedSquaredArray(vector<int> &v){
//     vector<int> ans;

//     int left_ptr=0;
//     int right_ptr=v.size()-1;


//     while(left_ptr<=right_ptr){
//         if(abs(v[left_ptr])< abs(v[right_ptr])){
//             ans.push_back(v[right_ptr]*v[right_ptr]);
//             right_ptr--;

//         }
//         else{
//             ans.push_back(v[left_ptr]*v[left_ptr]);
//             left_ptr++;
//         }

//     }
//     reverse(ans.begin(), ans.end());
//     v=ans;
    
// }


// int main(){
        
//     int n;
//     cin>>n;
//     vector<int> v(n);

//     for(int i = 0; i<n;i++){
//         cin>>v[i];
//     }

//     SortedSquaredArray(v);

//     for(int i=0; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     return 0;

// }

// //Given am integer array 'a' sorted omm non-decreasing order , retur an array of the square of  each number sorted in non-decreasing order.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void SortedSquaredArray(vector<int> &v){
//     vector<int> ans;

//     int left_ptr=0;
//     int right_ptr=v.size()-1;


//     while(left_ptr<=right_ptr){
//         if(abs(v[left_ptr])< abs(v[right_ptr])){
//             ans.push_back(v[right_ptr]*v[right_ptr]);
//             right_ptr--;

//         }
//         else{
//             ans.push_back(v[left_ptr]*v[left_ptr]);
//             left_ptr++;
//         }

//     }
//     for(int i=0; i<v.size(); i++){
//        cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     reverse(ans.begin(), ans.end());
//     v=ans;
    
// }


// int main(){
        
//     int n;
//     cin>>n;
//     vector<int> v;

//     for(int i = 0; i<n;i++){
//       //int ele;
//         cin>>v[i];
//         //v.push_back(ele);
//     }

//     SortedSquaredArray(v);

//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;


//     return 0;

// }

// # prefix sums
// #include<iostream>
// #include<vector>
// using namespace std;

// void runningSum(vector<int> &v){

//     for(int i = 1; i<v.size(); i++){
//         v[i]+=v[i-1];
        
        
//     }

// }
// int main(){

//     int n;
//     cin>>n;

//     vector<int> v;
//     for(int i = 1; i<=n; i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     runningSum(v);

//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
    
//     cout<<endl;

//     return 0;
// }


//# prefix sums == suffix sum
// #include<iostream>
// #include<vector>
// using namespace std;

// bool checkPrefixSuffixsum(vector<int> &v){
// int total_sum=0;
// for(int i =0; i<v.size(); i++){
//     total_sum+=v[i];
// }

// int prefix_sum=0;
// for(int i=0; i<v.size();i++){
//     prefix_sum+=v[i];
//     int suffix_sum=total_sum-prefix_sum;

//     if(suffix_sum==prefix_sum){
//         return true;
//     }

// }
// return false;

// }
// int main(){

//     int n;
//     cin>>n;

//     vector<int> v;
//     for(int i = 0; i<n; i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     cout<<checkPrefixSuffixsum(v)<<endl;

//     return 0;
// }

//sum of element from l to r
//1 indexing
//#include<iostream>
//#include<vector>
//using namespace std;

//0 based indexing --> 0.....n-1
// 1 based indexing --> 1.......n

//0 5 1 2 3 4
//0 5 6 8 11 15 prefix sum
// l=1, r=3
//ans = v[r]-v[l-1]=v[3]-v[0] = 8-0 = 8

//l = 2, r= 5
//ans = v[r]-v[l-1]=v[5]-v[1]= 15-5=10



// int main(){

//     int n;
//     cin>>n;

//     vector<int> v(n+1,0);
//     for(int i=1; i<=n; i++){
//         cin>>v[i];
//     }

//     for(int i=1; i<=n; i++){
//         v[i]+=v[i-1];
//     }
    
//     int q;
//     cin>>q;

//     while(q--){
//         int l,r;
//         cin>>l>>r;
        

//         if(l<1|| r>n||l>r){
//             cout<<"Invalid query range!" <<endl;
//             continue;
//         }
        
//         int ans = v[r]-v[l-1]; 
//         cout<<ans<<endl;
//     }
//     return 0;
// }

//multiplicaton of two matrices entered by user
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int r1,c1;
//     cin>>r1>>c1;

//     int A[r1][c1];

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>A[i][j];
//         }
//     }
//     int r2,c2;
//     cin>>r2>>c2;

//     int B[r2][c2];

//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>B[i][j];
//         }
//     }

//     if(c1!=r2){
//         cout<<"Matric multiplication is not possible"<<endl;
//         return 0;
//     }

//     int C[r1][c2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             int value=0;
//             for(int k=0; k<c1;k++){
//                 value+=A[i][k]*B[k][j];
//             }
//             C[i][j]=value;
//         }
//         //cout<<endl;
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<C[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;

//     int array[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>array[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of rows of matrix:";
//     cin>>n;
//     int m;
//     cout<<"Enter the number of columns of matrix:";
//     cin>>m;

//     int array[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>array[i][j];
//         }
//     } 
//     cout<<"The original matrix is :"<<endl;   
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     //int transpose[m][n];
//     cout<<"The transpose of matrix is :"<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<array[j][i]<<" ";
        
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int> >pascalTriangle(int n){
//     vector<vector<int>> pascal(n);

//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);

//         for(int j=0 ;j<i+1;j++){
//             if(j==0 || j==i){
//                 pascal[i][j]=1;
//             }else{
//             pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }
//     }
//     return pascal;
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<vector<int>> ans;
//     ans = pascalTriangle(n);

//     for(int i=0; i<ans.size(); i++){
//         for(int j=0; j<ans[i].size(); j++){
//             cout<<ans[i][j]<<" ";

//         }cout<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <climits>
// using namespace std; 

// int maximumOnesRow(vector<vector<int>> &v){
    
//     int maxOnes=INT_MIN;
//     int maxOnesRow = -1;
//     int columns = v[0].size();


//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int numberOfOnes = columns -j;
//                 if(numberOfOnes > maxOnes){
//                     maxOnes = numberOfOnes;
//                     maxOnesRow = i;
//                 }
//                 break;
//             }
//         }
//     }
//     return maxOnesRow;
// } 

// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int> > vec(n, vector<int> (m));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m;j++){
//             cin>>vec[i][j];
//         }
//     }

//     int res = maximumOnesRow(vec);
//     cout<<res<<endl;

//     return 0;

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <climits>
// using namespace std; 

// int maximumOnesRow(vector<vector<int>> &v){
    

//     int maxOnes=INT_MIN;
//     int maxOnesRow = -1;
//     int columns = v[0].size();

    
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int numberOfOnes = columns -j;
//                 if(numberOfOnes > maxOnes){
//                     maxOnes = numberOfOnes;
//                     maxOnesRow = i;
                    
//                 }
//                 break;
//             }
//         }
//     }
//     return maxOnesRow;
    
// } 

// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int> > vec(n, vector<int> (m));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m;j++){
//             cin>>vec[i][j];
//         }
//     }

//     int res = maximumOnesRow(vec);
//     cout<<res<<endl;

//     return 0;

// }

#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std; 

int LeftMostOnesRow(vector<vector<int>> &v){
    int LeftMostOne=-1;
    int maxOnesRow = -1;
    int j=v[0].size()-1;

    while(j>=0 && v[0][j]==1){
       
        LeftMostOne = j;
        maxOnesRow = 0;
        j--;
    }
    //check if one is present in the left of the one
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            LeftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> > vec(n, vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res = maxOnesRow(vec);
    cout<<res<<endl;

    return 0;

}



















