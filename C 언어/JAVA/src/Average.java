import java.util.Scanner;

public class Average {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num, i;
        double[] arr = new double[1000];
        double max = 0, min = 0;

        num = sc.nextInt();

        for (i = 0; i < num; i++) {
            arr[i] = sc.nextInt();

            if (max < arr[i])
                max = arr[i];
        }
        for (i = 0; i < num; i++) {
            arr[i] = arr[i] / max * 100;
            min += arr[i];
        }
        double s_num = (double) num;
        System.out.println(min / num);
    }

}


