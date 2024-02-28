add_executable(pthreads-ex001 main.cpp)

if (WIN32)
    target_link_libraries(pthreads-ex001 PRIVATE PThreads4W::PThreads4W)
else()
    target_link_libraries(pthreads-ex001 PRIVATE Threads::Threads)
endif()
