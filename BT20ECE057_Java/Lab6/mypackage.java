import ABC.*;
public class mypackage {

    
    public static void main(String[] args) {
        
        Details ob1 =new Details("Ayush Shukla", "1234567890", "IIIT Nagpur Hostel Dist. Nagpur State. Maharashtra", 20.00);
        System.out.println(ob1.Name+"\n"+ob1.Mobile_Number+"\n"+
                ob1.Address+"\n"+ob1.Age+"\n");
        
        Student ob2 = new Student("Ayush Shukla", "BT20ECE003", "ECE", 3, 5);
        System.out.println(ob2.Name+"\n"+ob2.Enrollment_Number+"\n"+
                ob2.Branch+"\n"+ob2.Year+"\n"+ob2.Semester+"\n");
        
        Customer ob3 = new Customer("Sanil","IIITN Hostel","1234567890",441100);
        System.out.println(ob3.Customer_name+"\n"+ob3.Customer_Add+"\n"+
                ob3.Customer_Number+"\n"+ob3.Pincode+"\n");
    }
    
}