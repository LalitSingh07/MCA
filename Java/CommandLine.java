public class CommandLine {
    static int num1,num2,Ans;  
    public static void main(String[] args) {
        String str1; 
        num1 = Integer.parseInt(args[0]);
        num2 = Integer.parseInt(args[1]);
        Ans = num1 + num2;
        str1 = String.valueOf(Ans);
        System.out.println(str1);
        System.out.println("Sum of " + num1 + " and " + num2 + " is " + str1);
    }
}
