#include <iostream>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    // Check if file path argument is provided
    if (argc < 2) {
		cerr << "Error arguments" << endl;
        return 1; 
    }

    const char* filePath = argv[1];


    int fd = open(filePath, O_WRONLY);
    if (fd < 0) {
        cerr << "Error: opening " << filePath << endl;
        return 1; 
    }

    struct stat fileStat;
    if (fstat(fd, &fileStat) < 0) {
        std::cerr << "Unable to get file status." << endl;
        close(fd);
        return 1;
    }

    off_t size = fileStat.st_size;
    for (off_t i = 0; i < size; ++i) {
        if (write(fd, "\0", 1) != 1) {
            std::cerr << "Error:overwriting." << std::endl;
            close(fd);
            return 1;
        }
    }

    close(fd);

    if (unlink(filePath) < 0) {
        cerr << "Error: Unable to delete file " << filePath << endl;
        return 1; 
    }
    return 0;
}
