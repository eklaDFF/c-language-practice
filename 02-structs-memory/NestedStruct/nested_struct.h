#ifndef NESTED_STRUCT_H
#define NESTED_STRUCT_H

#define MAX_DEVICE 10

struct Driver{
	char name[30];
	float version;
};

struct Device{
	int id;
	char name[30];
	struct Driver driver;
};

struct Bus{
	char name[30];
	struct Device *devices[10];
	int device_count;
};

struct Device *create_device(int id, const char *name, const char *driver_name, float version);
void add_device_to_bus(struct Bus *bus, struct Device *device);
void list_all_devices(struct Bus *bus);
void free_all_devices(struct Bus *bus);
#endif
