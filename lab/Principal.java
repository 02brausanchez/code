package apaloo;

public class Principal {
    public static void main(String[] args) {
        Articulo oArticulo; 
        Articulo pan; 

        oArticulo = new Articulo(); // Se crea el objeto de la clase Articulo 
        pan = oArticulo; // Se esta haciendo una referencia al mismo objeto  y esto se le llama clonar    
        
        // Para clonar que sea distinto de referencia 
        pan = oArticulo.clonar();

        oArticulo.setPrecio((float)10.0);
        oArticulo.setPrecio("20.2");
        
        //Ambos apuntan a lo mismo
        System.out.println(oArticulo + " " + pan);
        oArticulo.setPrecio("20.2");
        System.out.println(pan.getPrecio());
        System.out.println(oArticulo.getPrecio());
        



    }
}
