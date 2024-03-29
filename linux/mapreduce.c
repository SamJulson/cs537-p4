#include "mapreduce.h"
#include <stdlib.h>

char *get_next(char *key, int num_partition);

void MR_Emit(char *key, char *value) {

}

unsigned long MR_DefaultHashPartition(char *key, int num_partitions) {
    unsigned long hash = 5381;
    int c;
    while ((c = *key++) != '\0')
        hash = hash * 33 + c;
    return hash % num_partitions;
}

void MR_Run(int argc, char *argv[], Mapper map, int num_mappers, 
    Reducer reduce, int num_reducers, Partitioner partition) {


}

char *get_next(char *key, int num_partition) {
    return NULL;
}