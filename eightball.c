#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Array of standard Magic 8 Ball responses
    const char *responses[] = {
        "It is certain.", "It is decidedly so.", "Without a doubt.",
        "Reply hazy, try again.", "Ask again later.", "Don't count on it.",
        "My sources say no.", "Very doubtful."
        // Additional responses can be added here
    };
    int numResponses = sizeof(responses) / sizeof(responses[0]);

    char question[100];
    srand(time(NULL)); // Seed for randomness

    printf("Ask the Magic 8 Ball a question:\n");

    while (1) {
        printf("> ");
        if (!fgets(question, sizeof(question), stdin) || (question[0] == 'q')) break;

        // Pick a random index
        printf("Magic 8 Ball says: %s\n\n", responses[rand() % numResponses]);
    }
    return 0;
}
