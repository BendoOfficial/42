ldapsearch -xLLL 'uid=z*'|grep cn:|sort -f -r | sed 's/cn: //g'
