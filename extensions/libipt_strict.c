/* Shared library add-on to iptables for strict. */
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <iptables.h>

static void strict_help(void)
{
	printf("strict match takes no options\n");
}

static int strict_parse(int c, char **argv, int invert, unsigned int *flags,
                         const void *entry, struct xt_entry_match **match)
{
	return 0;
}

static struct xtables_match strict_mt_reg = {
	.name		= "strict",
	.version	= XTABLES_VERSION,
	.family		= PF_INET,
	.size		= XT_ALIGN(0),
	.userspacesize	= XT_ALIGN(0),
	.help		= strict_help,
	.parse		= strict_parse,
};

void _init(void)
{
	xtables_register_match(&strict_mt_reg);
}
