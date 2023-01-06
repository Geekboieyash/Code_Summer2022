// Write a program to create a class Student2 along with two method getData(),printData() to get the value through 
// argument and display the data in printData. Create the two objects s1 ,s2 to declare and access the values from 
// class STtest.
import java.util.Scanner;
class Student2
{
    String fname;
    String lname;
    String city;
    int age;

    void getData()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name , City and Age space separated");
        fname = sc.next();
        lname = sc.next();
        city = sc.next();
        age = sc.nextInt();
        sc.close();
    }

    void printData()
    {
        System.out.println("Name = "+fname+" "+lname);
        System.out.println("City = "+city);
        System.out.println("Age = "+age);
    }
}

class prog2
{
    public static void main(String args[])
    {
        Student2 s1 = new Student2();
        s1.getData();
        s1.printData();
        Student2 s2 = new Student2();
        s2.getData();
        s2.printData();        
    }
}