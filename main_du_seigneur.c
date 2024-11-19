/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_du_seigneur.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:03:09 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/19 10:58:10 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"
#include <bsd/string.h>

 // Fonction pour test strmapi
char convert_to_uppercase(unsigned int i, char c) 
{
    if (islower(c)) 
        return toupper(c);
	return (c);
}
char convert_to_lowercase(unsigned int i, char c) 
{
    if (isupper(c))
        return tolower(c);
	return (c);
}

// Fonction pour test striteri
void convert_to_uppercase2(unsigned int i, char *c) 
{
    if (islower(*c))
        *c = toupper(*c);
}


void convert_to_lowercase2(unsigned int i, char *c) 
{
    if (isupper(*c)) 
        *c = tolower(*c);
}

void print_content(void *content)
{
    if (content)
        printf("fonction qui print 'content': %s\n\n", (char *)content);
}
void *transform_content(void *content) {
    char *new_content = malloc(strlen(content) + 12); // Espace pour " - transformé"
    if (!new_content) return NULL;
    sprintf(new_content, "%s - transformé", (char *)content);
    return new_content;
}

// Fonction de suppression du contenu (libération de la mémoire)
void del_content(void *content)
{
    printf("Suppression de: %s\n", (char *)content); // Affiche avant suppression
    free(content);
}

int main(void)
 {
    //------------------ Test ft_isalpha ------------------//
    printf("\n--------------- Test ft_isalpha ---------------\n");
    printf("test 'a' || ft_isalpha: %i || isalpha: %i\n", ft_isalpha('a'), isalpha('a'));
    printf("test '1' || ft_isalpha: %i || isalpha: %i\n\n", ft_isalpha('1'), isalpha('1'));

    //------------------ Test ft_isdigit ------------------//
    printf("\n--------------- Test ft_isdigit ---------------\n");
    printf("test '8' || ft_isdigit: %i || isdigit: %i\n", ft_isdigit('8'), isdigit('8'));
    printf("test 'a' || ft_isdigit: %i || isdigit: %i\n\n", ft_isdigit('a'), isdigit('a'));

    //------------------ Test ft_isalnum ------------------//
    printf("\n--------------- Test ft_isalnum ---------------\n");
    printf("test '8' || ft_isalnum: %i || isalnum: %i\n", ft_isalnum('8'), isalnum('8'));
    printf("test 'a' || ft_isalnum: %i || isalnum: %i\n", ft_isalnum('a'), isalnum('a'));
    printf("test 'G' || ft_isalnum: %i || isalnum: %i\n", ft_isalnum('G'), isalnum('G'));
    printf("test '#' || ft_isalnum: %i || isalnum: %i\n\n", ft_isalnum('#'), isalnum('#'));

    //------------------ Test ft_isascii ------------------//
    printf("\n--------------- Test ft_isascii ---------------\n");
    printf("test '8' || ft_isascii: %i || isascii: %i\n", ft_isascii('8'), isascii('8'));
    printf("test 'a' || ft_isascii: %i || isascii: %i\n", ft_isascii('a'), isascii('a'));
    printf("test 'G' || ft_isascii: %i || isascii: %i\n", ft_isascii('G'), isascii('G'));
    printf("test '#' || ft_isascii: %i || isascii: %i\n", ft_isascii('#'), isascii('#'));
    printf("test 200 || ft_isascii: %i || isascii: %i\n\n", ft_isascii(200), isascii(200));

    //------------------ Test ft_isprint ------------------//
    printf("\n--------------- Test ft_isprint ---------------\n");
    printf("test '8' || ft_isprint: %i || isprint: %i\n", ft_isprint('8'), isprint('8'));
    printf("test 'a' || ft_isprint: %i || isprint: %i\n", ft_isprint('a'), isprint('a'));
    printf("test 'G' || ft_isprint: %i || isprint: %i\n", ft_isprint('G'), isprint('G'));
    printf("test '#' || ft_isprint: %i || isprint: %i\n", ft_isprint('#'), isprint('#'));
    printf("test 32 (space) || ft_isprint: %i || isprint: %i\n", ft_isprint(32), isprint(32));
    printf("test 127 (DEL) || ft_isprint: %i || isprint: %i\n\n", ft_isprint(127), isprint(127));

    //------------------ Test ft_strlen ------------------//
    printf("\n--------------- Test ft_strlen ---------------\n");
    printf("test \"hello\" || ft_strlen: %zu || strlen: %zu\n", ft_strlen("hello"), strlen("hello"));
    printf("test \"\" (empty string) || ft_strlen: %zu || strlen: %zu\n", ft_strlen(""), strlen(""));
    printf("test \"42\" || ft_strlen: %zu || strlen: %zu\n", ft_strlen("42"), strlen("42"));
    printf("test \"test string\" || ft_strlen: %zu || strlen: %zu\n", ft_strlen("test string"), strlen("test string"));
    printf("test \"1234567890\" || ft_strlen: %zu || strlen: %zu\n\n", ft_strlen("1234567890"), strlen("1234567890"));

    //------------------ Test ft_memset ------------------//
    printf("\n--------------- Test ft_memset ---------------\n");
    char str_memset[50] = "je suis un test";
    char str_ft_memset[50] = "je suis un test";
    memset(str_memset, 'x', 5);
    ft_memset(str_ft_memset, 'x', 5);
    printf("test avec 'x' sur 5 octets || ft_memset: %s || memset: %s\n", str_ft_memset, str_memset);

    //------------------ Test ft_bzero ------------------//
    printf("\n--------------- Test ft_bzero ---------------\n");
    char str_bzero[50] = "je suis un test";
    bzero(str_bzero, 5);
    ft_bzero(str_bzero, 5);
    printf("test sur 5 octets || ft_bzero: %s || bzero: %s\n", str_bzero, str_bzero);
    bzero(str_bzero, 50);
    ft_bzero(str_bzero, 50);
    printf("test sur 50 octets || ft_bzero: %s || bzero: %s\n", str_bzero, str_bzero);

    //------------------ Test ft_memcpy ------------------//
    printf("\n--------------- Test ft_memcpy ---------------\n");
    char str_src[50] = "je suis la";
    char str_dest[50] = "        la pour mama";
    char str_dest2[50] = "        la pour mama";
    printf("Avant || dest: %s || dest2: %s\n", str_dest, str_dest2);
    ft_memcpy(str_dest, str_src, 10);
    memcpy(str_dest2, str_src, 10);
    printf("Après || ft_memcpy: %s || memcpy: %s\n", str_dest, str_dest2);

    //------------------ Test ft_memmove ------------------//
    printf("\n--------------- Test ft_memmove ---------------\n");
    char str_memmove[60] = "je suis un test  attention complet attention";
    char str_ft_memmove[60] = "je suis un test  attention complet attention";
    printf("Avant || str_memmove: %s\n", str_memmove);
    ft_memmove(str_ft_memmove + 16, str_ft_memmove + 27, 22);
    memmove(str_memmove + 16, str_memmove + 27, 22);
    printf("Après (droite à gauche) || ft_memmove: %s || memmove: %s\n", str_ft_memmove, str_memmove);
    ft_memmove(str_ft_memmove + 27, str_ft_memmove + 16, 22);
    memmove(str_memmove + 27, str_memmove + 16, 22);
    printf("Après (gauche à droite) || ft_memmove: %s || memmove: %s\n", str_ft_memmove, str_memmove);

    //------------------ Test ft_strlcpy ------------------//
    printf("\n--------------- Test ft_strlcpy ---------------\n");
    const char src_strlcpy[33] = "je suis un test et je fonctionne";
    const char src_ft_strlcpy[33] = "je suis un test et je fonctionne";
    char dst_strlcpy[50] = "je suis un test";
    char dst_ft_strlcpy[50] = "je suis un test";
    ft_strlcpy(dst_ft_strlcpy, src_ft_strlcpy, 33);
    strlcpy(dst_strlcpy, src_strlcpy, 33);
    printf("test 1 || ft_strlcpy: %s || strlcpy: %s\n\n", dst_ft_strlcpy, dst_strlcpy);

    //------------------ Test ft_strlcat ------------------//
    printf("\n--------------- Test ft_strlcat ---------------\n");
    char src_strlcat[50] = " et je fonctionne";
    char src_ft_strlcat[50] = " et je fonctionne";
    char dst_strlcat[50] = "je suis un test";
    char dst_ft_strlcat[50] = "je suis un test";
    ft_strlcat(dst_ft_strlcat, src_ft_strlcat, 33);
    strlcat(dst_strlcat, src_strlcat, 33);
    printf("test 1 || ft_strlcat: %s || strlcat: %s\n\n", dst_ft_strlcat, dst_strlcat);

    //------------------ Test ft_toupper ------------------//
    printf("\n--------------- Test ft_toupper ---------------\n");
    printf("resultat attendu 'C' || ft_toupper: %c || toupper: %c\n", ft_toupper('c'), toupper('c'));
    printf("resultat attendu 'C' || ft_toupper: %c || toupper: %c\n", ft_toupper('C'), toupper('C'));
    printf("resultat attendu ' ' || ft_toupper: %c || toupper: %c\n\n", ft_toupper(' '), toupper(' '));

    //------------------ Test ft_tolower ------------------//
    printf("\n--------------- Test ft_tolower ---------------\n");
    printf("resultat attendu 'c' || ft_tolower: %c || tolower: %c\n", ft_tolower('C'), tolower('C'));
    printf("resultat attendu 'c' || ft_tolower: %c || tolower: %c\n", ft_tolower('c'), tolower('c'));
    printf("resultat attendu ' ' || ft_tolower: %c || tolower: %c\n\n", ft_tolower(' '), tolower(' '));

    //---------------test ft_strchr---------------//
    printf("--------------- test ft_strchr ----------------\n");
    char *str_strchr = "je suis un test";
    char occ = 't';
    char *result = ft_strchr(str_strchr, occ);
    char *result2 = strchr(str_strchr, occ);
    
    printf("recherche '%c' dans '%s' || ft_strchr : %ld  || strchr : %ld\n", occ, str_strchr, result - str_strchr, result2 - str_strchr);
    
    char occstr = 'z';
    char *result3 = ft_strchr(str_strchr, occstr);
    char *result4 = strchr(str_strchr, occstr);
    
    printf("recherche '%c' dans '%s' || ft_strchr : %ld  || strchr : %ld\n\n", occstr, str_strchr, result3 - str_strchr, result4 - str_strchr);
    
    
    //---------------test ft_strrchr---------------//
    printf("--------------- test ft_strrchr ---------------\n");
    char *str_strrchr = "je suis un test";
    char oc = 't';
    char *res = ft_strrchr(str_strrchr, oc);
    char *res2 = strrchr(str_strrchr, oc);
    
    printf("recherche '%c' dans '%s' || ft_strrchr : %ld  || strrchr : %ld\n\n", oc, str_strrchr, res - str_strrchr, res2 - str_strrchr);
    
    
    //---------------test ft_strncmp---------------//
    printf("--------------- test ft_strncmp ---------------\n");
    char *str_strcmp1 = "Bonjour";
    char *str_strcmp2 = "Bonjour";
    int result_strcmp1 = ft_strncmp(str_strcmp1, str_strcmp2, 7);
    int result_strncmp1 = strncmp(str_strcmp1, str_strcmp2, 7);
    
    printf("Test 1 : Recherche '%s' dans '%s' || ft_strncmp : %d || strncmp : %d\n\n", str_strcmp1, str_strcmp2, result_strcmp1, result_strncmp1);
    
    char *str_strcmp3 = "Bonjour";
    char *str_strcmp4 = "Bonsoir";
    int result_strcmp2 = ft_strncmp(str_strcmp3, str_strcmp4, 7);
    int result_strncmp2 = strncmp(str_strcmp3, str_strcmp4, 7);
    
    printf("Test 2 : Recherche '%s' dans '%s' || ft_strncmp : %d || strncmp : %d\n\n", str_strcmp3, str_strcmp4, result_strcmp2, result_strncmp2);
    
    char *str_strcmp5 = "Bonjour";
    char *str_strcmp6 = "Bon";
    int result_strcmp3 = ft_strncmp(str_strcmp5, str_strcmp6, 0);
    int result_strncmp3 = strncmp(str_strcmp5, str_strcmp6, 0);
    
    printf("Test 3 : Recherche '%s' dans '%s' avec n = 0 || ft_strncmp : %d || strncmp : %d\n\n", str_strcmp5, str_strcmp6, result_strcmp3, result_strncmp3);
    
    
    //---------------test ft_memchr---------------//
    printf("--------------- test ft_memchr ---------------\n");
    char *str_memchr1 = "Bonjour tout le monde";
    char occ1 = 't';
    char *result_memchr1 = ft_memchr(str_memchr1, occ1, 20);
    char *result_memchr2 = memchr(str_memchr1, occ1, 20);
    
    printf("Test 1 : Recherche '%c' dans '%s' || ft_memchr : %p  || memchr : %p\n", occ1, str_memchr1, result_memchr1, result_memchr2);
    
    char occ2 = 'z';
    char *str_memchr2 = "Bonjour tout le monde";
    char *result_memchr3 = ft_memchr(str_memchr2, occ2, 20);
    char *result_memchr4 = memchr(str_memchr2, occ2, 20);
    
    printf("Test 2 : Recherche '%c' dans '%s' || ft_memchr : %p  || memchr : %p\n", occ2, str_memchr2, result_memchr3, result_memchr4);
    
    
    //---------------test ft_memcmp---------------//
    printf("--------------- test ft_memcmp ---------------\n");
    char str1[21] = "Bonjour tout le monde";
    char str2[21] = "Bonjour tout le monde";
    int result_ft_memcmp_1 = ft_memcmp(str1, str2, sizeof(str1));
    int result_memcmp_1 = memcmp(str1, str2, sizeof(str2));
    
    printf("Test 1 : Comparaison identique || ft_memcmp : %d  || memcmp : %d\n", result_ft_memcmp_1, result_memcmp_1);
    
    char str3[6] = "1245";
    char str4[4] = "123";
    int result_ft_memcmp_4 = ft_memcmp(str3, str4, 3);
    int result_memcmp_4 = memcmp(str3, str4, 3);
    
    printf("Test 4 : Comparaison de tailles différentes (str3 vs str4) || ft_memcmp : %d  || memcmp : %d\n", result_ft_memcmp_4, result_memcmp_4);
    
    
    //---------------test ft_strnstr---------------//
    printf("--------------- test ft_strnstr ---------------\n");
    char haystack[] = "Bonjour tout le monde";
    char needle[] = "tout";
    char *result_ft_strnstr = ft_strnstr(haystack, needle, 15);
    printf("Test 1 : Recherche de 'tout' dans 'Bonjour tout le monde' || ft_strnstr : %s\n", result_ft_strnstr);
    
    char needle2[] = "absent";
    char *result_ft_strnstr2 = ft_strnstr(haystack, needle2, 15);
    printf("Test 2 : Recherche de 'absent' dans 'Bonjour tout le monde'|| ft_strnstr : %s\n", result_ft_strnstr2);
    
    
    //---------------test ft_atoi---------------//
    printf("--------------- test ft_atoi ---------------\n");
    printf("test 1 || ft_atoi : %i || atoi : %i\n", ft_atoi("1234"), atoi("1234"));
    printf("test 2 || ft_atoi : %i || atoi : %i\n", ft_atoi("-1234"), atoi("-1234"));
    
    
    //---------------test ft_calloc---------------//
    printf("--------------- test ft_calloc ---------------\n");
    char **tab_calloc;
    tab_calloc = (char **)ft_calloc(4, sizeof(char *));
    tab_calloc[0] = (char *)ft_calloc(10, sizeof(char));
    tab_calloc[1] = (char *)ft_calloc(10, sizeof(char));
    tab_calloc[2] = (char *)ft_calloc(10, sizeof(char));
    tab_calloc[3] = (char *)ft_calloc(10, sizeof(char));
    
    strcpy(tab_calloc[0], "String 0");
    strcpy(tab_calloc[1], "String 1");
    strcpy(tab_calloc[2], "String 2");
    strcpy(tab_calloc[3], "String 3");
    
    printf("test Calloc \n");
    printf("%s\n", tab_calloc[0]);
    printf("%s\n", tab_calloc[1]);
    printf("%s\n", tab_calloc[2]);
    printf("%s\n\n", tab_calloc[3]);
    
    free(tab_calloc);
    
    
    //---------------test ft_strdup---------------//
    printf("--------------- test ft_strdup ---------------\n");
    const char *original = "Hello, world!";
    char *copy = ft_strdup(original);
    printf("test || original :%s || copie :%s\n\n", original, copy);
    
    
    //---------------test ft_substr---------------//
    printf("--------------- test ft_substr ---------------\n");
    char *result_ftsubstr = ft_substr("Hello, world!", 7, 5);
    printf("test attendu : world || ft_substr : %s\n", result_ftsubstr);
    
    char *result_ftsubstr2 = ft_substr("Hello, world!", 7, 0);
    printf("test attendu : '' || ft_substr : %s\n\n", result_ftsubstr2);
    
        
    //---------------test ft_strjoin---------------//
    printf("---------------test ft_strjoin---------------\n");
    char *result_ft_strjoin = ft_strjoin("Hello, world! ", "I'm student");
    printf("test attendu : Hello, world! I'm student || ft_strjoin : %s\n", result_ft_strjoin);
    
    
    //---------------test ft_strtrim---------------//
    printf("---------------test ft_strtrim---------------\n");
    char *s1_trim = "#$@bonjour#$@";
    char *set_trim = "#$@";
    printf("test set = #$@ || s = #$@bonjour#$@ || ft_strtrim : %s\n\n", ft_strtrim(s1_trim, set_trim));
    
    
    //---------------test ft_split---------------//
    printf("---------------test ft_split---------------\n");
    char *str_split = " lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse ";
    char c_split = ' ';
    char **tab_split;
    tab_split = ft_split(str_split, c_split);
    size_t j = 0;
    while (tab_split[j] != NULL)
    {
        printf("test 1 || %s\n", tab_split[j]);
        j++;
    }
    printf("test 1 || %s\n\n", tab_split[j]);
    
    char *str_split2 = "               ";
    char c_split2 = ' ';
    char **tab_split2;
    tab_split2 = ft_split(str_split2, c_split2);
    size_t k = 0;
    while (tab_split2[k] != NULL)
    {
        printf("test 2 || %s\n", tab_split2[k]);
        k++;
    }
    printf("test 2 || %s\n\n", tab_split2[k]);
    
    
    //---------------test ft_itoa---------------//
    printf("---------------test ft_itoa---------------\n");
    char *result_iota;
    char *result_iota2;
    result_iota = ft_itoa(1241);
    result_iota2 = ft_itoa(-2347);
    printf("resultat attendu 1241 et -2347 : %s et %s\n\n", result_iota, result_iota2);
    
    
    //---------------test ft_strmapi---------------//
    printf("---------------test ft_strmapi---------------\n");
    char *capitale_mapi;
    char *minuscule_mapi;
    minuscule_mapi = "je suis un test";
    capitale_mapi = "JE SUIS UN TEST";
    char *resultmapi = ft_strmapi(minuscule_mapi, convert_to_uppercase);
    char *resultmapi2 = ft_strmapi(capitale_mapi, convert_to_lowercase);
    
    printf("chaine en majuscule : %s\n", resultmapi);
    printf("chaine en minuscule : %s\n\n", resultmapi2);
    
    
    //---------------test ft_striteri---------------//
    printf("\n---------------test ft_striteri---------------\n");
    char minuscule_striteri[] = "je suis un test";
    char capitale_striteri[] = "JE SUIS UN TEST";
    ft_striteri(minuscule_striteri, convert_to_uppercase2);
    ft_striteri(capitale_striteri, convert_to_lowercase2);
    
    printf("chaine en majuscule : %s\n", minuscule_striteri);
    printf("chaine en minuscule : %s\n", capitale_striteri);
    
    //---------------test ft_putchar_fd---------------//
    printf("---------------test ft_putchar_fd---------------\n");
    printf("Test avec la sortie standard (stdout) \n");
    ft_putchar_fd('A', 1);  // Affiche un caractère 'A' sur la sortie standard
    printf("\n\n");
    
    
    //---------------test ft_putstr_fd---------------//
    printf("---------------test ft_putstr_fd---------------\n");
    ft_putstr_fd("Hello, World!", 1);  // Affiche la chaîne "Hello, World!" sur la sortie standard
    printf("\n\n");
    
    
    //---------------test ft_putendl_fd---------------//
    printf("---------------test ft_putendl_fd---------------\n");
    ft_putendl_fd("Ceci est un test", 1);  // Affiche la chaîne "Ceci est un test" suivie d'un saut de ligne
    printf("\n\n");
    
    
    //---------------test ft_putnbr_fd---------------//
    printf("---------------test ft_putnbr_fd---------------\n");
    ft_putnbr_fd(12345, 1);  // Affiche l'entier 12345 sur la sortie standard
    printf("\n");
    
    ft_putnbr_fd(-9876, 1);  // Affiche l'entier -9876 sur la sortie standard
    printf("\n");
    
    ft_putnbr_fd(0, 1);  // Affiche l'entier 0 sur la sortie standard
    printf("\n");
    
    ft_putnbr_fd(-2147483648, 1);  // Affiche l'entier le plus bas pour un int (cas limite)
    printf("\n\n");

    //---------------test Liste Chaine---------------//
    t_list *list = NULL;
    t_list *first = list;
    int size;

    t_list *new_node1 = ft_lstnew("Premier, noeud");
    ft_lstadd_front(&list, new_node1);

    t_list *new_node2 = ft_lstnew("Deuxieme noeud");
    ft_lstadd_back(&list, new_node2);

    t_list *new_node3 = ft_lstnew("Troisieme, noeud");
    ft_lstadd_back(&list, new_node3);

    t_list *new_node4 = ft_lstnew("Quatrieme, noeud");
    ft_lstadd_back(&list, new_node4);
    printf("---------------Avant ft_lstmap et ft_lstiter---------------\n\n");
    t_list *tmp = list;
    while (tmp) {
        printf("Contenu du noeud avant modification : %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    // Application de ft_lstmap pour transformer la liste
    t_list *mapped_list = ft_lstmap(list, transform_content, del_content);

    // Affichage de la nouvelle liste après transformation
    printf("\n---------------Après ft_lstmap et ft_lstiter---------------\n\n");
    tmp = mapped_list;
    while (tmp) {
        printf("Contenu du noeud après modification : %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("\n");
    size = ft_lstsize(list);
    t_list *last = ft_lstlast(list);
    printf("\n---------------test ft_lstast---------------\n\n");
    printf("Dernier noeud : %s\n\n", (char *)last->content);
    
    printf("\n---------------test ft_lstnew, ft_lstaddfront, ft_lstadd_back, ft_lstsize---------------\n\n");
    // Affichage du contenu de chaque noeud avant suppression
    while (list)
    {
        printf("Contenu de mon noeud : %s\n", (char *)list->content);
        list = list->next;
    }
    printf("Nombre de noeud : %i\n\n", size);

    // Réinitialisation de la liste
    list = first;

    printf("---------------test ft_lstdelone (print le noeud puis free)---------------\n\n");
    printf("Adresse avant appel à la fonction et free: %p\n\n", (char *)new_node1->content);
    ft_lstdelone(new_node1, print_content);
    printf("Adresse après appel à la fonction et free: %p\n\n", (char *)new_node1);

    new_node1 = ft_lstnew("Premier, noeud");
    ft_lstadd_front(&list, new_node1);

    printf("---------------test ft_lstclear (print les content puis free la list)---------------\n\n");
    ft_lstclear(&list, print_content);
    printf("Liste après appel à la fonction et free : %p\n", (void *)list);
}
