/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheel-n <jcheel-n@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:18:31 by jcheel-n          #+#    #+#             */
/*   Updated: 2023/05/18 00:39:26 by jcheel-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_order_three(t_stack **head, int delete)
{
	int	biggest;

	biggest = ft_find_biggest(*head);
	if ((*head)->index == biggest)
		ft_ra(head, 0);
	else if ((*head)->next->index == biggest)
		ft_rra(head, 0);
	if ((*head)->index > (*head)->next->index)
		ft_sa(head, 0);
	if (delete)
		ft_delete_stack(head);
}
