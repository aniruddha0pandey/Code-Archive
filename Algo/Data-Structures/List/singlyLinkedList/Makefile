# Makefile for singlyList

CXX = g++
CXXFLAGS = -Wall -g
TARGET = bin/output
OBJDIR = obj

all: $(TARGET)
	@echo  $(TARGET) successfully compiled....

$(TARGET): main.o aniTemplateList.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o aniTemplateList.o

main.o: main.cc aniTemplateList.hpp
	$(CXX) $(CXXFLAGS) -c main.cc

aniTemplateList.o: aniTemplateList.cc aniTemplateList.hpp
	$(CXX) $(CXXFLAGS) -c aniTemplateList.cc

clean:
	$(RM) $(TARGET) *.exe *.o *~ 