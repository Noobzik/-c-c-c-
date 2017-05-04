#ifndef _SNAKE_FILE_H_
#define _SNAKE_FILE_H_

/* Helpers */

typedef struct  s_file_data
{
	// Place data here
}               t_file_data;

typedef struct              s_file_element
{
    t_file_data             data;
    struct s_file_element * next;
    struct s_file_element * precedent;
}                           t_file_element;

typedef struct          s_file_list
{
    t_file_element *    first;
    t_file_element *    last;
    int                 size;
}                       t_file_list;

/* Usage functions */

t_file_list *   file_create   (void);
void            file_stack    (t_file_list * l, t_file_data p);
t_file_data     file_unstack  (t_file_list * l);
void            file_free     (t_file_list * l);

#endif //_SNAKE_FILE_H_
