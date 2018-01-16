##
# Makefile
#
# Build and install rules for wbutil-cpp.
#
# Will Badart <wbadart@live.com>
# created: JAN 2018
##

CXX			= g++
CXX_FLAGS 	= -ggdb -I./include -Wall
LD			= g++
LD_FLAGS	= -L./lib
AR			= ar
AR_FLAGS	= rvs

clean:
	find . -name '*.o' | xargs rm
	rm -rf bin/ lib/
