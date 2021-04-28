#include "includes.h"

static t_list	*get_commands_from_stdin(void)
{
	t_list	*commands;
	char	*line;

	commands = NULL;
	while (true)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		if (is_valid_command(line))
			list_add_back(&commands, new_list(line));
		else
		{
			put_string("Error: not a valid command, ignoring...\n");
		}
	}
	return (commands);
}

int	main(int argc, char **argv)
{
	t_all	*all;

	if (argc >= 2)
	{
		all = init_all();
		all->stack_a = argv_to_stack_a(argv + 1);
		if (all->stack_a)
		{
			all->commands = get_commands_from_stdin();
			execute_commands(all);
			if (all->stack_b == NULL
				&& is_list_sorted(all->stack_a, list_compare_int_less))
				put_string("OK\n");
			else
				put_string("KO\n");
		}
		free_all(all);
	}
	else
		put_string("Error: Not enough arguments!\n");
	return (0);
}
