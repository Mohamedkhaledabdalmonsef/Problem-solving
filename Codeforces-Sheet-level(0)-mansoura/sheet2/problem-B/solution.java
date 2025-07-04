import java.util.Scanner;
public class solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,x;
        n = sc.nextInt();
        x = sc.nextInt();

        int num; 
        for(int i=0 ; i<n ; i++){
            num = sc.nextInt();
            if(num == x){
                System.out.println(i);
                return;
            }
        }

        System.out.println("Not Found");
    }
}