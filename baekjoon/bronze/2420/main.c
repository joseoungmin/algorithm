/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojo <seojo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:20:39 by seojo             #+#    #+#             */
/*   Updated: 2023/01/06 08:55:17 by seojo            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define ABS(num)	num < 0 ? (num * -1) : num

int main(void)
{
	long long	num1;
	long long	num2;
	long long	total;

	scanf("%lld%lld", &num1, &num2);
	total = num1 - num2;
	printf("%lld\n", ABS(total));
	return (0);
}
