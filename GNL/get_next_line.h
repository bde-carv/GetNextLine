/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:30:19 by bde-carv          #+#    #+#             */
/*   Updated: 2022/06/03 16:11:22 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*read_line(int fd, char *line_a);
char	*ft_strjoin(char *line_a, char *line_b);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
char	*output(char *line_a);
char	*new_line(char *line_a);

#endif