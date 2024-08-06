package Ejemplos;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        Minimo_Maximo auto = new Minimo_Maximo(array, n);

        System.out.println("["+auto.numMinimo()+","+auto.numMaximo()+"]");
        sc.close();
    }
}

