api = 2
core = 7.x

projects[drupal][version] = 7.31

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = c780f499e786547ec25a15986f8c13d0ffed1d72

; For building a precise release.
;projects[opigno_lms][version] = 1.15
