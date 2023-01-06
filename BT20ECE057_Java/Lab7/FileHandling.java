import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;   // Import the FileWriter class
import java.io.IOException;  // Import the IOException class to handle errors
import java.util.Scanner; // Import the Scanner class to read text files


/*import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;*/

public class FileHandling {
  static String path = "";

  public static void main(String[] args) {
    try {
      File Obj = new File("filename2.txt");
      if (Obj.createNewFile()) {
        System.out.println("File created: "
            + Obj.getName());
      } else {
        System.out.println("File already exists.");
      }
      //
      FileWriter myWriter = new FileWriter("filename2.txt");
      myWriter.write("Files in Java might be tricky, but it is fun enough!");
      myWriter.close();
      System.out.println("Successfully wrote to the file.");
      //
      File myObj = new File("filename2.txt");
      Scanner myReader = new Scanner(myObj);
      while (myReader.hasNextLine()) {
        String data = myReader.nextLine();
        System.out.println(data);
      }
      myReader.close();
      //
      File file = new File("filename.txt");
      File file2 = file.getCanonicalFile();
      path = file2.getAbsolutePath();
      System.out.println(path);
      //printFileSizeNIO("filename");
      //
      File f1 = new File("filename2.txt"); // Creation of File Descriptor for input file
        String[] words = null; // Intialize the word Array
        FileReader fr = new FileReader(f1); // Creation of File Reader object
        BufferedReader br = new BufferedReader(fr); // Creation of BufferedReader object
        String s;
        //String input = "Java"; // Input word to be searched
        Scanner in= new Scanner(System.in);
        System.out.println("Key Word: ");
        String input = in.next();
        int count = 0; // Intialize the word to zero
        while ((s = br.readLine()) != null) // Reading Content from the file
        {
            words = s.split(" "); // Split the word using space
            for (String word : words) {
                if (word.equals(input)) // Search for the given word
                {
                    count++; // If Present increase the count by one
                }
            }
        }
        if (count != 0) // Check for count not equal to zero
        {
            System.out.println("The given word is present for " + count + " Times in the file");
        } else {
            System.out.println("The given word is not present in the file");
        }
        br.close();
        in.close();
    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    } 
  }
}