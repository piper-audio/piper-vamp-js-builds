#!/bin/bash

clean=""
if [ "$1" = "clean" ]; then
    clean=yes
fi

set -eu

./vext install

for x in *; do
    if [ -d "$x" ] && [ -d "ext/$x" ] && [ -f "$x/Makefile" ]; then
	if [ -n "$clean" ]; then
	    make -C "$x" clean
	fi
        make -C "$x" -j3 em
    fi
done

for x in *; do
    if [ -d "$x" ] && [ -f "$x/Makefile" ]; then
	echo
        make -C "$x" test
    fi
done

echo
echo "All done"

echo "Outputs:"
ls -l */*.js

