import java.util.*;
public class array{
    public static void calculateSum(int a, int b){
        int sum;
        sum = a+b;
        System.out.print("Sum of a and b is :" +sum);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of a:");
        int a = sc.nextInt();
        System.out.print("Enter the value of b:");
        int b = sc.nextInt();
        calculateSum(a,b);
    }
}
