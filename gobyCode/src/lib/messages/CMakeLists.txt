protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${project_INC_DIR}
  distress_signal.proto
  )

add_library(hat_messages SHARED ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(hat_messages ${PROTOBUF_LIBRARIES})
