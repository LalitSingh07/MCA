public class AsciiValues {
    public static void main(String[] args) {
        
        int Zvalue = (int)'Z';
        int zvalue = (int)'z';

        for (int i = (int)'A'; i <= Zvalue; i++){
            char ch = (char)i;
            System.out.println(ch + "  : " + i);
        }
        System.out.println("-----------------------------");
        System.out.println("--------Lower Case Aplhabets---------------------");
        System.out.println("-----------------------------");

        
        for (int i = (int)'a'; i <= zvalue; i++){
            char ch = (char)i;
            System.out.println(ch + "  : " + i);
        }
    }
}
