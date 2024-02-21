
public class FunctionOverload {
    public static void main(String[] args) {
       Add obj = new Add();
       Add obj1 = new Add(10, 20);
       obj.add(10, 20);
       obj.add(10.5, 20.5);
       obj.add("Hello", "World");
       obj.add(5,5);


    }
}


class Add {
    Add() {
        System.out.println("Add class constructor");
    }
    Add(int a, int b) {
        System.out.println("add constructor called"+ (a + b));
    }


    public void add(int a, int b) {
        System.out.println(a + b);
    }
    public void add(double a, double b) {
        System.out.println(a + b);
    }
    public void add(String a, String b) {
        System.out.println(a + b);
    }


   
}


