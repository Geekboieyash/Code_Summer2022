import java.util.Scanner;

class Employee{
    String name;
    String address;
    String phoneNumber;
    String experience;

    Employee(String n,String a,String phone,String exp){
        name = n;
        address = a;
        phoneNumber = phone;
        experience = exp;
    }
}

class Programmer extends Employee{

    private String programmingLanguages[];
    int len;
    Programmer(String n, String a, String phone, String exp,String[] programmingLang ) {
        super(n, a, phone, exp);
        len = programmingLang.length;
        programmingLanguages = new String[len];
        for(int i = 0;i < programmingLang.length;i++)
            programmingLanguages[i] = programmingLang[i];
    }

    void writeCode()
    {
        System.out.println("Hello World");
        System.out.println("Name: " + super.name);
    }
}

class Manager extends Employee{
    int teamSize;
    Manager(String n, String a, String phone, String exp, int teamsize) {
        super(n, a, phone, exp);

        teamSize = teamsize;
    }

    void reportProjectStatus(){
        System.out.println("The project is going well and will be completed sool");
    }
       
}


class inheritance{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Job Description. 'P' for programmer and 'M' for Manager");
        char c = in.nextLine().charAt(0);
        switch(c)
        {
            case 'P':
                System.out.println("Enter name,address,phonenumber,experinece and programming languages known by Programmer");
                String name = in.nextLine();
                String address = in.nextLine();
                String phoneNum = in.nextLine();
                String exp = in.nextLine();
                int n = in.nextInt();
                in.nextLine();
                String[] lang = new String[n];
                for(int i = 0;i < n;i++)
                    lang[i] = in.next();
                
                Programmer obj = new Programmer(name,address,phoneNum,exp,lang);
                obj.writeCode();
                break;
            case 'M':
                System.out.println("Enter name,address,phonenumber,experinece and team size of the Manager");
                String nameM = in.nextLine();
                String addressM = in.nextLine();
                String phoneNumM = in.nextLine();
                String expM = in.nextLine();
                int teamSize = in.nextInt();

                Manager ob = new Manager(nameM, addressM, phoneNumM,expM , teamSize);

                ob.reportProjectStatus();
                break;
            default:
                System.out.println("Wrong Job Post");
                break;
        }
        in.close();
    }
}