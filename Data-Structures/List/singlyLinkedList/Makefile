CXX = g++
CXXFLAGS = -Wall -g
TARGET = bin/output
OBJDIR = obj
LIBDIR = lib
SRCDIR = src
TESTDIR = test

all: $(TARGET)
	@echo  $(TARGET) successfully compiled....

$(TARGET): $(OBJDIR)/main.o $(OBJDIR)/aniTemplateList.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJDIR)/main.o $(OBJDIR)/aniTemplateList.o

$(OBJDIR)/main.o: $(TESTDIR)/main.cc $(LIBDIR)/aniTemplateList.hpp
	$(CXX) $(CXXFLAGS) -c $(TESTDIR)/main.cc

$(OBJDIR)/aniTemplateList.o: $(SRCDIR)/aniTemplateList.cc $(LIBDIR)/aniTemplateList.hpp
	$(CXX) $(CXXFLAGS) -c $(SRCDIR)/aniTemplateList.cc

clean:
	$(RM) $(TARGET) *.exe *.o *~ 

