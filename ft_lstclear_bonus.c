/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantacr <csantacr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:18:42 by csantacr          #+#    #+#             */
/*   Updated: 2022/10/12 22:25:28 by csantacr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_n;

	while (*lst)
	{
		next_n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_n;
	}
	*lst = NULL;
}
