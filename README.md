# Calculadora

Calculadora de línea de comandos en C. Recibe dos números y una operación (`+`, `-`, `*`, `/`) como argumentos.

## Compilar

Necesitas `gcc` y `make`. Desde este directorio:

```bash
make
```

Eso genera el ejecutable `main`.

Para borrar el ejecutable y volver a compilar desde cero:

```bash
make clean
make
```

## Ejecutar

```bash
./main <numero1> <operacion> <numero2>
```

Ejemplos:

```bash
./main 5 + 5
./main 5 - 3
./main 10 / 2
```

Si faltan o sobran argumentos, el programa muestra:

```text
Debe usar el formato <numero1> <operacion> <numero2>
```

## El asterisco `*` en la terminal

Si intenta multiplicar con el * directamente, no funcionará:

```bash
./main 5 * 5
```

En bash, `*` es un comodín. La terminal lo reemplaza por **todos los archivos del directorio** antes de lanzar el programa. `main` recibe muchos argumentos en vez de tres y falla el formato.

Para multiplicar, utilizar uno de los siguientes:

```bash
./main 5 '*' 5
./main 5 "*" 5
./main 5 \* 5
```

## Probar

Después de `make`:

```bash
./main 5 + 5          # Resultado: 10.00
./main 5 - 5          # Resultado: 0.00
./main 5 '*' 5        # Resultado: 25.00
./main 10 / 2         # Resultado: 5.00
./main 5 / 0          # No se puede dividir entre cero.
./main 5 * 5          # Error de formato (el shell expandió *)
```
