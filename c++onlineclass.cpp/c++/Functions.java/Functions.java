//import java.util.*;
//public class Functions {
//     public static void printMyName(String name){
//         System.out.println(name);
//         return;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         String name = sc.next();
//         printMyName(name);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static int calculateSum(int a,int b){
//     System.out.println(sum);
//     int sum = a+b;
//     return sum;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int a=sc.nextInt();
//         int b=sc.nextInt();
//         int sum = calculateSum(sum);
//         System.out.println(sum);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static int calculateProduct(int a, int b){
//         return a*b;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int a=sc.nextInt();
//         int b=sc.nextInt();
//         System.out.println(calculateProduct(a,b));
//     }
// }

// import java.util.*;
// public class Functions{
//     public static int calculateFactorial(int n){
//         if(n<0){
//         System.out.println("Invalid number");
//         return;
//         }
//         int fact =1;
//         for(int i=n;i>=1;i--){
//         fact=fact*i;
//         }
//         System.out.print(fact);
//         return fact;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n=sc.nextInt();
//         calculateFactorial(n);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void NumberisPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             System.out.print("Number is not prime");
//             return;
//             }
//         }
//         System.out.print("Number is prime");
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n=sc.nextInt();
//         NumberisPrime(n);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void numberIsEven(int n){
//             if(n%2==0){
//                 System.out.println("Number is even");
//                 return;
//             }
//             System.out.println("Number is odd");
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         numberIsEven( n);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void tableOfNumber(int n){
//         for(int i=1;i<=10;i++){
//             int table = n*i;
//             System.out.println(table);
//         }
//         return;
//     }
//     public static void main(String[] args){
//         Scanner sc= new Scanner(System.in);
//         int n = sc.nextInt();
//         tableOfNumber(n);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void average(int a, int b, int c){
//         int average = (a+b+c)/3;
//         System.out.println("The avrage of three numbers is :"+ average);
//     return;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the 1st number:");
//         int a=sc.nextInt();
//         System.out.print("Enter the 2nd number:");
//         int b=sc.nextInt();
//         System.out.print("Enter the 3rd number:");
//         int c=sc.nextInt();
//         average(a,b,c);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void sumOfOdd(int n){
//         int sum = 0;
//         for(int i=1;i<=n;i++){
//             if(i%2!=0){
//             sum = sum + i;
//             }
//         }
//         System.out.print(sum);
//         return;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         sumOfOdd(n);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void greateroftwo(int a, int b){
//         if(a>b){
//             System.out.println("A is greater");
//         }
//         System.out.println("B is greater");
//         return;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a:");
//         int a = sc.nextInt();
//         System.out.print("Enter b:");
//         int b = sc.nextInt();
//         greateroftwo(a,b);
//     }
// }

//Write a function that takes in the radius as input and returns the circumference of a circle.
// import java.util.*;
// import java.lang.*;
// public class Functions{
//     public static double circumference(int r){
//     return 2*Math.PI*r;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int r = sc.nextInt();
//         double c= circumference(r);
//         System.out.println("circumference"+c);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static int eligibilty(int age){
//         if(age>18){
//             System.out.println("You are eligible to cast your vote");
//         }else{
//             System.out.println("You are not eligible to cast your vote");
//         }
//         return age;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int age = sc.nextInt();
//         eligibilty(age);
//     }
// }

// public class Functions{
//     public static void main(String[] args){
//         do{
//             System.out.println("This will print forever.");
//         }while(true);
//     }
//}

// import java.util.*;
// public class Functions{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int positiveCount=0;
//         int negativeCount=0;
//         int zeroCount=0;
//         char choice;
//         do{
//             System.out.print("Enter a number:");
//             int num=sc.nextInt();
//             if(num>0){
//                 positiveCount++;
//             }else if(num<0){
//                 negativeCount++;
//             }else{
//                 zeroCount++;
//             }
//             System.out.print("Do you want to continue?(y/n):");
//             choice = sc.next().charAt(0);
//         }while(choice == 'y'|| choice =='Y');
//         System.out.println("\nCount of positive numbers:" +positiveCount);
//         System.out.println("\nCount of negative numbers:" +negativeCount);
//         System.out.println("\nCount of zero numbers:" + zeroCount);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void powerofNumber(int x, int n){
//         int power = 1;
//         for(int i=1;i<=n;i++){
//             power = power*x;
//         }
//         System.out.print("The value of n raised to x is: "+ power);
//         return;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number:");
//         int x = sc.nextInt();
//         System.out.print("Enter the power to be raised:");
//         int n = sc.nextInt();
//         powerofNumber(x,n);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static int findGCD(int a, int b){
//         while(b!=0){
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the first number:");
//         int num1 = sc.nextInt();
//         System.out.print("Enter the second number:");
//         int num2 = sc.nextInt();
//         int gcd = findGCD(num1, num2);
//         System.out.println("GCD of "+ num1 + " and " + num2 +" is " +gcd);
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number of terms:");
//         int n = sc.nextInt();
//         int a=0,b=1;
//         System.out.print("Fibonacci series : ");
//         for(int i=1;i<=n;i++){
//             System.out.print(a + " ");
//             int next = a + b;
//             a = b;
//             b = next;
//         }
//         sc.close();
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int size = sc.nextInt();
//         int numbers[]= new int[size];
//         for(int i=0;i<size;i++){
//             numbers[i]=sc.nextInt();
//         }
//         //int marks[] = new int[];
//         // marks[0]=98;
//         // marks[1]=95;
//         // marks[2]=93;
//         // marks[3]=98; 
//         // marks[4]=97;
//         // System.out.println(marks[0]);
//         // System.out.println(marks[1]);
//         // System.out.println(marks[2]);
//         // System.out.println(marks[3]);
//         // System.out.println(marks[4]);
//         for(int i=0;i<size;i++){
//             System.out.println(numbers[i]);
//         }
//     }
// } 

// import java.util.*;
// public class Functions{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int size = sc.nextInt();
//         int numbers[]= new int[size];
//         for(int i=0;i<size;i++){
//             numbers[i]=sc.nextInt();
//         }
//         System.out.print("enter the number to search:");
//         int x = sc.nextInt();
//         int i;
//         for(i=0;i<numbers.length;i++){
//             if(numbers[i]==x){
//                 System.out.println("x found at imdex : "+i);
//             }
//         }
//         if(i==numbers.length){
//             System.out.println("x not found in the array:");
//         }
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int rows = sc.nextInt();
//         int cols = sc.nextInt();
//         int[][] numbers = new int[rows][cols];
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 numbers[i][j]=sc.nextInt();
//             }
//         }
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 System.out.print(numbers[i][j] + " ");
//             }
//             System.out.println();
//         }
//     }
// }

// import java.util.*;
// public class Functions{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int rows = sc.nextInt();
//         int cols = sc.nextInt();
//         int numbers[][] = new int[rows][cols];
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 numbers[i][j]=sc.nextInt();
//             }
//         }
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 System.out.print(numbers[i][j]+" ");
//             }
//             System.out.println();
//         }
//         int x = sc.nextInt();
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 if(numbers[i][j]==x){
//                     System.out.print("x found at (" + i + "," + j + ")");
//                 }
//             }
//         }
//     }
// }
