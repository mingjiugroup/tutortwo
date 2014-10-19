api = 2
core = 7.x

projects[drupal][version] = 7.32

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 71ef2ead83b5b5042cb9b1b2fa5c78b0a350e13d

; For building a precise release.
;projects[opigno_lms][version] = 1.16
