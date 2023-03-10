# Chat-GPT programs with main()

add_executable (arrangeab arrangeab.c)
add_executable (countletters countletters.c)
add_executable (debug01 debug01.c)
add_executable (debug02-rewrite debug02-rewrite.c)
add_executable (debug02-rewriteb debug02-rewriteb.c)
#add_executable (debug02 debug02.c)
add_executable (fgets fgets.c)
add_executable (memory0 memory0.c)
add_executable (memory1 memory1.c)
add_executable (memory2 memory2.c)
add_executable (orderbrackets orderbrackets.c)
add_executable (pairs pairs.c)
add_executable (partition3 partition3.c)
add_executable (pascal1 pascal1.c)
add_executable (readsortthird readsortthird.c)
add_executable (readsortthird2 readsortthird2.c)


# These do not have main(). Just compile only.

set(SOURCE_FILES binarydeletebug.c binarydeletefix.c binarydeletefix2.c binarysearch01.c bitand.c linkedlist1.c linkedlist2.c linkedlist3.c linkedlist4.c linkedlist5.c mallocfail.c mallocleak.c mallocleak2.c mallocleak3.c mallocleak4.c partition5.c partition6.c sizeof.c)

foreach(source_file ${SOURCE_FILES})
    get_filename_component(object_file ${source_file} NAME_WE)
    set(object_file ${object_file}.o)

    add_custom_command(
        OUTPUT ${object_file}
        COMMAND ${CMAKE_CXX_COMPILER} -c ${source_file} -o ${object_file}
        DEPENDS ${source_file}
    )

    list(APPEND OBJECT_FILES ${object_file})
endforeach()

#add_library(my_library ${OBJECT_FILES})
