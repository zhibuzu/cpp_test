#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

void read_file() {
    FILE *pFile = fopen("./test.txt", "r");
    char str;
    char pstr[100] = "hello";

    if (NULL != pFile) {
        if (NULL != fgets(pstr, 100, pFile)) {
            std::cout << strlen(pstr) << std::endl;
            // int len = strlen(pstr);
            // (*(pstr + len)) = '\0'; 
            std::cout << pstr << std::endl;
        }
    }

    // pstr.clear();
    std::string ss = static_cast<std::string>(pstr);
    std::cout << ss << std::endl;

    fclose(pFile);
}

int write_file() {
    FILE *pFile = fopen("./20180528.txt", "wb");
    if (pFile == NULL) {
        printf("pFile is null");
        return 1;     
    }

    char str1[4] = "123";
    printf("sizeof(char): %lu\n", sizeof(char));
    printf("sizeof(char): %lu\n", sizeof(str1));
    fwrite(str1, sizeof(char), sizeof(str1), pFile);
    fclose(pFile);
    return 0;
}

int write_fstream() {
    std::ofstream ofs;

    ofs.open("./222", std::ofstream::trunc | std::ofstream::binary);
    // ofs << "hello world\n";
    if (!ofs) {
        std::cout << "open file failed" << std::endl;
        return 1;
    }

    char str1[4] = "kvc";
    // char *pStr = str1;
    ofs.write(str1, 4);

    int kv_counter = 1000;
    ofs.write((char *)&kv_counter, sizeof(int));

    // delete str1;
    ofs.close();
    return 0;
}

int read_ifstream() {
    std::fstream ifs("./222", std::fstream::binary | std::fstream::in);

    char * str = new char[4];
    ifs.read(str, 4);
    fprintf(stdout, "str: %s\n", str);

    int kv_counter;
    ifs.read((char *)&kv_counter, sizeof(int));
    fprintf(stdout, "kv_counter: %d", kv_counter);

    ifs.close();

    delete [] str;

    return 0;
}

int seekp() {
    std::ofstream outfile;
    outfile.open ("test.txt");

    outfile.write ("100This is an apple",16);
    // long pos = outfile.tellp();
    // std::cout << pos << std::endl;
    outfile.seekp (0);
    outfile.write ("200", 3); // This is a sample

    outfile.close();

    return 0;
}

int read_fp() {
    FILE *pFile = fopen("./222", "rb");
    char * str = new char[4];
    int kv_count = 0;

    fread(str, 4, 1, pFile);
    fread(&kv_count, sizeof(int), 1, pFile);
    fprintf(stdout, "str: %s\n", str);
    fprintf(stdout, "kv_count: %d", kv_count);

    delete [] str;

    return 0;
}

int write_append() {
    std::fstream fs("./333", std::fstream::binary | std::fstream::in | std::fstream::out);
    if (!fs) {
        return 1;
    }

    // append
    fs.seekg(0, fs.end);
    uint64_t n = 44;
    fs.write((char *)&n, sizeof(uint64_t));
    fs.seekg(0, fs.beg);

    // read
    char * str = new char[4];
    fs.read(str, 4);
    fprintf(stdout, "str: %s\n", str);

    int n1;
    fs.read((char *)&n1, sizeof(int));
    fprintf(stdout, "n1: %d\n", n1);

    uint64_t n2;
    fs.read((char *)&n2, sizeof(uint64_t));
    fprintf(stdout, "n2: %llu\n", n2);

    uint64_t n3;
    fs.read((char *)&n3, sizeof(uint64_t));
    fprintf(stdout, "n3: %llu\n", n3);    

    fs.close();
    delete [] str;

    return 0;
}

int write_noexist_file() {
    std::fstream fs("./777", std::fstream::binary | std::fstream::in | std::fstream::out);
    
    // fs.seekp(0);

    // char strr[100] = "jesse";
    // char * str = strr;
    // // fprintf(stdout, "strr len : %lu\n", sizeof(strr));
    // // fprintf(stdout, "str len : %lu", strlen(str));
    // fs.write(str, strlen(str) + 1);

    if (fs.is_open()) {
        fs.seekg(0);
        fprintf(stdout, "fs is open");
        char * chr = new char[6];
        fs.read(chr, 6);
        fprintf(stdout, "chr: %s\n", chr);
        fs.close();
        return 0;
    }
    
    // fs.clear();
    // fs.open("./777", std::fstream::binary | std::fstream::out);
    fs.close();

    return 0;
}

int main() {
    // read_file();
    //write_file();
    // write_fstream();
    // seekp();
    // read_ifstream();
    // read_fp();
    return write_noexist_file();
}