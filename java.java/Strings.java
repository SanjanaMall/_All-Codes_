//import java.util.*;
// public class Strings {
//     public static void main(String[] args){
//         StringBuilder sb = new StringBuilder("Sanjana");
//         System.out.println(sb.charAt(0));
//         sb.setCharAt(0,'R');
//         System.out.println(sb);
//         sb.insert(2,'N');
//         System.out.println(sb);
//         sb.delete(0,1);
//         System.out.println(sb);
//         sb.setCharAt(0,'S');
//         System.out.println(sb);
//     }
// }

// import java.util.*;
// public class Strings{
//     public static void main(String[] args){
//         StringBuilder sb = new StringBuilder("sanjana");
//         for(int i=0;i<sb.length()/2;i++){
//             int front = i;
//             int back = sb.length()-1-i;
//             char frontChar = sb.charAt(front);
//             char backChar = sb.charAt(back);
//             sb.setCharAt(front, backChar);
//             sb.setCharAt(back, frontChar);
//         }
//         System.out.println(sb);
//     }
// }

// import java.util.*;
// public class Strings{
//     public static void main(String [] args){
//         int n=11;
//         int pos = 2;
//         int bitMask = 1<<pos;
//         if((bitMask & n)==0){
//             System.out.println("bit is zero");
//         }else{
//             System.out.println("bit is one");
//         }
//     }
// }

// import java.util.*;
// public class Strings{
//     public static void main(String [] args){
//         int n=8;
//         int pos = 1;
//         int bitMask = 1<<pos;
//         int newNumber = bitMask | n;
//         System.out.println(newNumber);
//     }
// }

// import java.util.*;
// public class Strings{
//     public static void main(String[] args){
//         int n = 5;
//         int pos = 2;
//         int bitMask = 1<<pos;
//         int notBitMask = ~(bitMask);
//         int newNumber = notBitMask & n;
//         System.out.println(newNumber);
//     }
// }

import java.util.*;
public class Strings{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int oper = sc.nextInt();
        int n= 5;
        int pos = 1;

        int bitMask = 1<<pos;
        if(oper ==1){
            int newNumber = bitMask | n;
            System.out.println(newNumber);
        }else{
            int newBitMask = ~(bitMask);
            int newNumber = newBitMask & n;
            System.out.println(newNumber);
        }
    }
}