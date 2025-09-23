# Nombre del ejecutable
TARGET = a.out

# Archivos objeto
OBJETOS = main.o 

# Compilador y flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

# Regla principal
$(TARGET): $(OBJETOS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJETOS)

# Compilar main.c
main.o: main.c variables.h
	$(CC) $(CFLAGS) -c main.c

# Compilar otras_funciones.c
#otras_funciones.o: otras_funciones.c variables.h
#	$(CC) $(CFLAGS) -c otras_funciones.c

# Limpiar archivos generados
clean:
	rm -f *.o $(TARGET)
