package Assignment01;
import java.util.*;

public class Calculator {
    
    public static void main(String[] args) {
        InnerCalculator c = new InnerCalculator();
        c.input();
        System.out.println("1. Add\n2. Subtract\n3. Multiply\n4. Divide");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your choice: ");
        int choice = sc.nextInt();
        switch(choice){
            case 1:
                c.add();
                break;
            case 2:
                c.subtract();
                break;
            case 3:
                c.multiply();
                break;
            case 4:
                c.divide();
                break;
            default:
                System.out.println("Invalid choice");
        }
        
       
        
    }
}

 class InnerCalculator {

    int num1, num2;
    Scanner sc = new Scanner(System.in);
        public void input(){
            System.out.println("Enter two numbers: ");
            num1 = sc.nextInt();
            num2 = sc.nextInt();

        }
      public void add(){
          System.out.println("Sum of " + num1 + " and " + num2 + " is: " + (num1 + num2));
      }
    public void subtract(){
        System.out.println("Difference of " + num1 + " and " + num2 + " is: " + (num1 - num2));
    }
    public void multiply(){
        System.out.println("Product of " + num1 + " and " + num2 + " is: " + (num1 * num2));
    }
    public void divide(){
        if(num2 == 0){
            System.out.println("Cannot divide by zero");
            return;
        }else{

            System.out.println("Quotient of " + num1 + " and " + num2 + " is: " + (num1 / num2));
        }

        
    }

}
    
