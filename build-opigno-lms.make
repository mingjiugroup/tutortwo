api = 2
core = 7.x

projects[drupal][version] = 7.28

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 60fbb9cf9bdcbe5b22e74fe0556d9c05ae7507b1

; For building a precise release.
;projects[opigno_lms][version] = 1.11
