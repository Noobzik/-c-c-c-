#ifndef _SNAKE_PILE_H_
#define _SNAKE_PILE_H_

/* Helpers */

typedef struct  s_pile_data
{
	// Place data here
}               t_pile_data;

typedef struct              s_pile_element
{
    t_pile_data             data;
    struct s_pile_element * next;
    struct s_pile_element * precedent;
}                           t_pile_element;

typedef struct          s_pile_list
{
    t_pile_element *    first;
    t_pile_element *    last;
    int                 size;
}                       t_pile_list;

/* Usage functions */

t_pile_list *   pile_create   (void);
void            pile_stack    (t_pile_list * l, t_pile_data p);
t_pile_data     pile_unstack  (t_pile_list * l);
void            pile_free     (t_pile_list * l);

#endif //_SNAKE_PILE_H_
