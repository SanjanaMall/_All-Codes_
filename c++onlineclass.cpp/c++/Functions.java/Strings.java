// import java.util.*;
// public class Strings{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         String name = sc.nextLine();
//         System.out.println("Name of the person is :" + name);
//         System.out.println("length of the string is :" + name.length());
//         for(int i=0;i<name.length();i++){
//             System.out.println(name.charAt(i));
//         }
//     }
// }

// import java.util.*;
// public class Strings{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the name1 :");
//         String name1 = sc.nextLine();
//         System.out.print("Enter the name1 :");
//         String name2 = sc.nextLine();
//         if(name1.compareTo(name2)==0){
//             System.out.print("Name1 & Name2 are equal");
//         }
//         else if(name1.compareTo(name2)>0){
//             System.out.print("Name1 is greater tha Name2");
//         }
//         else{
//             System.out.print("Name2 is greater tha Name1");
//         }
//     }
// }

// import java.util.*;
// public class Strings{
//     public static void main(String[] args){
//         String sentence = "My name is Sanjana";
//         String name = sentence.substring(11, sentence.length());
//         System.out.println(name);
//     }
// }

import java.util.*;
public class Strings{
    public static void main(String[] args){
    StringBuilder sb = new StringBuilder("Tony");
    // System.out.println(sb);  
    
    // System.out.println(sb.charAt(0));

    // sb.setCharAt(1,'i');
    // System.out.println(sb);
    // sb.insert(0,'S');
    // System.out.println(sb);
    // sb.delete(0,1);
    // System.out.println(sb);
    for( int i=1;i<sb.length()/2;i++){
        int front = i;
        int back = sb.length()-1-i;
        char frontChar = sb.charAt(front);
        char backChar = sb.charAt(back);

        sb.setCharAt(front, backChar);
        sb.setCharAt(back, frontChar);
        }
        System.out.println(sb);
    }
}