import java.util.Scanner;
public class hw5 {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        
        System.out.print("정수 입력 > ");
        int sum=scanner.nextInt();

        for(int i=sum;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        return;
    }
}
