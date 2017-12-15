PATH_CUR=pwd
PATH_LIB=~/Projects/libft/

function confirm()
{
	echo "$@ "
	read -e answer
	for response in y Y yes YES Yes Sure sure SURE OK ok Ok
		do
			if [ "_$answer" == "_$response" ]
			then
				return 0
			fi
	done
	#Any answer other than the list above is considerred a "no" answer
	return 1
}

# Boucle sur tous les paramètres (un paramètre par argument)
if [ $# -gt 0 ]
then
	echo Copying :
	for param in "$@"
	do
		cp -v $param $PATH_LIB
	done

	# Git commit changes
	confirm "Do you want to commit and push this change(s) ?" \
		&& cd $PATH_LIB \
		&& echo git add $* && git add $* \
		&& echo git commit -m "update or create $*" && git commit -m "update or create $*"\
		&& echo git push && git push \
		&& cd $PATH_CUR
else
	echo usage: $0 file1 [file2] [file3] ...
fi
