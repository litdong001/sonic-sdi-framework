#All exported headers
nobase_include_HEADERS = sonic/sdi_bus_api.h sonic/sdi_bus_framework.h sonic/sdi_bus.h \
                         sonic/sdi_driver_internal.h sonic/sdi_entity_info_internal.h \
                         sonic/sdi_fan_internal.h sonic/sdi_i2c_bus_api.h sonic/sdi_i2c_bus_framework.h\
                         sonic/sdi_i2c.h sonic/sdi_io_port_api.h sonic/sdi_led_internal.h sonic/sdi_media_internal.h \
                         sonic/sdi_pin_bus_api.h sonic/sdi_pin_bus_framework.h sonic/sdi_pin_group_bus_api.h sonic/sdi_pin_group_bus_framework.h \
                         sonic/sdi_pin_group.h sonic/sdi_pin.h sonic/sdi_pld_upgrade_internal.h sonic/sdi_resource_internal.h sonic/sdi_sys_common.h \
                         sonic/sdi_thermal_internal.h

#The sdi-framework library
lib_LTLIBRARIES = libsonic_sdi_framework.la

libsonic_sdi_framework_la_SOURCES = src/sdi_driver_framework.c src/sdi_bus_framework.c \
                                    src/sdi_resource_framework.c src/sdi_pin_bus_api.c src/sdi_i2c_bus_api.c \
                                    src/sdi_pin_group_bus_api.c src/sdi_bus_api.c\
                                    src/sdi_io_port_api.c

libsonic_sdi_framework_la_LDFLAGS = -ldl -lsonic_common -lsonic_logging -lpthread -lrt -version-info 1:1:0
libsonic_sdi_framework_la_CFLAGS =  -I$(top_srcdir)/sonic  -I$(includedir)/sonic  

