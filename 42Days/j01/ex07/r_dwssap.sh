cat /etc/passwd |sed '/^#/d'|sed -n '2,${p;n;}'|cut -d: -f1|rev|sort -r|awk 'NR >=ENVIRON["FT_LINE1"] && NR <=ENVIRON["FT_LINE2"]'|tr '\n' ','|sed 's/,/, /g'|sed 's/, $/./g'|tr -d "\n"
