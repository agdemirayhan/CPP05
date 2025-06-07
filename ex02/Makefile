NAME = forms

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -Iinclude

SRCDIR = src
OBJDIR = obj

SRCS = \
	$(SRCDIR)/main.cpp \
	$(SRCDIR)/Bureaucrat.cpp \
	$(SRCDIR)/AForm.cpp \
	$(SRCDIR)/ShrubberyCreationForm.cpp \
	$(SRCDIR)/RobotomyRequestForm.cpp \
	$(SRCDIR)/PresidentialPardonForm.cpp

OBJS = \
	$(OBJDIR)/main.o \
	$(OBJDIR)/Bureaucrat.o \
	$(OBJDIR)/AForm.o \
	$(OBJDIR)/ShrubberyCreationForm.o \
	$(OBJDIR)/RobotomyRequestForm.o \
	$(OBJDIR)/PresidentialPardonForm.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
