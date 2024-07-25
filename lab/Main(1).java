import java.util.Arrays;
import java.util.Random; 

public class Main {
  public static void main(String[] args) {
    int a[][]; 
    a = new int[10][5];
    
    for(int i = 0; i < a.length; i++){
       for(int j = 0; j < a[i].length; j++){
        a[i][j] = i; 
       }
    }
    System.out.println(Arrays.toString(a));

    for(int i = 0; i < a.length; i++){
      for(int j = 0; j < a[i].length; j++){
        System.out.print(a[i][j]);
      }
    }    
  }
}