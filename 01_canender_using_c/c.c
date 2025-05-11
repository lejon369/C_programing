#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int day, month,year;
    char description[100];
}Event;

void addEvent(Event **events, int *count){
    *events = realloc(*events,(*count +1) * sizeof(Event));
    if (!*events) exit(1);

    printf("Enter Date(DD MM YY): ");
    scanf("%d %d %d", &(*events)[*count].day,&(*events)[*count].month,&(*events)[*count].year);
    getchar();

    printf("Enter Description: ");
    fgets((*events)[*count].description,100, stdin);
    (*events)[*count].description[strcspn((*events)[*count].description, "\n")] = 0;

    (*count)++;
}

void displayEvents(Event *events, int count){
    for(int i = 0; i< count; i++)
        printf("%02d %02d %04d - %s\n",events[i].day,events[i].month,events[i].year,events[i].description);
}


void saveTOFile(Event *events, int count, const char *fname){
    FILE *f = fopen(fname, "w");
    if(!f) return;

    for( int i=0 ; i< count ; i++)
      fprintf(f, "%d %d %d %s\n", events[i].day,events[i].month,events[i].year,events[i].description);
    fclose(f);
}

void loadFormFile (Event **events, int *count ,const char *fname){
    FILE *f = fopen(fname, "r");
    if(!f) return;

    char line[200];

    while (fgets(line, sizeof(line), f)) {
         *events = realloc(*events, (*count + 1) * sizeof(Event));
        if (!*events) exit(1);

        sscanf(line , "%d %d %d %[^\n]", &(*events)[*count].day,&(*events)[*count].month,&(*events)[*count].year,&(*events)[*count].description);
        (*count)++;

    }
    fclose(f);

}
int main()
{
	Event *events = NULL;
	int count = 0,choices;

	const char *fname = "calender.txt";
    //

    do{
        printf("\n 1.Add event, 2. view event, 3. save & exit\n choices: ");
        scanf("%d", &choices);

        switch(choices){
            case 1: addEvent(&events, &count);
            break;
            case 2: displayEvents(events,count);
            break;
            case 3:saveTOFile(events,count,fname);
            break;

            default: printf("Invalid .\n");
        }
        }
         while (choices != 3);
            free(events);

    return 0;

    }


















