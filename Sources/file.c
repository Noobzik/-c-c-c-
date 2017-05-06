#include <stdlib.h>
#include "../Headers/file.h"

/* Internal functions prototype */

t_file_element * file_list_extract(t_file_list * l);

/* Usage functions */

/**
 * create a list
 *
 * @param   void
 * @return  t_file_list
 */
t_file_list *       file_create()
{
    t_file_list *   l;

    l = 0;
    if (!(l = (t_file_list *) malloc(sizeof(t_file_list)))) return l;
    l->first = 0;
    l->last = 0;
    l->size = 0;
    return l;
}

/**
 * stack a data
 *
 * @param   t_file_list - l
 *          t_file_data - p
 * @return: void
 */
void                    file_stack(t_file_list * l, t_file_data p)
{
    t_file_element *    e;

    e = 0;
    if (!(e = malloc(sizeof(t_file_element)))) return e;
    e->data = p;
    e->next = 0;
    e->precedent = 0;
    if (l->size == 0) l->first = e;
    else {
        l->last->next = e;
        e->precedent = l->last;
    }
    l->last = e;
    l->size++;
}

/**
 * unstack last data
 *
 * @param   t_file_list - l
 * @return  t_file_data
 */
t_file_data             file_unstack(t_file_list * l)
{
    t_file_element *    e;
    t_file_data         d;

    e = file_list_extract(l);
    d = e->data;
    free(e);
    return d;
}

/**
 * destruct list
 *
 * @param   t_file_list - l
 * @return  void
 */
inline void file_free(t_file_list * l)
{
    while (l->size != 0) free(file_list_extract(l));
    free(l);
}

/* Internal function */

/**
 * extract an element
 *
 * @param   t_file_list - l
 * @return  t_file_element
 */
t_file_element *        file_list_extract(t_file_list * l)
{
    t_file_element *    e;

    e = 0;
    if (!(l->size == 0)) {
        e = l->last;
        l->last = e->precedent;
        l->size--;
        if (!(l->size == 0)) {
            e->next = 0;
            l->last->next = 0;
        }
    } else l->first = 0;
    return e;
}
