CC=gcc
CFLAGS=-I/usr/local/include
LDFLAGS=-L/usr/local/lib -lcheck
TARGET=test

all: $(TARGET)

$(TARGET): tests/hello_check_test.c
	$(CC) $(CFLAGS) -o $(TARGET) tests/hello_check_test.c $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)