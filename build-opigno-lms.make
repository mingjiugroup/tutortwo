api = 2
core = 7.x

projects[drupal][version] = 7.38

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 738b03988a69a0f751ce847909f4708a3265a917

; For building a precise release.
;projects[opigno_lms][version] = 1.18