#ifndef ORG_EEROS_HAL_FLINKDEVICE_HPP_
#define ORG_EEROS_HAL_FLINKDEVICE_HPP_

#include <string>
#include <flinklib.h>

namespace eeros {
	namespace hal {

		class FlinkDevice {
		public:
			FlinkDevice(std::string deviceNode);
			virtual ~FlinkDevice();
			
			flink_t* getDeviceHandle();

		private:
			flink_t *it;
		};
	};
};

#endif /* ORG_EEROS_HAL_FLINKDEVICE_HPP_ */
