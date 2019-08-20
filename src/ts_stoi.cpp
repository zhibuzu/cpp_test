#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

int main(void) {
    std::string str = "2323298347293874928374927392374924";
    int res = 0;
    try {
        res = stoi(str);
    } catch (std::invalid_argument& e) {
        fprintf(stderr, "err: stoi no conversion\n");
    } catch (std::out_of_range& e) {
        fprintf(stderr, "err: the converted value out of range\n");
    } catch(...) {
        fprintf(stderr, "err: any other err\n");
    }
    
    fprintf(stdout, "res: %d\n", res);

    std::vector<int> vec = {1, 2};
    fprintf(stdout, "vec[0]: %d\n", vec[0]);
    // fprintf(stdout, "vec[3]: %d\n", vec[3]);
    fprintf(stdout, "sizeof vec: %lu\n", vec.size());

    return 0;
}