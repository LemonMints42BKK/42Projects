/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 02:15:54 by pnopjira          #+#    #+#             */
/*   Updated: 2023/08/14 05:36:55 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int argc, char **argv)
{
    char   **ptr = argv;
    int     i = 1, j = 0;
    
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(ptr[i])
        {   
            j = 0;
            while (ptr[i][j] != '\0')
                std::cout << (char)std::toupper(ptr[i][j++]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
