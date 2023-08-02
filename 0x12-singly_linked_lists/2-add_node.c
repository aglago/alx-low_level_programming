#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    char *new_str = strdup(str);
    list_t *new_node ;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL) /* if memory allocation fails, return NULL */
        return (NULL);


    new_node -> str = new_str;
    if (new_node -> str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node -> len = strlen(str);
    new_node -> next = *head;
    *head = new_node;


    return (new_node);

    /** if malloc fails, we have to free something
     * if strdup fails, we have to free something.
     */
}
