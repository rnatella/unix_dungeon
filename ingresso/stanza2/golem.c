#include <sys/stat.h>
#include <stdio.h>

int main() {

	printf("\nIl golem prende vita!\n\n");

	int ret = chmod("./pergamena", S_IRUSR|S_IWUSR);

	if(ret < 0) {

		perror("Impossibile accedere alla pergamena");
		printf("\n");

		return 1;
	}

	printf("Esso rimuove il sigillo dalla teca, usando il comando:\tchmod +rw pergamena\n\n");

	printf("Usa il comando \"ls -l\" per verificare che hai ora i permessi di accesso.\n\n");

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
 * I maghi possono animare i golem e impartirgli comandi con un incantesimo.
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

