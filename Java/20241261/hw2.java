import java.util.Scanner;

public class hw2 {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);

        int sum=0; //입력된 값의 합
        int count=0; //입력된 갑의 개수

        while(true){
            System.out.print("정수 입력 >> ");
            int input = scanner.nextInt();

            if(input==-1){
                break;
            }
            sum+=input;
            count++;
        }
        if(count>0){
            double average=(double)sum/count;
            System.out.printf("입력 받은 값의 평균은 %.0f 입니다.\n",average);
        }else{
            System.out.println("입력된 값이 없습니다");
        }
        return;
    }

}
