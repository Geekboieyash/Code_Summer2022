import java.io.*;
abstract class Shape {
    int a,b;
    abstract void Area();
}

class Rectangle extends Shape {
    int len,bre;
    Rectangle(int l,int b)
    {
        len = l;
        bre = b;
    }
    void Area()
    {
        System.out.println("Area of Rectange: "+ (len*bre));
    }
}

class circle extends Shape {
    int radius;
    circle(int r)
    {
        radius = r;
    }
    void Area(){
        System.out.println("Area of Circle: "+ (3.14 * radius * radius));
    }
}

class triangle extends Shape {
    int l1,l2,l3;
    triangle(int a,int b,int c) {
        l1 = a;
        l2 = b;
        l3 = c;
    }
    void Area(){
        float s = (l1+l2+l3)/2;
        float temp = s*(s-l1)*(s-l2)*(s-l3);
        float area = (float) Math.sqrt(temp);
        System.out.println("Area of triangle: "+area);
    }
}


class abstract_class{
    public static void main(String[] args)throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);

        System.out.println("Enter 'R' to find area of rectange, 'T' for triangle and 'C' for circle");
        char choice = in.readLine().charAt(0);
        switch (choice) {
            case 'R':
                System.out.println("Enter the length and breadth of the Reactangle");
                int len = Integer.parseInt(in.readLine());
                int bre = Integer.parseInt(in.readLine());
                Rectangle ret = new Rectangle(len, bre);
                ret.Area();
                break;
            case 'T':
                System.out.println("Enter the length of all sides of traingle");
                int a = Integer.parseInt(in.readLine());
                int b = Integer.parseInt(in.readLine());
                int c = Integer.parseInt(in.readLine());
                triangle tr = new triangle(a, b, c);
                tr.Area();
                break;
            case 'C':
                System.out.println("Enter the radius of the circle: ");
                int r = Integer.parseInt(in.readLine());
                circle cr = new circle(r);
                cr.Area();
                break;
            default:
                break;
        }
    }
}