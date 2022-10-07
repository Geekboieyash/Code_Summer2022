class Student{
    int roll;
    String name;
    float fee;
    static String college = "IIITN";
    Student(int r, String n, float fees)
    {
        roll = r;
        name = n;
        fee = fees;
    }
    void display() { System.out.println(roll+ " " + name + " "+ college+ " "+ fee);}
}

public class test_student {
    public static void main(String args[])
    {
        Student s1 = new Student(111, "XXX", 2000f);
        s1.display();
    }
    
}


/**
 * class Student{  
int rollno;  
String name;  
float fee;  
Student(int rollno,String name,float fee){  
rollno=rollno;  
name=name;  
fee=fee;  
}  
void display(){System.out.println(rollno+" "+name+" "+fee);}  
}  
class TestThis1{  
public static void main(String args[]){  
Student s1=new Student(111,"ankit",5000f);  
Student s2=new Student(112,"sumit",6000f);  
s1.display();  
s2.display();  
}}  
 */