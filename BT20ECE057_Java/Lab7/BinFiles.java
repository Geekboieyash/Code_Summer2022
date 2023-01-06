import java.io.*;

class BinFiles {
    public static void main(String[] args) throws IOException {

        String fileName = "filename.txt";
        FileOutputStream fileOutputStream = new FileOutputStream(fileName);
        ObjectOutputStream objectOutputStream = new ObjectOutputStream(fileOutputStream);
        objectOutputStream.writeInt(2000);
        objectOutputStream.writeInt(3000);
        objectOutputStream.writeInt(4000);
        objectOutputStream.close();
        System.out.println("Done Writing");
        FileInputStream fileInputStream = new FileInputStream(fileName);
        ObjectInputStream objectInputStream = new ObjectInputStream(fileInputStream);
        System.out.println(objectInputStream.readInt());
        System.out.println(objectInputStream.readInt());
        System.out.println(objectInputStream.readInt());
        System.out.println("Done Reading");
        objectInputStream.close();

    }
}