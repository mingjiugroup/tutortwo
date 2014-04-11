api = 2
core = 7.x

projects[drupal][version] = 7.26

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 7f3dd30e7ee8ccffaf38497869c6f124d08e31c3

; For building a precise release.
;projects[opigno_lms][version] = 1.7