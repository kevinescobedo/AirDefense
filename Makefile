CXX=g++
CXXFLAGS=-std=c++17 -Wpedantic -Wall -Wextra -Werror -Weffc++ -Wzero-as-null-pointer-constant
OPTIMIZE=-O2
SOURCES=Window.cpp AirDefense.cpp main.cpp
OBJS=$(SOURCES:.cpp=.o)
TARGET=airdefense
LDFLAGS=-l sfml-graphics -l sfml-window -l sfml-window

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) -c $< -o $@

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -f $(TARGET)
