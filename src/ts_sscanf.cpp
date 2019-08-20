#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

std::string sub_str(std::string str, const int pos) {
    return str.substr(pos);
}

int main () {
    const char * qu_key = "56137184_0c_com#025zp#www/jw/showjobvip_3253909.aspx";
    const char * bad_qu_key = "56137184_com#025zp#www/jw/showjobvip_3253909.aspx";
    uint32_t doc_ror_intime = 0;
    uint32_t item_version = 0;
    char url[1024] = {0};
    // std::string 

    sscanf(qu_key, "%08x_%02x_%s", &doc_ror_intime, &item_version, url);
    fprintf(stdout, "-----------good qu key----------\n");
    fprintf(stdout, "doc_ror_intime: %d\n", doc_ror_intime);
    fprintf(stdout, "item_version: %d\n", item_version);
    fprintf(stdout, "url: %s\n", url);

    sscanf(bad_qu_key, "%08x_%02x_%s", &doc_ror_intime, &item_version, url);
    fprintf(stdout, "-----------bad qu key----------\n");
    fprintf(stdout, "doc_ror_intime: %d\n", doc_ror_intime);
    fprintf(stdout, "item_version: %d\n", item_version);
    fprintf(stdout, "url: %s\n", url);

    // sub_str
    std::string str;
    str.clear();
    str.assign(url);
    int npos = 1;
    std::string substr = sub_str(str, npos);
    fprintf(stdout, "substr: %s\n", substr.c_str());

    char * sort_key = new char[1024];
    
    strcpy(sort_key, substr.c_str());
    fprintf(stdout, "sort_key: %s\n", sort_key);

    delete [] sort_key;

    fprintf(stdout, "-------------sent key info-----------\n");
    const char * sent_key_str = "56583fa683560938_00";
    uint64_t sent_sign = 0;
    uint32_t sign_version = 0;
    sscanf(sent_key_str, "%16llx_%02x", &sent_sign, &sign_version);
    fprintf(stdout, "sent_sign: %llu\n", sent_sign);
    fprintf(stdout, "sent_sign: %u\n", sign_version);


    fprintf(stdout, "------------convert int ------------\n");
    std::string cont_len_str = "033";
    uint32_t cont_len = stoi(cont_len_str, nullptr, 10);
    fprintf(stdout, "cont_len; %u\n", cont_len);

    const char * sent_key_ss = "001033b734f17f6a";
    sscanf(sent_key_ss, "%16llx", &sent_sign);
    fprintf(stdout, "sent_sign: %llu", sent_sign);
    return 0;
}