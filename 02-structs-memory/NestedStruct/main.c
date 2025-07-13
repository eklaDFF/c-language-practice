#include "nested_struct.h"

int main()
{
	struct Bus usb_bus = { .name = "USB", .device_count = 0 };

	struct Device *keyboard = create_device(1, "Keyboard", "InputDriver", 1.2);
	struct Device *mouse = create_device(2, "Mouse", "InputDriver", 1.2);
	struct Device *camera = create_device(3, "WebCam", "VideoDriver", 2.1);

	add_device_to_bus(&usb_bus, keyboard);
	add_device_to_bus(&usb_bus, mouse);
	add_device_to_bus(&usb_bus, camera);

	list_all_devices(&usb_bus);
	free_all_devices(&usb_bus);

    return 0;
}
