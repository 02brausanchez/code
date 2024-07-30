package apaloo;

public class Articulo {
    private float precio; 
    
    public void setPrecio(){
        precio = (float)3.50;
    }
    
    public void setPrecio(float nuevoPrecio){
        precio = nuevoPrecio;
    }

    public void setPrecio(float costo, int porcentajeGanancia){
        precio = costo + (costo * porcentajeGanancia);
    }

    public void setPrecio(String p){
        precio = Float.parseFloat(p);
    }
    
    /*
    public String setPrecio(int precio, float deMax){
        precio = Float.parseFloat(deMax);
    }
    */



    public float getPrecio(){
        return precio; 
    }

    public Articulo clonar(){
        Articulo aux = new Articulo(); 
        //Ambas formas son validas 
        //aux.setPrecio(precio);
        aux.precio = precio; 
        return aux; 
    }
}
