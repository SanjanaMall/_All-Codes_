// // Online C++ compiler to run C++ program online
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b;
//     try 
//     {
//         if(b!=0)
//         {
//             c = a/b;
//             cout<<c;
//         }
//         else
//         {
//             throw b;
            
// }
// }
//         catch(int d)
//         {
//             cout<<"divide by "<<d;
            
//         }
//         return 0;
// }

// #include<iostream>
// using namespace std;
// class demo{
// };
// int main()
// {
//     try {
//         throw demo();

//     }
//     catch (demo d) {
//         cout<< " caught exception of class \n";
//     }
// }

#include<iostream>
using namespace std;

class A {
    public :
    void show()
    { 
        cout<< " Hello from A \n ";
    }
};
class B : public A {
};
class C : public A {
};
class D : public B, public C {
};
int main()
{
    D object;
    object.show();
    
}