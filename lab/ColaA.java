package apaloo;

public class ColaA {
    private int tam; 
    private int [] datos; 
    private int frente; 
    private int numElementos; 

    public ColaA(int tam){
        datos = new int[tam]; 
        frente = numElementos = 0; 
    }

    public boolean vacia(){
        return numElementos == 0; 
    }

    public boolean llena(){
        return (frente + numElementos) == datos.length; 
    }

    public void encolar(int dato){
        if(llena()){
            return;
        }
        datos[frente + numElementos] = dato;
        numElementos++;
    }

    public int desencolar(){
        if(vacia()){
            return 0;
        }
        int aux = datos[frente]; 
        frente++; 
        numElementos--; 
        return aux; 
    }

    public void destruir(){
        frente = numElementos = 0; 
    }
}
