// #include<iostream>
// using namespace std;
// class first {
//     public:
//     void showf()
//     {
//         cout<<"hello from first class\n";

//     }

// };
// //container class 
// class second{
//     //creating object of first
//     first f;

// public:
//     //constructor 
//     second()
//     {
//         //calling function of first class
//         f.showf();

//     }

// };
// int main()
// {
//     //creating ibject of second 
//     second s;
    
// }

// #include<iostream>
// using namespace std;
// class abc 
// {
//     int m, n;
//     public:
//     abc() { m = 0, n = 0 ;}//default constructor
//     abc(int x, int y) { m = x; n = y;} //parametrized constructor

//     void show()
//     {
//         cout << m << " " << n << endl ;
//     }
//     //overloading + operator
//     abc operator+(abc obj)
//     {
//         abc temp ;
//         temp.m = m + obj.m;
//         temp.n = n + obj.n;
//         return temp;
//     } 
// };
// int main (){


//    abc obj1(8, 9), obj2(3, 4), obj3;
//    obj3 = obj1 + obj2; // calls overloaded + operator
//    obj1.show(); // output :  8 9 
//    obj2.show(); // output :  3 4
//    obj3.show(); // output :  11 13

//    return 0;
// }


// #include<iostream>
// using namespace std;
// class abc 
// {
//     int m, n;
// public:
//     abc() 
//     {
//         m = 19;
//         n = 12;

//     }
//     void show()
//     { 
//         cout << m<< "  " << n << endl;
//     }
//         void operator --()
//         {
//             --m;
//             --n;

//         }
//     };
//     int main ()
//     {
//     abc x;
//     x.show();
//     --x; // calling overloaded decrement operator
//     x.show();
//     return 0 ;
//     }       

// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int real ,imag;
//     public:
//     Complex( int r = 0, int i = 0)
//     {
//         real = r ;
//         imag = i;

//     }
//     //this is automatically called when '+' is used with between two complex objects
//     Complex operator+ (Complex obj)
//     {
//         Complex c;
//         c.real = real + obj.real;
//         c.imag = imag+ obj.imag;
//         return c;
//     }
        
//     void print() { cout << real << " + " << imag << "i" <<endl;}

// };
// // driver code 
// int main() 
// { 
//     Complex c1(13,4), c2(21, 3);

//     //an example call to "operator+"
//     Complex c3 = c1 + c2;
//     c3.print();

// }

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    c = a/b;
    cout<<c; 
    return 0;
}
