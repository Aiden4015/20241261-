public class example{
    public static void main(String[] args){
        int left1=10, right1=20;
        System.out.print(++left1==11 || ++right1 ==21);
        System.out.print(left1);
        System.out.print(right1);
    }
}

/*
import java.util.Scanner;

public class example{
    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);

        // 1. 정수 입력
        System.out.print("정수 입력 >>");
        int input_number = scn.nextInt();

        //2. 0~100 사이의 값을 입력했는지 확인
        boolean result1=(input_number > 0) && (input_number<100);
        System.out.print("0과 100 사이의 값인가?"+result1);

        //3. 20의 배수인지 확인
        boolean result2 = result1 && input_number%20==0;
        System.out.print("0과 100사이의 값이고, 20의 배수인가?"+result2);
        return;
    }
}
*/