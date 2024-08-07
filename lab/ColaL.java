package apaloo;

class Nodo{
    int dato; 
    Nodo sig; 

    public Nodo(int dato){
        this.dato = dato; 
        this.sig = null; 
    }
}


public class ColaL {
    private Nodo frente; 
    
    public ColaL(){
        frente = null; 
    }

    public boolean vacia(){
        return frente == null; 
    }

    public boolean llena(){
        return false; // porque siempre estara lleno de caso contrario sera false
    }
    
    public void encolar(int dato){
        if(frente == null){
            frente = new Nodo(dato); 
            return; 
        }
        Nodo ultimo; 
        for(ultimo = frente; ultimo.sig != null; ultimo = ultimo.sig){
            ultimo.sig = new Nodo(dato); 
        }
    }

    public int desencolar(){
        if(frente == null){
            return 0; 
        }
        int aux = frente.dato; 
        frente = frente.sig; 
        return aux; 
    }

    public void destruir(){
        frente = null; 
    }

    public int espacioDisponible(){
        return 1; 
    }
}
