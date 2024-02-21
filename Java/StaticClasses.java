public class StaticClasses {
    
 public static void main(String[] args) {
    X.Y obj = new X.Y();
    obj.display();
    X.Z obj2 = new X().new Z();
    obj2.display();

 }
}
class X{
    
    static int a = 10;

    static class Y
    {
       
        public void display()
        {
            System.out.println("Value of a: " + a);
        }
    }

    class Z{
        public void display(){
            System.out.println("Value of a: " + a);
        }
    }


}