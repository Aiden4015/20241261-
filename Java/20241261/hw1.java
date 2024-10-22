import java.util.*;

public class hw1{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("금액을 입력하세요 >>> ");
        int money=scanner.nextInt();

        int 오만원 = money/50000;
        money %=50000;
        int 만원 = money/10000;
        money %=10000;
        int 오천원 = money/5000;
        money %=5000;
        int 천원 = money/1000;
        money %=1000;
        int 오백원 = money/500;
        money %=500;
        int 백원 = money/100;
        money %=100;
        int 오십원 = money/50;
        money %=50;
        int 십원 = money/10;
        money %=10;
        int 일원 = money;

        System.out.println("오 만원권 : "+오만원+"장");
        System.out.println("만 원권 : "+만원+"장");
        System.out.println("오천 원권 : "+오천원+"장");
        System.out.println("천 원권 : "+천원+"장");
        System.out.println("오백 원 동전 : "+오백원+"개");
        System.out.println("백 원 동전 : "+백원+"개");
        System.out.println("오십 원 동전 : "+오십원+"개");
        System.out.println("십 원 동전 : "+십원+"개");
        System.out.println("일 원 동전 : "+일원+"개");

        return;
    }
}