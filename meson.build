project('tiny-util', 'cpp',
  version : '1.0.0',
  license : 'MIT')

glib_dep = dependency('glib-2.0')

install_headers('tinyutil.h')

import('pkgconfig').generate(
  libraries : shared_library(
    'tinyutil',
    ['util.cpp'],
    include_directories : include_directories('.'),
    dependencies : glib_dep,
    install : true
  ),
  name: 'tinyutil',
  version : '1.0',
  description : 'A Tiny Utility library'
)
