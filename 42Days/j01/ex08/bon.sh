ldapsearch -xLLL 'sn=*bon*'|grep 'sn:'|wc -l| sed 's/ //g'
