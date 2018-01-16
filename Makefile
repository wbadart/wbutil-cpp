##
# Makefile
#
# Build and install rules for wbutil-cpp.
#
# Will Badart <wbadart@live.com>
# created: JAN 2018
##

clean:
	find . -name '*.o' | xargs rm
	rm -rf bin/ lib/
