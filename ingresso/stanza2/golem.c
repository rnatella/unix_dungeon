#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

	pid_t pid = fork();

	if(pid == 0) {

		execlp("tar", "tar", "zxf", "./teca.tar.gz", NULL);

	}
	else if(pid < 0) {

		perror("Il golem non riesce ad eseguire il tuo comando");
		exit(1);

	}
	else {

		wait(NULL);
	}

	printf("\nIl golem esegue il tuo comando e rimuove il sigillo da 'teca.tar.gz' (un archivio)\n\n");

	printf("Se provi a leggere la 'pergamena', avrai un messaggio di errore.\n\n");

	printf("Il comando ``ls -l'' ti mostrerà che non hai i permessi di accesso\n");
	printf("(nessuna 'r' di 'read', o 'w' di 'write').\n\n");

	printf("Usa il comando ``chmod +rw pergamena'' per darti i permessi di accesso.\n\n");

	return 0;
}
















































































/*
 *	       _______
 *	     _/       \_
 *	    / |       | \
 *	   /  |__   __|  \
 *	  |__/((o| |o))\__|
 *	  |      | |      |
 *	  |\     |_|     /|
 *	  | \           / |
 *	   \| /  ___  \ |/
 *	    \ | / _ \ | /
 *	     \_________/
 *	      _|_____|_
 *	 ____|_________|____
 *	/                   \  -- Mark Moir
 *
 *
 * Questo oggetto è un "golem", un gigante meccanico inanimato.
 *
 * I maghi possono animare i golem e impartirgli comandi.
 *
 * Per montare i pezzi del golem, digitare il comando:
 *
 * $ gcc golem.c -o golem
 *
 * Per avviare il golem, digita il persorso relativo del file eseguibile:
 *
 * $ ./golem
 *
 */

