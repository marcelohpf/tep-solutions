import java.io.IOException;
import java.util.Scanner;

public class U1199 {
  
    public static void main(String[] args) throws IOException {
 
        Scanner s = new Scanner(System.in);
        String num;
        while(true){
            num = s.next();
            if (num.equals("-1")){break;}
            else {
                if (num.length() > 2 && num.charAt(1) == 'x'){
                    num = num.substring(2);
                    System.out.println(Long.parseLong(num, 16));
                }else{
                    System.out.println("0x"+Long.toHexString(Long.parseLong(num)).toUpperCase());
                }
            }
        }
         
         
    } 
}
