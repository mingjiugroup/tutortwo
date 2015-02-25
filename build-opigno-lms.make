api = 2
core = 7.x

projects[drupal][version] = 7.34

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 48b60f5bba6751da659ff96d16218664d71b3f18

; For building a precise release.
;projects[opigno_lms][version] = 1.18
