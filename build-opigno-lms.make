api = 2
core = 7.x

projects[drupal][version] = 7.26

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 3aa2cf5186b7bdfe7ef1ec7e8d41873f7a22ab9f

; For building a precise release.
;projects[opigno_lms][version] = 1.7