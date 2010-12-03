cmake_minimum_required (VERSION 2.6)
set(CMAKE_CXX_FLAGS "-DCONFIG_DEFAULT='\"/usr/local/etc/dspam.conf\"' -DLOGDIR='\"/usr/local/var/dspam/log\"' ")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-write-strings")  
message (${CMAKE_CXX_FLAGS})
add_library(    libdspamf 
                buffer.cpp
                decode.cpp
                diction.cpp
                heap.cpp
                libdspam.cpp
                nodetree.cpp
                pref.cpp
                storage_driver.cpp
                tokenizer.cpp
                util.cpp
                base64.cpp
                list.cpp
                hash.cpp
                read_config.cpp
            )
