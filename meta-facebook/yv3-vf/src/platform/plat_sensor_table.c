#include <stdio.h>
#include <string.h>

#include "sensor.h"
#include "ast_adc.h"
#include "plat_sensor_table.h"
#include "plat_class.h"
#include "plat_i2c.h"

#define CONFIG_ISL69260 false
bool stby_access(uint8_t sensor_number);

sensor_cfg plat_sensor_config[] = {
	/* number,                  type,       port,      address,      offset,
	   access check arg0, arg1, sample_count, cache, cache_status, mux_address, mux_offset,
	   pre_sensor_read_fn, pre_sensor_read_args, post_sensor_read_fn, post_sensor_read_fn  */
};

const int SENSOR_CONFIG_SIZE = ARRAY_SIZE(plat_sensor_config);