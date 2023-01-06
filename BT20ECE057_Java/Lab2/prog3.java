// Write a Program using parameterized constructor with two 
// parameter id and name. While creating the objects obj1 and
// obj2 passed two arguments so that this constructor gets invoked
// after creation of object obj1 and obj2. 
import java.util.Scanner;
class Student3
{
    String fname;
    String lname;
    String city;
    int age;

    Student3(String fname,String lname,String city, int age)
    {
        this.fname = fname;
        this.lname = lname;
        this.city = city;
        this.age = age;
    }

    void printData()
    {
        System.out.println("Name = "+fname+" "+lname);
        System.out.println("City = "+city);
        System.out.println("Age = "+age);
    }

}
class prog3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name , City and Age space separated of 1st person");
        String fname = sc.next();
        String lname = sc.next();
        String city = sc.next();
        int age = sc.nextInt();
        Student3 obj1 = new Student3(fname,lname,city,age);
        obj1.printData();
        System.out.println("Enter Name , City and Age space separated for 2nd person");
        fname = sc.next();
        lname = sc.next();
        city = sc.next();
        age = sc.nextInt();
        Student3 obj2 = new Student3(fname,lname,city,age);
        obj2.printData();
        sc.close();
    }
}