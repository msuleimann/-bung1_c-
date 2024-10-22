# Output executable
TARGET = program

# Default rule to build the target
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(SRCS)
	g++ -std=c++17 -o $(TARGET) Dialog.cpp Arrays.cpp Mathe.cpp Random.cpp

# Rule to clean up generated files
clean:
	rm -f $(TARGET)