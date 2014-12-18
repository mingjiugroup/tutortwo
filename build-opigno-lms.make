api = 2
core = 7.x

projects[drupal][version] = 7.34

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 38f24be9289c00ad43c7b6b0c5aa80ce1e823094

; For building a precise release.
;projects[opigno_lms][version] = 1.17
