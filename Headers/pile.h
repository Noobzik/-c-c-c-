#ifndef _{PROJECT_NAME}_PILE_H_
#define _{PROJECT_NAME}_PILE_H_

/* Helpers */

#include "structures/pile.h"

/* Usage functions */

t_pile_list *   pile_create   (void);
void            pile_stack    (t_pile_list * l, t_pile_data p);
t_pile_data     pile_unstack  (t_pile_list * l);
void            pile_free     (t_pile_list * l);

#endif //_{PROJECT_NAME}_PILE_H_
