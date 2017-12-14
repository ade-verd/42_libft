# libft
Premier projet de l'ecole 42 : coder une librairie libft.a.
Lors du projet de nombreuses fonctions présentes dans la libc ont été recodées.
Avec le temps, quelques fonctions additionnelles personnelles sont venues se greffer.


## Fonctions Mémoire
Fonctions | Prototype | Description
--- | --- | ---
ft_memset | | 
ft_bzero  | | 
ft_memcpy | | 
ft_memccpy | |
ft_memmove | | 
ft_memchr | | 
ft_memcmp | |
ft_memalloc | `void	ft_memalloc(size_t size);` | Alloue avec malloc(3) et retourne une zone de memoire "fraiche". La memoire allouee est intialisee a 0. Si l'allocation echoue, la fonction renvoie NULL.
ft_memdel | `void	ft_memdel(void **ap);` | Prend en parametre l’adresse d’un pointeur dont la zone pointee doit etre liberee avec free(3), puis le pointeur est mis a NULL.
ft_swap | `void	ft_swap(int *a, int *b);` | Echange le contenu de deux entiers dont les adresses sont données en paramètres.
ft_memccpy | `void		*ft_memccpy_src(void *dst, void *src, int c, size_t n);` | La fonction ft_memccpy_src() copie au plus n octets de la zone mémoire src vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c.
*"* | *"* | La fonction ft_memccpy_src() renvoie un pointeur sur le caractère immédiatement après c dans la zone SRC, ou NULL si c n'a pas été trouvé dans les n premiers caractères de src.
*"* | *"* | Elle a un comportement similaire à ft_memccpy(), qui elle, renvoie un pointeur sur la caractère immédiatement après c dans la zone DEST ou NULL si c n'a pas été trouvé.


## Fonctions Chaînes de caractères
Fonctions | Prototype | Description
--- | --- | ---
ft_strlen | |
ft_strdup | |
ft_strcpy | |
ft_strncpy | |
ft_strcat | |
ft_strncat | |
ft_strlcat | |
ft_strchr | |
ft_strrchr | |
ft_strstrs | |
ft_strnstr | |
ft_strcmp | |
ft_strncmp | |
ft_strnew | `char	*ft_strnew(size_t size);` | Alloue avec malloc(3) et retourne une chaine de caractere “fraiche” terminee par un ’\0’. Chaque caractere de la chaine est initialise a ’\0’. Si l’allocation echoue, la fonction renvoie NULL.
ft_strdel | `void	ft_strdel(char **as);` | Prend en parametre l’adresse d’une chaine de caracteres qui doit etre liberee avec free(3) et son pointeur mis a NULL.
ft_strclr | `void	ft_strclr(char *s);` | Assigne la valeur ’\0’ a tous les caracteres de la chaine passee en parametre.
ft_striter | `void	ft_striter(char *s, void (*f)(char *));` | Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre. Chaque caractere est passe par adresse a la fonction f afin de pouvoir être modifie si necessaire.
ft_striteri | `void	ft_striteri(char *s, void (*f)(unsigned int, char *));` | Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre en precisant son index en premier argument. Chaque caractere est passe par adresse a la fonction f afin de pouvoir etre modifie si necessaire.
ft_strmap | `char	*ft_strmap(char const *s, char (*f)(char));` | Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre pour creer une nouvelle chaine “fraiche” avec malloc(3) resultant des applications successives de f.
ft_strmapi | `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applique la fonction f a chaque caractere de la chaine de caracteres passee en parametre en precisant son index pour creer une nouvelle chaine “fraiche” avec malloc(3) resultant des applications successives de f.
ft_strequ | `int	ft_strequ(char const *s1, char const *s2);` | Compare lexicographiquement s1 et s2. Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.
ft_strnequ | `int	ft_strnequ(char const *s1, char const *s2, size_t n);` | Compare lexicographiquement s1 et s2 jusqu’a n caracteres maximum ou bien qu’un ’\0’ ait ete rencontre. Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.
ft_strsub | `char	*ft_strsub(char const *s, unsigned int start, size_t len);` | Alloue avec malloc(3) et retourne la copie "fraiche" d'un troncon de la chaine de caracteres passee en parametre. Le troncon commence a l'index start et a pour longueur len. Si start et len ne designent pas un troncon de chaine valide, le comportement est indetermine. Si l'allocation echoue, la fonction renvoie NULL.
ft_strjoin | `char	*ft_strjoin(char const *s1, char const *s2);` | Alloue avec malloc(3) et retourne une chaine de caracteres "fraiche" terminee pas un '\0' resultant de la concatenation de s1 et s2. Si l'allocation echoue, la fonction renvoie NULL.
ft_strtrim | `char	*ft_strtrim(char const *s);` | Alloue avec malloc(3) et retourne une copie de la chaine passee en parametre sans les espaces blancs au debut et a la fin de cette chaine. On considere comme des espaces blancs les caracteres ' ', '\n' et '\t'. Si s ne contient pas d'espaces blancs au debut ou a la fin, la fonction renvoie une copie de s. Si l'allocation echoue, la fonction renvoie NULL.
ft_strsplit | `char	**ft_strsplit(char const *s, char c);` | Alloue avec malloc(3) et retourne un tableau de chaines de caracteres "fraiches" (toutes terminees par un '\0', le tableau egalement donc) resultant de la decoupe de s selon le caractere c. Si l'allocation echoue, la fonction retourne NULL.
ft_countwords | `int	ft_countwords(char const *s, char c);` | Prend en paramètre une chaîne de caractères "s" et un caractère 'c'. La fonction retourne le nombre de mots issus de la découpe de la chaîne "s" par le séparateur 'c'. Exemple : ft_countwords("*salut*les***etudiants*",’*’) renvoie 3 pour "salut", "les", et "etudiants".
get_next_line | `int		get_next_line(int fd, char **line);` | La fonction GNL lit une ligne dans le file descriptor fd et complète la chaîne de caractères *line avec le résultat de la lecture (sans '\n' le cas échéant).
*"* | *"* | Une fin de lecture est définie par un '\n' ou un EOF (End Of File).
*"* | *"* | La fonction retourne 1 lorsqu'une ligne est lue ; 0 lorsque la lecture est terminée ; et -1 en cas d'erreur.


## Fonctions Caractères
Fonctions | Prototype | Description
--- | --- | ---
ft_isdigii | |
ft_isalnum | |
ft_isascii | |
ft_isprint | |
ft_toupper | |
ft_tolower | |
ft_isalpha | |


## Fonctions Nombres et Calculs
Fonctions | Prototype | Description
--- | --- | ---
ft_atoi | |
ft_itoa | `char	*ft_itoa(int n);` | Alloue avec malloc(3) et retourne une chaine de caracteres "fraiche" terminee par un '\0' representatnt l'entier n passe en parametre. Les nombres negatifs sont geres. Si l'allocation echoue, la fonction renvoie NULL.
ft_abs |  `int	ft_abs(int n);` | Prend en paramètre un int et renvoie sa valeur absolue.
ft_intlen | `int	ft_intlen(int n);` | Prend en paramètre un int et renvoie le nombre de caractères qui composent le nombre. En cas de valeur négative, le signe '-' est compté comme un caractère.
ft_power | `int	ft_power(int nb, int power);` | Fonction puissance.
ft_sqrt | `int	ft_sqrt(int nb);` | Fonction racine carrée (square root). Si la racine carrée n'est pas entière, la fonction renvoie 0.
ft_int_sqrt | `int	ft_int_sqrt(int nb);` | Fonction racine carrée (square root). Renvoie l'entier inférieur de la racine carrée.


## Fonctions listes chaînées
Fonctions | Prototype | Description
--- | --- | ---
ft_lstnew | `t_list	*ft_lstnew(void const *content, size_t content_size);` | Alloue avec malloc(3) et retourne un maillon “frais”. Les champs content et content_size du nouveau maillon sont initialises par copie des parametres de la fonction. Si le parametre content est nul, le champs content est initialise a NULL et le champs content_size est initialise a 0 quelque soit la valeur du parametre content_size. Le champ next est initialise a NULL. Si l’allocation echoue, la fonction renvoie NULL.
ft_lstdelone | `void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));` | Prend en parametre l’adresse d’un pointeur sur un maillon et libere la memoire du contenu de ce maillon avec la fonction del passee en parametre puis libere la memoire du maillon en lui meme avec free(3). La memoire du champ next ne doit en aucun cas être liberee. Pour terminer, le pointeur sur le maillon maintenant libere doit etre mis a NULL (de maniere similaire à la fonction ft_memdel).
ft_lstdel | `void	ft_lstdel(t_list **alst, void (*del)(void*, size_t));` | Prend en parametre l’adresse d’un pointeur sur un maillon et libere la memoire de ce maillon et celle de tous ses successeurs l’un apres l’autre avec del et free(3). Pour terminer, le pointeur sur le premier maillon maintenant libere doit etre mis à NULL (de maniere similaire à la fonction ft_memdel).
ft_lstadd | `void	ft_lstadd(t_list **alst, t_list *new0);` | Ajoute l'element new en tete de la liste.
ft_lstappend | `void	ft_lstappend(t_list *new0, t_list *first_link);` | Ajoute l'element new en fin de liste.
ft_lstiter | `void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));` | Parcourt la liste lst en appliquant a chaque maillon la fonction f.
ft_lstmap | `t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));` | Parcourt la liste lst en appliquant à chaque maillon la fonction f et cree une nouvelle liste “fraiche” avec malloc(3) resultant des applications successives. Si une allocation echoue, la fonction renvoie NULL.


## Fonctions d'affichage, lecture, écriture
Fonctions | Prototype | Description
--- | ----- | ---------------------
ft_putchar | `void	ft_putchar(char c);` | Affiche le caractere c sur la sortie standard.
ft_putchar_fd | `void	ft_putchar_fd(char c, int fd);` | Ecrit le caractere c sur le descripteur de fichier fd.
ft_putstr | `void	ft_putstr(char const *s);` | Affiche la chaine s sur la sortir standard.
ft_putstr_fd | `void	ft_putstr_fd(char const *s, int fd);` | Ecrit la chaine s sur le descripteur de fichier fd.
ft_putendl | `void	ft_putendl(char const *s);` | Affiche la chaine s sur la sortie standard suivi d'un '\n'.
ft_putendl_fd | `void	ft_putendl_fd(char const *s, int fd);` | Ecrit la chaine s sur le descripteur de fichier fd suivi d'un '\n'.
ft_putnbr | `void	ft_putnbr(int n);` | Affiche l'entier n sur la sortie standard.
ft_putnbr_fd | `void	ft_putnbr_fd(int n, int fd);` | Ecrit l'entier n sur le descripteur de fichier fd.
