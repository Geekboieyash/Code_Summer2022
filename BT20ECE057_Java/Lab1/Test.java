// This is program to test whether inputed number is Armstrong number or not.
import java.util.Scanner; 
public class Test { 
    public static void main(String[] args) { 
        int num; 
        Scanner sc=new Scanner(System.in); 
        num=sc.nextInt(); 
        int n = num; //use to check at last time 
        int check=0,remainder; 
        while(num > 0){ 
            remainder = num % 10; 
            check = check +(remainder*remainder*remainder) ; 
            num = num / 10; 
        } 
        if(check == n) 
            System.out.println(n+" is an Armstrong Number"); 
        else 
            System.out.println(n+" is not a Armstrong Number");
        sc.close(); 
    } 
 }