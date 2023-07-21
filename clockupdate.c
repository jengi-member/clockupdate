#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

int main() {
	while(1) {
		struct timeval t;
		gettimeofday(&t, NULL);

		// microseconds of the date, use to properly time the sleep
		int microsec = (int)(t.tv_usec);

		system("update_clock");
		
		usleep(1000000 - microsec);
	}
}
