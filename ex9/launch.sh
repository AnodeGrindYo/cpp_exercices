#!/bin/bash

BEGIN=""
echo "Voulez-vous lancer le programme ? (y/N)"
read BEGIN
if [ $BEGIN = "y" ] || [ $BEGIN = "y" ]; then
	./MilleSabords.out
fi
