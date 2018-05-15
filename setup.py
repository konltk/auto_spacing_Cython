from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

ext_modules = Extension("klt_asp", 
	["pyasp.pyx"], 
	language="c", 
	# extra_compile_args=["-O3", "-Wall"],
    extra_link_args=["-L.", "-lKLT_kspace2012"],
    # extra_link_args=["-w"]
    )

setup(ext_modules=[ext_modules],
      cmdclass = {'build_ext': build_ext})