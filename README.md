# libft
Premier projet de l'ecole 42 : coder une librairie libft.a à l'identique pour les fonctions de la premiere partie et en suivant les recommendations dans la seconde partie.

## Partie 1
Consulter le man pour la description des fonctions suivantes :
- [x] ft_memset [no checkfile]
- [x] ft_bzero [no checkfile]
- [x] ft_memcpy [no checkfile]
- [x] ft_memccpy [no checkfile]
- [x] ft_memmove [no checkfile]
- [x] ft_memchr [no checkfile]
- [x] ft_memcmp [no checkfile]
- [x] ft_strlen
- [x] ft_strdup
- [x] ft_strcpy
- [x] ft_strncpy
- [x] ft_strcat
- [x] ft_strncat
- [x] ft_strlcat
- [x] ft_strchr
- [x] ft_strrchr
- [x] ft_strstrs
- [x] ft_strnstr
- [x] ft_strcmp
- [x] ft_strncmp
- [x] ft_atoi
- [x] ft_isalpha
- [x] ft_isdigit
- [x] ft_isalnum
- [x] ft_isascii
- [x] ft_isprint
- [x] ft_toupper
- [x] ft_tolower

## Partie 2
### [x] ft_memalloc
Alloue avec malloc(3) et retourne une zone de memoire "fraiche". La memoire allouee est intialisee a 0. Si l'allocation echoue, la fonction renvoie NULL.

### [x] ft_memdel
Prend en parametre l’adresse d’un pointeur dont la zone pointee doit etre liberee avec free(3), puis le pointeur est mis a NULL.

### [x] ft_strnew
Alloue avec malloc(3) et retourne une chaine de caractere “fraiche” terminee par un ’\0’. Chaque caractere de la chaine est initialise a ’\0’. Si l’allocation echoue, la fonction renvoie NULL.

### [x] ft_strdel
Prend en parametre l’adresse d’une chaine de caracteres qui doit etre liberee avec free(3) et son pointeur mis a NULL.

### [x] ft_strclr
Assigne la valeur ’\0’ a tous les caracteres de la chaine passee en parametre.

### [x] ft_striter
Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre. Chaque caractere est passe par adresse a la fonction f afin de pouvoir être modifie si necessaire.

### [x] ft_striteri
Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre en precisant son index en premier argument. Chaque caractere est passe par adresse a la fonction f afin de pouvoir etre modifie si necessaire.

### [x] ft_strmap
Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre pour creer une nouvelle chaine “fraiche” avec malloc(3) resultant des applications successives de f.

### [x] ft_strmapi
Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre en precisant son index pour creer une nouvelle chaine “fraiche” avec malloc(3) resultant des applications successives de f.

### [x] ft_strequ
Compare lexicographiquement s1 et s2. Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.

### [x] ft_strnequ
Compare lexicographiquement s1 et s2 jusqu’a n caracteres maximum ou bien qu’un ’\0’ ait ete rencontre. Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.

### [x] ft_strsub
Alloue avec malloc(3) et retourne la copie "fraiche" d'un troncon de la chaine de caracteres passee en parametre. Le troncon commence a l'index start et a pour longueur len. Si start et len ne designent pas un troncon de chaine valide, le comportement est indetermine. Si l'allocation echoue, la fonction renvoie NULL.

### [x] ft_strjoin
Alloue avec malloc(3) et retourne une chaine de caracteres "fraiche" terminee pas un '\0' resultant de la concatenation de s1 et s2. Si l'allocation echoue, la fonction renvoie NULL.

### [x] ft_strtrim
Alloue avec malloc(3) et retourne une copie de la chaine passee en parametre sans les espaces blancs au debut et a la fin de cette chaine. On considere comme des espaces blancs les caracteres ' ', '\n' et '\t'. Si s ne contient pas d'espaces blancs au debut ou a la fin, la fonction renvoie une copie de s. Si l'allocation echoue, la fonction renvoie NULL.

### [x] ft_strsplit
Alloue avec malloc(3) et retourne un tableau de chaines de caracteres "fraiches" (toutes terminees par un '\0', le tableau egalement donc) resultant de la decoupe de s selon le caractere c. Si l'allocation echoue, la fonction retourne NULL.

### [x] ft_itoa
Alloue avec malloc(3) et retourne une chaine de caracteres "fraiche" terminee par un '\0' representatnt l'entier n passe en parametre. Les nombres negatifs sont geres. Si l'allocation echoue, la fonction renvoie NULL.

### [x] ft_putchar
Affiche le caractere c sur la sortie standard.

### [x] ft_putstr
Affiche la chaine s sur la sortir standard.

### [x] ft_putendl
Affiche la chaine s sur la sortie standard suivi d'un '\n'.

### [x] ft_putnbr
Affiche l'entier n sur la sortie standard.

### [x] t_putchar_fd
Ecrit le caractere c sur le descripteur de fichier fd.

### [x] ft_putstr_fd
Ecrit la chaine s sur le descripteur de fichier fd.

### [x] ft_putendl_fd
Ecrit la chaine s sur le descripteur de fichier fd suivi d'un '\n'.

### [x] ft_putnbr_fd
Ecrit l'entier n sur le descripteur de fichier fd.

## Partie bonus
### [x] ft_lstnew
Alloue avec malloc(3) et retourne un maillon “frais”. Les champs content et content_size du nouveau maillon sont initialises par copie des parametres de la fonction. Si le parametre content est nul, le champs content est initialise a NULL et le champs content_size est initialise a 0 quelque soit la valeur du parametre content_size. Le champ next est initialise a NULL. Si l’allocation echoue, la fonction renvoie NULL.

### [x] ft_lstdelone
Prend en parametre l’adresse d’un pointeur sur un maillon et libere la memoire du contenu de ce maillon avec la fonction del passee en parametre puis libere la memoire du maillon en lui meme avec free(3). La memoire du champ next ne doit en aucun cas être liberee. Pour terminer, le pointeur sur le maillon maintenant libere doit etre mis a NULL (de maniere similaire à la fonction ft_memdel).

### [x] ft_lstdel
Prend en parametre l’adresse d’un pointeur sur un maillon et libere la memoire de ce maillon et celle de tous ses successeurs l’un apres l’autre avec del et free(3). Pour terminer, le pointeur sur le premier maillon maintenant libere doit etre mis à NULL (de maniere similaire à la fonction ft_memdel).

### [X] ft_lstadd
Ajoute l'element new en tete de la liste.

### [x] ft_lstiter
Parcourt la liste lst en appliquant a chaque maillon la fonction f.

### [x] ft_lstmap
Parcourt la liste lst en appliquant à chaque maillon la fonction f et cree une nouvelle liste “fraiche” avec malloc(3) resultant des applications successives. Si une allocation echoue, la fonction renvoie NULL.

## Fonctions personnelles supplémentaires
### [x] ft_abs
Prend en paramètre un int et renvoie sa valeur absolue.

### [x] ft_intlen
Prend en paramètre un int et renvoie le nombre de caractères qui composent le nombre. En cas de valeur négative, le signe '-' est compté comme un caractère.

### [x] ft_power
> int		ft_power(int nb, int power);
Fonction puissance.

### [x] ft_sqrt
> int		ft_sqrt(int nb);
Fonction racine carrée (square root).

### [x] ft_countwords
> int		ft_countwords(char const *s, char c);
Prend en paramètre une chaîne de caractères "s" et un caractère 'c'. La fonction retourne le nombre de mots issus de la découpe de la chaîne "s" par le séparateur 'c'.
Exemple : ft_countwords("*salut*les***etudiants*",’*’) renvoie 3 pour "salut", "les", et "etudiants".

### [x] ft_swap
> void	ft_swap(int *a, int *b);
Echange le contenu de deux entiers dont les adresses sont données en paramètres.
