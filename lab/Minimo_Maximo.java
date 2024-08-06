package Ejemplos;
public class Minimo_Maximo {
    private int n;
    private int numMinimo;
    private int numMaximo;
    private int[] array;

    public Minimo_Maximo(int[] array, int n) {
        this.n = n;
        this.array = array;
        this.numMinimo = Integer.MAX_VALUE;
        this.numMaximo = Integer.MIN_VALUE;
    }


    public int numMinimo() {
        for (int i = 0; i < n; i++) {
            if (array[i] < numMinimo) {
                numMinimo = array[i];
            }
        }
        return numMinimo;
    }

    public int numMaximo(){
        for(int i = 0; i < n; i++){
            if(array[i] > numMaximo){
                numMaximo = array[i];
            }
        }
        return  numMaximo;
    }
}
