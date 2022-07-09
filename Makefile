CC=g++
CFLAGS=-Wall 
TARGET = calc
SRC=main.cpp
SRC_DIR=src
BUILD_DIR=build

all: $(TARGET)

$(TARGET): $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/$(SRC) -o $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
