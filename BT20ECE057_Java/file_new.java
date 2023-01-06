import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;   
import java.io.IOException;  
import java.util.Scanner; 


public class file_new {
    static String path = "";
    public static void main(String[] args)
    {
        try{
           FileWriter myWriter = new FileWriter("newFile.txt");
           myWriter.write("hello this is yash mishra learning file handling");
           myWriter.close();
           File myObj = new File("newFile.txt");
           
      Scanner myReader = new Scanner(myObj);
      // loop  to read data of file 
      while (myReader.hasNextLine()) {
        String data = myReader.nextLine();
        System.out.println(data);
      }
      myReader.close();

      File file = new File("newFile.txt");
      File file2 = file.getCanonicalFile();
      path = file2.getAbsolutePath();
      System.out.println(path);
      //
      File f1 = new File("newFile.txt"); 
        String[] words = null; 
        FileReader fr = new FileReader(f1); 
        BufferedReader br = new BufferedReader(fr); 
        String s;

        // program to take input word from user to find the word:
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the word to search :");
        String input = in.nextLine();

        int count = 0; 
        while ((s = br.readLine()) != null) 
        {
            words = s.split(" "); 
            for (String word : words) {
                if (word.equals(input)) 
                {
                    count++; 
                }
            }
        }
        if (count != 0) 
        {
            System.out.println("The given word is present for " + count + " Times in the file");
        } else {
            System.out.println("The given word is not present in the file");
        }
        }catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
    }
}