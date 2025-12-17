obj-m += main.o

KDIR ?= /lib/modules/$(shell uname -r)/build
BUILD_DIR ?= $(PWD)/build

all:
	mkdir -p $(BUILD_DIR)
	cp Makefile $(BUILD_DIR)/Makefile
	ln -sf $(PWD)/src/* $(BUILD_DIR)/
	$(MAKE) -C $(KDIR) M=$(BUILD_DIR) modules

clean:
	rm -rf $(BUILD_DIR)

