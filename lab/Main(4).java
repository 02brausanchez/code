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
    
    int sum = 0; 
    for(int i = 0; i < a.length; i++){
      for(int j = 0; j < a[i].length; j++){
        sum += a[i][j];
      }
    }
    System.out.println("sum total = " + sum);
    
    for(int x[]: a){
      System.out.println(Arrays.toString(x));
    }
    System.out.println("-------------------");
    
    //Crear la matriz de salida transpuesta
    int transpuesta[][]; 
    transpuesta = new int[a[0].length][a.length];
    //imprimir 
    for(int i = 0; i < transpuesta.length; i++){
      for(int j = 0; j < transpuesta[i].length;j++){
        transpuesta[i][j] = a[j][i];
      }
    }

    for(int []x:transpuesta){
      System.out.println(Arrays.toString(x));
    }


    
  }
}