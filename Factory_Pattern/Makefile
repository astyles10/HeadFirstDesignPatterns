CC		:=	g++
SDIR	:=	src
IDIR	:=	-Iinclude
CFLAGS	:=	$(IDIR) -g -Wall -DLIN
LFLAGS	:=	-lm
ODIR	:=	debug
CFILES	:=	$(wildcard $(SDIR)/*.cpp)
OBJS	:=	$(patsubst $(SDIR)/%.cpp, $(ODIR)/%.o, $(CFILES))

pizza: $(ODIR) $(OBJS)
	$(CC) $(ODIR)/*.o -o $@ $(LFLAGS)

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR):
	@mkdir $@