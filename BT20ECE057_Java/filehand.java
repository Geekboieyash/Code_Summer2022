import java.io.File;
import java.io.IOException;



public class filehand {
    public static void main(String args[])
    {
        try{
            File f0 = new File("newfile_1.txt");
            if(f0.createNewFile())
            {
                System.out.println("File" + f0.getName() + "is created");
            }
            else { System.out.println("File bkcd");}
        }
        catch(IOException exception)
        {
            System.out.println("Pata nahi kya bana h");
            exception.printStackTrace();
        }
    }
}
