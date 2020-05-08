CC= g++ # указываем компилятор
LDFLAGS= # флаги линковщика
CFLAGS= -std=c++11 -c -g3 -O0 -MD # флаги компилятора
SOURCES= main.cpp source.cpp # список исходников
OBJECTS= $(SOURCES:.cpp=.o)
TARGET= pro # имя бинарника
 
all: $(TARGET)
    
$(TARGET): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp 
	$(CC) $(CFLAGS) $< 

include $(wildcard *.d)

clean:
	rm *.o *.d $(TARGET)