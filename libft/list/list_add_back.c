#include "libft.h"

void	list_add_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	while (node->next)
		node = node->next;
	node->next = new;
}
