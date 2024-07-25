import java.util.Arrays;
import java.util.Random; 

public class Main {
  public static void main(String[] args) {
    int a[][]; 
    a = new int[10][5];
    Random num = new Random();
    
    
    for(int i = 0; i < a.length; i++){
       for(int j = 0; j < a[i].length; j++){
        a[i][j] = num.nextInt(100); //Almacena numeros aleatorios en la matriz

       }
    }
    //toma como parametros x[] los valores de la matriz a[i]
    for(int x[]: a){
      System.out.println(Arrays.toString(x));
    }
  }
}