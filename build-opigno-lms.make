api = 2
core = 7.x

projects[drupal][version] = 7.23

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 835eda18578a090e29cc212eded796279162b433

; For building a precise release.
;projects[opigno_lms][version] = 1.0-rc1
