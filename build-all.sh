#!/bin/bash

clean=""
if [ "$1" = "clean" ]; then
    clean=yes
fi

set -eu

for x in *; do
    if [ -d "$x" ] && [ -f "$x/Makefile" ]; then
	if [ -n "$clean" ]; then
	    make -C "$x" clean
	fi
        make -C "$x" em
    fi
done

echo "Compiled:"
ls -l */*.js

for x in *; do
    if [ -d "$x" ] && [ -f "$x/Makefile" ]; then
	echo
	js=$(echo "$x"/*.js)
	if [ ! -f "$js" ]; then
	    echo "Problem running test for $x: more than one js file? (js=$js)"
	else
	    node ../piper-vamp-js/test/node-load-test.js "$(pwd)/$js" && \
		echo "Successfully ran basic load-test on $js"
	fi
    fi
done

echo
echo "All done"

