api = 2
core = 7.x

projects[drupal][version] = 7.41

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = ee3942c3c647213d23378aa1ebe9a5d699a96ab6

; For building a precise release.
;projects[opigno_lms][version] = 1.20