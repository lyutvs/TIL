import java.util.Scanner; //모듈 삽입

public class Test {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);    // 인스턴스 생성, 객채 생성

        String name;  // c 에서 int 처럼 변수 선   언 String 문자열
        int num1;   // 숫자 변수 선언 int

        System.out.print("이름을 입력하세요 : ");   //표준 입출력 클래스
        name = sc.next();   // name 에 문자열 받음

        System.out.println(); //좀더 깔끔하게 출력
        System.out.print("학번을 입력하세요 : "); //학번을 입력 하세요 라는 문장을 출력
        num1 = sc.nextInt();    //num1 안에 학번 받음

        System.out.println("당신의 이름은 " + name + " 입니다."); //아까 name 에     저장한 문자열 출력
        System.out.println("당신의 학번은 " + num1+ "입니다.");      //아까 num1 에 저장한 학번 출력
    }
}