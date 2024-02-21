import java.util.*;

public class Ascii {
    
    public static void main(String[] args) {
        Convert c = new Convert();
        c.convert();
       
    }
    
}
class Convert {

    public void convert() {
        Scanner sc = new Scanner(System.in);
        char ch;
        System.out.println("Enter a character: ");
        ch = sc.next().charAt(0);
        int ascii = ch;
        System.out.println("ASCII value of " + ch + " is: " + ascii);
    }

}