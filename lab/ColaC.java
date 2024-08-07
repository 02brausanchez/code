package apaloo;

public class ColaC {
    private int tam; 
    private int [] datos; 
    private int frente; 
    private int numElementos; 

    public ColaC(int tam){
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
        datos[(frente + numElementos) % datos.length ]= dato; // Aqui cambia a la ColaA
        numElementos++;
    }

    public int desencolar(){
        if(vacia()){
            return 0;
        }
        int aux = datos[frente]; 
        frente = (frente + 1) % datos.length; // Aqui tambien esta la diferencia respecto a ColaA
        numElementos--; 
        return aux; 
    }

    public void destruir(){
        frente = numElementos = 0; 
    }

    public int espacioDisponible(){     // Se agrega este metodo para ver como actua la Cola
        return datos.length-numElementos;
    }
    
}
