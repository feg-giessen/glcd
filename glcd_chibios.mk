# List of the required lwIP files.
ifeq ($(GLCD),)
  GLCD = .
endif

GLCDSRC = ${GLCD}/glcd.c \
          ${GLCD}/graphics.c \
          ${GLCD}/graphs.c \
          ${GLCD}/text.c \
          ${GLCD}/text_tiny.c \
          $(wildcard ${GLCD}/controllers/*.c) \
          $(wildcard ${GLCD}/devices/*.c)

# Required include directories
GLCDINC = ${GLCD}/controllers \
          ${GLCD}/devices \
          ${GLCD}/devices/inc \
          ${GLCD}/fonts \
          ${GLCD}
