// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// //base class
// class Animal {
//     public :
//      void info(){
//          cout << "An animal."<<endl;
//      }
// };
// //derived class 2
// class Dog : public Animal {
//     public :
//     void bark(){
//         cout << "A Dog."<<endl;
    
//     }
// };
// //derived class 2
// class Cat : public Animal {
//     public :
//     void meow(){
//         cout << "A Cat."<<endl;
    
//     }
// };
// int main (){
//     //create object of Dog class 
//     Dog dog1;
//     cout << "Dog class :" <<endl;
//     dog1.info();//Parent Class function 
//     dog1.bark();
    
//     //cretae object of cat class 
//     Cat cat1;
//     cout <<"\n Cat Class :" <<endl;
//     cat1.info();
//     cat1.meow();
//     return 0;
    
    
// }


// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     //creating an empty list of integers
//     list<int>mylist;
//     //inserting elements into the list
//     mylist.push_back(10);
//     mylist.push_back(20);
//     mylist.push_back(30);
//     mylist.push_back(40);
//     //Displaying the elemets in the list
//     cout<<"Element in the llist:";
//     for (auto& element : mylist){
//         cout << element << "  ";
//     }
//     cout <<std::endl;
//     //inserting an element at the beginning 
//     mylist.push_front(5);

//     //Removing an element from the lsit
//     mylist.pop_back();

//     //Displaying the modified list 
//     cout<< "Modified list:" ;
//     for (auto& element : mylist){
//         cout<<element<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     //creating an empty list of integers
//     stack<int>myStack;
//     //inserting elements into the list
//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);
//     myStack.push(40);
//     //Displaying the elemets in the satck
//     cout<<" Top element in the stack:" <<myStack.top() <<endl;

//     //Popping an elements fro the stack
//     myStack.pop();
//     //Displaying the elements in the stack
//     cout << "element in the stack:" ;
//     while(!myStack.empty()){
//         cout <<myStack.top() << " ";
//         myStack.pop();
//     }
//     cout <<endl;
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //creating an empty queue of integers
//     queue<int>myQueue;
//     //Emquering elements into the queue
//     myQueue.push(10);
//     myQueue.push(20);
//     myQueue.push(30);
//     myQueue.push(40);

//     //Displaying the front element of the queue
//     cout<<"Front element of the queue : "<<myQueue.front()<<endl;
//     cout<<"Back element of the queue : "<<myQueue.back() <<endl;

//     //Dequeuing an element in the queue
//     myQueue.pop();

//     //Displaying the element in the queue
//     cout << "Element in the queue :";
//     while(! myQueue.empty()){
//         cout << myQueue.front()<< " ";
//         myQueue.pop();
//     }
//     return 0;
// }


// //C++ program to demonstrate the basic working of STL
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<char>a;
//     a.insert('G');
//     a.insert('F');
//     a.insert('G');
//     for (auto& str : a) {
//         cout<<str<<' ';

//     }
//     cout << '\n';
//     return 0;

// }

// //C++ program to demonstrate the creation of descending
// //order set container
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){

//     set<int, greater<int>>s1;
//     s1.insert(10);
//     s1.insert(5);
//     s1.insert(12);
//     s1.insert(4);
//     for (auto i : s1) {
//         cout<<i<<' ';

//     }
//     cout << '\n';
//     return 0;

// }

// #include<iostream>
// #include<map>
// using namespace std;
// int main() {
//     //Creating a map with keys of type int and values of type sting
//     map<int,string>myMap;
//     //Inserting elements into the map using insert function
//     myMap.insert(make_pair(1, "Apple"));
//     myMap.insert(make_pair(2, "Mango"));
//     myMap.insert(make_pair(3, "Orange"));

//     //Accessing elements using[] operator
//     cout<<"Value at key 2:" <<myMap[2]<<endl;

//     //Iterating through the map
//     cout << " Iterating through the map:" <<endl;
//     for(auto& pair : myMap){
//         cout <<"Key :" <<pair.first <<",Value:" <<pair.second <<endl;
//        }
//        //Erasing elements from the map
//        myMap.erase(2);
//        //Checking the size of the map
//        cout <<"Size of amp after erasing: " <<myMap.size()<<endl;
//        return 0;
    
//     }

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int, string> student;

//     //use [] operator to add elements
//     student[1] = "A";
//     student[2] = "A";


//     //use [] operator to add elements
//     student.insert(make_pair(3, "C"));
//     student.insert(make_pair(4, "D"));

//     //add elemnets with duplicate keys
//     student[5] = "E";
//     student[5] = "F";

//     for (int i = 1; i <=student.size(); ++i){
//         cout << "Student["<<i<<"]:"<<student[i] << endl;

//     }
//     return 0;

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     //Declaration of a vector of integers
//     vector<int>myVector;

//     myVector.push_back(3);
//     myVector.push_back(7);
//     myVector.push_back(11);
//     cout<<"Elements in the vector: ";
//     for(int element : myVector){
//         cout << element <<" " ;

//     }
//     cout << endl;
//     int sum = 0;
//     for(int element : myVector){
//         sum += element;
//     }

//     cout << "Sum of elements: " << sum <<endl;
//     return 0;

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     //Creating a vector of integers
//     vector<int> numbers = {5, 2, 9, 12, 14, 1, 5, 0};
//     //Sorting the vector using std:: sort algorithm
//     sort(numbers.begin(), numbers.end());

//     //Displaying the sorted vector
//     cout<<"Sorted numbers :";
//     for(int num : numbers){
//         cout << num <<" ";

//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<numeric> //Required for std :: accumulate
// using namespace std;
// int main(){
//     //Creating a vector of integers
//     vector<int> numbers = {5, 2, 9, 12, 14, 1, 5, 0};
//     //Calculating the sum of elements using std:: accumulate algorithm
//     int sum = accumulate(numbers.begin(), numbers.end(), 0);
    
//     //Displaying the sorted vector
//     cout<<"Sum of elements: " << sum <<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     cerr<<"An erroe occured";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     clog<<"An erroe occured";
//     return 0;
// }

// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int num = 123;
//     double pi = 3.14159;

//     //setw manipulator to set the width of the output
//     cout<<"Number: " <<setw(12) << num <<endl;

//     //setprecision manipulator to set the precision for floating-point numbers
//     cout<<"Pi: " <<setprecision(2) << pi <<endl;

//     //using multiple manipulators together
//     cout<< "Number and Pi: " <<setw(8) <<num <<"|" << setprecision(5)<< pi <<endl;
//     return 0;

// }

// #include<iostream>
// using namespace std;

// class MyClass{
// private:
//     int value;
// public:
//     MyClass(int val)
//     {
//     value=val;
// }
//     //overloading <<operator as a member function
//     friend ostream & operator<<(ostream& os, MyClass& obj){\
//     os << "MyClass value: " <<obj.value;
//     return os;
// } 

// };
// int main(){
//     MyClass obj(42);
//     cout<<obj<<endl;//This will use the overloaded<<operator

//     return 0;
// }

#include<iostream>
using namespace std;

class MyClass {
    int value;
public:
    MyClass(int val=0) {
        value = val;
    }
    friend istream& operator>>(istream& os, MyClass& obj);
    friend ostream& operator<<(ostream& os1, const MyClass& obj);  // fixed here
};

istream& operator>>(istream& os, MyClass& obj) {
    os >> obj.value;
    return os;
}

ostream& operator<<(ostream& os1, const MyClass& obj) {  // fixed here
    os1 << obj.value;
    return os1;
}

int main() {
    MyClass t;
    cin >> t;  // uses overloaded >> operator
    cout << t; // uses overloaded << operator
    return 0;
}
