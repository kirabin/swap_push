/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookpro <macbookpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:59:10 by dmilan            #+#    #+#             */
/*   Updated: 2021/03/05 15:04:23 by macbookpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include "libft/libft.h"

/*
** Execute
*/

void		execute_push(t_list **from, t_list **to);
void		execute_reverse_rotation(t_list **list);
void		execute_rotation(t_list **list);
void		execute_swap(t_list **list);

#endif