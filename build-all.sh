#!/bin/bash

set -eu

for x in *; do
    if [ -d "$x" ]; then
        if [ -f "$x/Makefile" ]; then
            make -C "$x" distclean
            make -C "$x" em
        fi
    fi
done

echo "Compiled:"
ls -l */*.js
