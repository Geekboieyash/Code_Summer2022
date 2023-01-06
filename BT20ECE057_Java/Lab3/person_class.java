class Person {     
    private String name;     
    private int age;      
    public Person(String name, int age) {         
        this.name = name;         
        this.age = age;     
    }      
    public String getName() {         
        return name;     
    }      
    public void setName(String name) {         
        this.name = name;     
    }      
    public int getAge() {         
        return age;     
    }      
    public void setAge(int age) {         
        this.age = age;     
    }      
    public void display(){         
        System.out.println("Name: "+name+", Age: "+age);     
    } 
}

class Student extends Person {     
    private int rollNo;     
    private String branch;      
    public Student(String name, int age, int rollNo, String branch) {         
        super(name, age);         
        this.rollNo = rollNo;         
        this.branch = branch;     
    }      
    public int getRollNo() {         
        return rollNo;     
    }      
    public void setRollNo(int rollNo) {         
        this.rollNo = rollNo;     
    }      
    public String getBranch() {         
        return branch;     
    }      
    public void setBranch(String branch) {         
        this.branch = branch;     
    }     
    @Override     
    public void display() {         
        super.display();         
        System.out.println("Roll No: "+rollNo+", Branch: "+ branch);     
    } 
}

class Employee extends Person {      
    private String ecNo;     
    private String doj;      
    public Employee(String name, int age, String ecNo, String doj) {         
        super(name, age);         
        this.ecNo = ecNo;         
        this.doj = doj;     
    }      
    public String getEcNo() {         
        return ecNo;     
    }      
    public void setEcNo(String ecNo) {         
        this.ecNo = ecNo;     
    }      
    public String getDoj() {         
        return doj;     
    }      
    public void setDoj(String doj) {         
        this.doj = doj;    
    }      
    @Override     
    public void display() {         
        super.display();         
        System.out.println("Employee No: "+ecNo+", DOJ: "+doj);     
    } 
}

class Faculty extends Employee{     
    private String designation;      
    public Faculty(String name, int age, String ecNo, String doj, String designation) {         
        super(name, age, ecNo, doj);         
        this.designation = designation;     
    }      
    public String getDesignation() {         
        return designation;    
    }      
    public void setDesignation(String designation) {         
        this.designation = designation;     
    }     
    @Override     
    public void display() {         
        super.display();         
        System.out.println("Designation: "+designation);     
    } 
}

class Staff extends Employee{     
    private String designation;      
    public Staff(String name, int age, String ecNo, String doj, String designation) {         
        super(name, age, ecNo, doj);         
        this.designation = designation;     
    }      
    public String getDesignation() {         
        return designation;     
    }      
    public void setDesignation(String designation) {         
        this.designation = designation;     
    }      
    @Override     
    public void display() {         
        super.display();         
        System.out.println("Designation: "+designation);     } }

class person_class {
    public static void main(String[] args) {
        Person[] people = { new Person("John Doe", 24), new Employee("Jane Doe", 22, "JD880", "12/07/2010"),
                new Student("Mark Shaw", 18, 800, "Computer Science"),
                new Staff("George Stark", 40, "GS556", "06/15/2005", "Technical"),
                new Faculty("Dr. Abraham Lincoln", 47, "AL1212", "06/15/2001", "Associate Professor") };
        for (Person person : people) {
            person.display();
            System.out.println("=========================================");
        }
    }
}