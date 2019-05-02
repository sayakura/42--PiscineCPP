/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:29:36 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:30:09 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger some_logger = Logger("log");
	some_logger.log("Console", "what 's up bro");
	some_logger.log("File", "wtf.avi");
	some_logger.log("Knowhere", "what happen in the revenagers 4");
	return 0;
}
