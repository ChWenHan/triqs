SET(PYTHON_SOURCES 
 ${CMAKE_CURRENT_SOURCE_DIR}/__init__.py
 ${CMAKE_CURRENT_SOURCE_DIR}/fit.py
)

install (FILES ${PYTHON_SOURCES} DESTINATION ${TRIQS_PYTHON_LIB_DEST}/fit)


