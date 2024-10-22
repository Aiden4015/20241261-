import java.util.Scanner;

public class hw3 {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);

        int x1=100, x2=100;
        int y1=200, y2=200;

        System.out.print("x좌표를 입력하세요 >> ");
        int x=scanner.nextInt();

        System.out.print("y좌표를 입력하세요 >> ");
        int y=scanner.nextInt();

        if(x>=x1&&x<=x2 && y>=y1&&y<=y2){
            System.out.printf("(%d,%d)은 사각형 안에 있습니다.",x,y);
        }else{
            System.out.printf("(%d,%d)은 사각형 안에 없습니다.",x,y);
        }
        return;
    }    
}
