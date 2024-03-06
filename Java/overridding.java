// write a java program of method overridding



public class overridding {
    public static void main(String[] args) {
        B obj = new B();
        obj.show();
        newcalc obj1 = new newcalc();
        obj1.sum(10, 20);
        obj1.div(10, 20);
    }
 
}
class A{
    void show(){
        System.out.println("A");
    }
}
class B extends A{
    void show(){
        System.out.println("B");
    }
}

class calc{
    void sum(int a, int b){
        System.out.println("Sum is "+(a+b));
    }
    void sub(int a, int b){
        System.out.println("Sub is "+(a-b));
    }
    void mul(int a, int b){
        System.out.println("Mul is "+(a*b));
    }

}

class newcalc extends calc{
    void div(int a, int b){
        System.out.println("Div is "+(a/b));
    }
    void sum(int a, int b){
        System.out.println("Sum is "+(a+b+10));
    }
    
}