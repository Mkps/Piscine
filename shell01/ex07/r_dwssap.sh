#!/bin/bash

cat /etc/passwd | awk -F : '{print $1}' | sed -n 'n;p' | rev | sort -r | awk '{if(NR>='$FT_LINE1' && NR<='$FT_LINE2') print $0}' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' 
