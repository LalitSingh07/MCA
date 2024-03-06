// display the execution of multi level inheritance in the following program
// display the order of execution of the constructors and methods in multi level inheritance

public class multilevel {
public static void main(String[] args) {
    // level1 obj1 = new level1();
    // level2 obj2 = new level2();
    // level3 obj3 = new level3();
    // level4 obj4 = new level4();
    level1 obj6 = new level1();
    level4 obj5 = new level4(10,20);


}
    
}

class level1{
    level1(){
        System.out.println("level 1 is called");
    }
   
    level1(int a, int b){
        System.out.println("level 1 is called");
        System.out.println("values are "+a+" "+b);
    }

}
class level2 extends level1{
    level2(){
        System.out.println("level 2 is called");
    }
     
    level2(int a, int b){
        super(a,b);
        System.out.println("level 2 is called");
        System.out.println("values are "+a+" "+b);
    }
}
class level3 extends level2{
    level3(){
        
        System.out.println("level 3 is called");
    }
    level3(int a, int b){
        super(a,b);
        System.out.println("level 3 is called");
        System.out.println("values are "+a+" "+b);
    }
}
class level4 extends level3{
    level4(){
        System.out.println("level 4 is called");
    }
    level4(int a, int b){
        super(a,b);
        System.out.println("level 4 is called");
        System.out.println("values are "+a+" "+b);
    }
}