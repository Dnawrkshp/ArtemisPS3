#!/bin/bash

if [ -d payloads ]; then
rm -r payloads
fi

make clean
