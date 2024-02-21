package Assignment01;
import java.util.Scanner;
public class Table {
    public static void main(String[] args) {
        Tables t = new Tables();
        t.input();
        t.printTable();
    }
}
class Tables{
    int num;
    public void input(){
        System.out.println("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
    }   
    public void printTable() {
        for (int i = 1; i <= 10; i++) {
            System.out.println( num +" * " + i + " = " + (num* i));
        }
    }
}