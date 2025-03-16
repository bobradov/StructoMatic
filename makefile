# Compiler
CXX = /usr/bin/g++

# Compiler flags
CXXFLAGS = -Wall -g

# Target executable
TARGET = main

# Source files
SRCS = main.cpp OctTree.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)
s
# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
    rm -f $(TARGET) $(OBJS)

.PHONY: all clean