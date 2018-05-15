cdef extern from "asp-api.h":
    int KLT_wordspace_initialize_dicpath(char *dicpath);
    void KLT_wordspace_option(char *str, char *res_str, int minfreq, int spmark_min, int flag);

import os
def dic_init(path):
    path = os.path.abspath(path)
    if path[-1] != '/':
        path += "/"
    path += "dic/"
    path = path.encode("cp949")
    ret = KLT_wordspace_initialize_dicpath(path);
    return ret

def asp(s):
    s=s.encode("cp949")
    cdef char res[1024];
    KLT_wordspace_option(s, res, 1, '5', 1);	
    
    return res.decode("cp949")
