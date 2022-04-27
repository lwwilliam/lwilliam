cat /etc/passwd | sed -e n\;d | cut -f1 -d":" |grep "_"| awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | rev | sort -r |tr '\n' ',' | sed -e 's/,$/./' | sed 's/, */, /g' 
