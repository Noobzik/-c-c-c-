#ifndef _{PROJECT_NAME}_STRUCTURE_PILE_H_
#define _{PROJECT_NAME}_STRUCTURE_PILE_H_

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

#endif //_{PROJECT_NAME}_STRUCTURE_PILE_H_
