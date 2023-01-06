// import java.io.*;
import java.util.Scanner;

abstract class Student {
    String firstName;
    String lastName;
    Student(){}
    Student(String fname, String lname){
        firstName = fname;
        lastName = lname;
    }
    abstract String StudentInfo();

    String getFirstName(){
        return firstName;
    }
    String getLastName(){
        return lastName;
    }
    void setFirstName(String fname){
        firstName = fname;
    }
    void setLastName(String lname) {
        lastName = lname;
    }
}

class GradStudent extends Student{
    int year;
    GradStudent(){}
    GradStudent(String fname, String lname,int y){
        super(fname,lname);
        year = y;
    }
    String StudentInfo()
    {
        return firstName+" "+lastName;
    }

    int getYear(){
        return year;
    }

    void setYear(int y){
        year = y;
    }
}

class UnderGradStudent extends Student {
    double gpa;

    UnderGradStudent(){}
    UnderGradStudent(String lname, String fname, double g){
        super(fname, lname);
        gpa = g;
    }

    String StudentInfo(){
        return firstName+" "+lastName;
    }

    double getGpa(){
        return gpa;
    }

    void setGpa(double g){
        gpa = g;
    }
}

class PartTimeStudent extends UnderGradStudent{
    int creditHours;
    PartTimeStudent(){}
    PartTimeStudent(String fname,String lname,double g, int c){
        super(lname, fname,g);
        creditHours = c;
    }

    String StudentInfo(){
        return "";
    }

    int getCreditHours(){
        return creditHours;
    }

    void setCreditHours(int c)
    {
        creditHours = c;
    }
}

class CorrespondentStudent extends Student{
    boolean state;
    CorrespondentStudent(){}
    CorrespondentStudent(String lname,String fname, boolean st){
        super(fname, lname);
        state = st;
    }

    String StudentInfo(){
        return firstName +" "+lastName;
    }

    boolean getState(){
        return state;
    }

    void setState(boolean s){
        state = s;
    }
}
public class abstract_student
{
    public static void main(String[] args)
    {
        String fname, lname;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the type of Student:");
        System.out.println("'G' for Graduate, 'U' for Undergraduate, 'C' for correspondent and 'P' for parttimestudent");
        char c = in.nextLine().charAt(0);
        switch (c) {
        case 'G':
            System.out.println("Enter the firstname,lastname and year of the student");
            fname = in.nextLine();
            lname = in.nextLine();
            int y = in.nextInt();
            GradStudent g = new GradStudent(fname, lname, y);
            System.out.println(g.StudentInfo());
            break;
        case 'U':
            System.out.println("Enter the firstname,lastname and gpa of the student");
            fname = in.nextLine();
            lname = in.nextLine();
            double gp = in.nextDouble();
            UnderGradStudent u = new UnderGradStudent(fname,lname,gp);
            System.out.println(u.StudentInfo());
            break;
        case 'C':
            System.out.println("Enter the firstname,lastname and state of the student");
            fname = in.nextLine();
            lname = in.nextLine();
            boolean s = in.nextBoolean();
            CorrespondentStudent cs = new CorrespondentStudent(fname,lname,s);
            System.out.println(cs.StudentInfo());
            break;
        case 'P':
            System.out.println("Enter the firstname,lastname and creditHours of the student");
            fname = in.nextLine();
            lname = in.nextLine();
            double d = in.nextDouble();
            int ch = in.nextInt();
            PartTimeStudent ps = new PartTimeStudent(fname,lname,d,ch);
            System.out.println(ps.StudentInfo());
            break;
       
        default:
            break;
       }

       in.close();
    }   
}
