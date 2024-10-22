import java.util.Scanner;
public class example {
    @SuppressWarnings({"UnnecessaryReturnStatement", "ManualArrayToCollectionCopy"})
    public static void main(String[] args){
        
        //5명의 외국어 점수를 입력하는 배열을 생성
        int[] score = new int[5];
        Scanner sc = new Scanner(System.in);

        for(int i=0;i<score.length;i++){
            System.out.print(i+"번째 학생의 외국어 점수 입력 >> ");
            score[i]=sc.nextInt();
        }
        
        //입력받은 외국어 점수 출력
        for(int i=0;i<score.length;i++){
            System.out.println(i+"번째 학생의 외국어 점수 :  "+score[i]);
        }
        //10명으로 외국어 점수 입력 학생이 늘어남.
        int[] extended_score=new int[score.length*2];
        //기존 5명에 대한 데이터 복사
        for(int i=0;i<score.length;i++){
            extended_score[i]=score[i];
        }
        //추가된 5명에 대한 데이터 입력
        for(int i=score.length;i<extended_score.length;i++){
            System.out.print(i+"번째 학생의 외국어 점수 입력>>");
            extended_score[i]=sc.nextInt();
        }
        //입력받은 외국어 점수 출력
        for(int i=0; i<extended_score.length;i++){
            System.out.print(i+"번째 학생의 외국어 점수 : "+extended_score[i]);
        }
        return;
    }
}
