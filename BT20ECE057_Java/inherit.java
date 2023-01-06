// method overriding 
class vechile{
    void run()
    {
        System.out.println("vechile is running"
        );
    }
}
class bike extends vechile
{
    void run()
    {
        System.out.println("Bike is running saftley");
    }
}


class inherit{
    public static void main(String args[])
    {
        bike obj = new bike();
        obj.run();

    }
}