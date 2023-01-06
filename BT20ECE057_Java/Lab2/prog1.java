// Write a program to create a class Student with data ‘name, city and age’ 
// along with method printData to display the 
// data. Create the two objects s1 ,s2 to declare and access the values.

class Student
{
    String name;
    String city;
    int age;

    void printData()
    {
        System.out.println("Name = "+name);
        System.out.println("City = "+city);
        System.out.println("Age = "+age);
    }
}
class prog1
{
    public static void main(String args[])
    {
        Student s1 = new Student();
        Student s2 = new Student();
        s1.name = "Ayush Shukla";
        s1.city = "Gopignaj";
        s1.age = 19;
        s2.name = "Vipra Nagaich";
        s2.city = "Nagpur";
        s2.age = 20;
        s1.printData();
        s2.printData();        
    }
}