import java.util.Scanner;

public class Leapyear {
    public static void Leapyear(String[] args) {
        Scanner in = new Scanner(System.in);    //객채 생성

        int y = in.nextInt();
        in.close();

        if (y % 4 == 0) {
            if (y % 400 == 0) System.out.println("1");
            else if (y % 100 == 0) System.out.println("0");
            else System.out.println("1");
        }
        else System.out.println("0");
    }
}
