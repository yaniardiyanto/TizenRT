/* ****************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

#ifndef __MEDIA_OUTPUTDATASOURCE_H
#define __MEDIA_OUTPUTDATASOURCE_H

#include <media/DataSource.h>

namespace media {
namespace stream {
/**
 * @class
 * @brief This class is output data structure
 * @details @b #include <media/OutputDataSource.h>
 * @since TizenRT v2.0 PRE
 */
class OutputDataSource : public DataSource
{
public:
	/**
	 * @brief Constructs an empty OutputDataSource.
	 * @details @b #include <media/OutputDataSource.h>
	 * @since TizenRT v2.0 PRE
	 */
	OutputDataSource();
	/**
	 * @brief Constructs a new object provide with audio configuration
	 * @details @b #include <media/OutputDataSource.h>
	 * param[in] channels   The channels that the channels of audio
	 * param[in] sampleRate The sampleRate that the sample rate of audio
	 * param[in] pcmFormat  The pcmFormat that the pcm format of audio	
	 * @since TizenRT v2.0 PRE
	 */
	OutputDataSource(unsigned short channels, unsigned int sampleRate, int pcmFormat);
	
	/**
	 * @brief Copy constructs for OutputDataSource.
	 * @details @b #include <media/OutputDataSource.h>
	 * @since TizenRT v2.0 PRE
	 */
	OutputDataSource(const OutputDataSource& source);
	/**
	 * @brief Operator= for OutputDataSource.
	 * @details @b #include <media/OutputDataSource.h>
	 * @since TizenRT v2.0 PRE
	 */
	OutputDataSource& operator=(const OutputDataSource& source);
	/**
	 * @brief Deconstructs an empty OutputDataSource.
	 * @details @b #include <media/OutputDataSource.h>
	 * @since TizenRT v2.0 PRE
	 */
	virtual ~OutputDataSource();

public:
	/**
	 * @brief Puts the stream data
	 * @details @b #include <media/OutputDataSource.h>
	 * @since TizenRT v2.0 PRE
	 */
	virtual size_t write(unsigned char* buf, size_t size) = 0;
};
} // namespace stream
} // namespace media

#endif
