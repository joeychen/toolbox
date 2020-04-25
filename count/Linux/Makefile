TARGET = ../bin/Linux/count

SRCS  = ../count.cpp
OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I./include
CXXFLAGS = -O2 -Wall


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	$(RM) $(OBJS) $(TARGET)
