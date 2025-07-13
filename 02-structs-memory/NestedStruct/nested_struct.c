#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nested_struct.h"

struct Device *create_device(int id, const char *name, const char *driver_name, float version)
{
	struct Device *new_device = malloc(sizeof(struct Device));
	new_device->id = id;
	strcpy(new_device->name, name);
	strcpy(new_device->driver.name, driver_name);
	new_device->driver.version = version;
	return new_device;
}

void add_device_to_bus(struct Bus *bus, struct Device *device)
{
	if(bus->device_count >= MAX_DEVICE){
		printf("Bus %s is full!\n", bus->name);
	}else{
		bus->devices[bus->device_count++] = device;
	}
}

void list_all_devices(struct Bus *bus)
{
	for(int i = 0; i < bus->device_count; i++){
		struct Device *device = bus->devices[i];
		printf("Device ID : %d, Name : %s\n", device->id, device->name);
		printf("Driver Name : %s, Version : %f\n",device->driver.name, device->driver.version);
	}
}

void free_all_devices(struct Bus *bus)
{
	for(int i = 0; i < bus->device_count; i++){
		free(bus->devices[i]);
	}
	bus->device_count = 0;
}
