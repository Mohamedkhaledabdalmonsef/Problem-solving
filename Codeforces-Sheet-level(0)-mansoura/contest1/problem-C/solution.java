import java.util.Scanner;

public class solution{

    public static void main(String []args){
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt(); 
        String s = cin.next();
       // char[] arr =s.toCharArray();
        
        int sum_A=0;
        int sum_D=0;
        for(int i=0 ; i< n; i++){
            if(s.charAt(i)=='A') sum_A++;
            if(s.charAt(i)=='D') sum_D++;
        }

        System.out.println(sum_A >sum_D ? "Anton" : sum_D>sum_A? "Danik" :"Frindship");









        cin.close();

    }

}