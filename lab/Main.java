import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    // Imprime de manera seguida de 0 al 9 
    int a[]; 
    a = new int[10]; 
    for(int i = 0; i < a.length; i++){
       a[i] = i; 
    }
    /* Lo imprime pero de manera con corchetes [] y de           manera horizontalemente 
    */
    System.out.println(Arrays.toString(a));
    
    /*
    Lo imprime pero sin los corchetes  y de manera            vertical.
    */
    
    for(int i = 0; i < a.length; i++){
      System.out.println(a[i]);
    }
    // x se le toma como el nuevo valor de a[i]
    for(int x:a){
      System.out.println(x);
    }
    
  }
}