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
        make -C "$x" test
    fi
done

echo
echo "All done"

