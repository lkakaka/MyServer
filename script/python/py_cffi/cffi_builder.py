
def build():
    from cffi import FFI
    ffibuilder = FFI()

    # cdef() expects a single string declaring the C types, functions and
    # globals needed to use the shared object. It must be in valid C syntax.
    ffibuilder.cdef("""
        double power(double base, int exponent);
    """)

    # set_source() gives the name of the python extension module to
    # produce, and some C source code as a string.  This C code needs
    # to make the declarated functions, types and globals available,
    # so it is often just the "#include".
    ffibuilder.set_source("_math_cffi",
    """
        #include "../../../Math/MathFunction.h"   // the C header of the library
    """,
        libraries=['../../../Bin/Release/MathFunction'])   # library name, for the linker
    
    ffibuilder.compile(verbose=True)

if __name__ == "__main__":
    build()