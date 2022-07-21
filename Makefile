TARGET=add-nbo
CXXFLAGS=-g

all:
	gcc -o add-nbo add-nbo.cpp

clean:
	rm -f $(TARGET)
	rm -f *.o
