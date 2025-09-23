/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:32:56 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/14 13:18:07 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_H
# define VARIABLES_H

/* Definimos una estructura y le damos el alias views */
typedef struct s_views
{
        int    top[4];
        int    bottom[4];
        int    left[4];
        int    right[4];
}	t_views;

#endif
