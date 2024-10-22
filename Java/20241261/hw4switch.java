import java.util.Scanner;
public class hw4switch {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);

        System.out.print("달을 입력하세요(1~12) >> ");
        int month = scanner.nextInt();

        switch(month){
            case 4:
                System.out.println("봄");
                break;
            case 5: case 6: case 7: case 8: case 9:
                System.out.println("여름");
                break;
            case 10:
                System.out.println("가을");
                break;
            case 11: case 12: case 1: case 2: case 3:
                System.out.println("겨울");
                break;
            default:
                System.out.println("잘못입력하셨습니다");
                break;
        }
        return;
    }
}
