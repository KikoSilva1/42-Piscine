/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:14 by framiran          #+#    #+#             */
/*   Updated: 2025/02/05 17:07:46 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test cases for atoi()
    const char *test_cases[] = {
        "  -42",    // Negative number with leading spaces
        "  +42",    // Positive number with leading spaces
        "42",       // Simple positive number
        "  --+42",  // Multiple signs, should result in 42
        "  -+42",   // Another case of multiple signs, should result in -42
        "  --42abc", // Number with trailing non-numeric characters
        "  ++42",   // Multiple '+' signs, should result in 42
        "-42abc",   // Negative number followed by non-numeric characters
        "42abc",    // Positive number followed by non-numeric characters
        "   ",      // Empty input, should return 0
        "  00042",  // Number with leading zeros, should return 42
        "  -00042"  // Negative number with leading zeros, should return -42
    };

    // Testing each case with atoi()
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        printf("atoi(\"%s\") = %d\n", test_cases[i], atoi(test_cases[i]));
    }

    return 0;
}

