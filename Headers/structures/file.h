#ifndef _{PROJECT_NAME}_STRUCTURE_FILE_H_
#define _{PROJECT_NAME}_STRUCTURE_FILE_H_

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

#endif //_{PROJECT_NAME}_STRUCTURE_FILE_H_
