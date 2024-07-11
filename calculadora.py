# hacer una calculadora teniendo las bases antes vistas 
print("=====================================================")
print("Menu")
print("1. Saber la suma de n numeros")
print("2.- Saber la tabla de multiplicacion de cierto numero")
print("=====================================================")

opcion = int(input("Ingresa alguna opcion: "))
   
if opcion == 1:
    def suma(numero): 
        sumatotal = 0
        for i in range(numero): 
            numeros_a_sumar = int(input(f"ingresa el valor  del numero {i+1}: ")) 
            sumatotal += numeros_a_sumar
        return sumatotal
    
    print("Excelente haz elegido la suma de n numeros: ")
    print(" ")
    numero = int(input("¿Dime cuantos numeros quieres sumar? "))
    resultado_suma = suma(numero)
    print(f"La suma total es : {resultado_suma}")


if opcion == 2: 
    def multi(valor): 
        limite_inicial = int(input("Dame el valor de tu limite inicial: ")) 
        limite_final = int(input("Dame el valor de tu limite final: "))
    
        while limite_inicial >= limite_final: 
            print("La entrada no es valida! ")
            print("Ingresa los limites de menor a mayor: ")
            limite_inicial = int(input("Dame el valor de tu limite inicial: ")) 
            limite_final = int(input("Dame el valor de tu limite final: "))
    
        for i in range(limite_inicial, limite_final+1): 
            print(f"{valor} x {i} = {valor*i:2}")

    print("Excelente haz elegido la tabla de multiplicacion dado un numero:")
    print(" ")
    valor = int(input("De que numero quieres saber su tabla de multiplicar: "))
    resultado_multi = multi(valor)

else: 
    print("opcion no valida")
