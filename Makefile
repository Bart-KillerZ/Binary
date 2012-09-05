CC=g++
CFLAGS=-O3 -c -Wall
LDFLAGS=
LIBS=
DEBUG=-g
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=simple

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LIBS) $(LDFLAGS) $(OBJECTS) -o $@

.cpp .o:
	$(CC) $(LIBS) $(CFLAGS) $< -o $@

clean:
	rm $(EXECUTABLE) $.o
