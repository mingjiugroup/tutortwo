api = 2
core = 7.x

projects[drupal][version] = 7.30

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = a45e10d495a06c1a1fb0a2426fb0373d7a962d42

; For building a precise release.
;projects[opigno_lms][version] = 1.14
