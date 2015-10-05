api = 2
core = 7.x

projects[drupal][version] = 7.39

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 1150b7f67cd30e8a1c12f4f3d85311f50549e59a

; For building a precise release.
;projects[opigno_lms][version] = 1.19