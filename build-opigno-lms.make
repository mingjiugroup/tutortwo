api = 2
core = 7.x

projects[drupal][version] = 7.39

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = ec49bde264d9386cde2d0f9502598416808b9fd8

; For building a precise release.
;projects[opigno_lms][version] = 1.19