ldapsearch -LLL -Q "sn=*bon*" sn 2> /dev/null | sed -n "/sn:/p" | wc -l | sed "s/ //g"
