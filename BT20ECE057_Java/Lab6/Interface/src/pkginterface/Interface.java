
package pkginterface;

/**
 *
 * @author CN LAB
 */
import java.io.*;
interface abc{
    String Name = "Ayush Shukla";
    String Mobile_Number = "1234567890";
    String Address = "IIIT Nagpur Hostel";
    Double Age = 20.00;
    
    void PrintDetails();
}
public class Interface implements abc {
    public void PrintDetails(){
        System.out.println(Interface.Name +"\n"+
                Interface.Mobile_Number +"\n"+
                Interface.Address +"\n"+
                Interface.Age +"\n");
    }
    public static void main(String[] args) {
        Interface Ob1 = new Interface();
        Ob1.PrintDetails();
    }
    
}
