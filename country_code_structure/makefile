#this is the make file for structures
#to learn more about make checkout the GNU make manual


CC  = gcc
OBJ = country_code_structure.o 
TARGET = main

$(TARGET): $(OBJ)
		$(CC) -o $(TARGET) $(OBJ)
$(OBJ): basic_header.h


.PHONY: clean
clean:
		rm $(TARGET) $(OBJ)