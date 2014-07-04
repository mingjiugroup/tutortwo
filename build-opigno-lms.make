api = 2
core = 7.x

projects[drupal][version] = 7.28

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 679d7ab2c495d9699d03994bc65a8f7a61462422

; For building a precise release.
;projects[opigno_lms][version] = 1.11
