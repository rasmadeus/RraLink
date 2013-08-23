#ifndef GLOBAL_H
#define GLOBAL_H

#define DECLARE_PRIVATE(Class)\
    private:\
        inline Class##Private* d_func(){\
            return reinterpret_cast<Class##Private*>(d_ptr);\
        }\
        inline const Class##Private* d_func() const{\
            return reinterpret_cast<Class##Private*>(d_ptr);\
        }\
        friend class Class##Private;

#define D(Class)\
    Class##Private* const d = d_func();

#define NO_COPY(Class)\
    Class(const Class&);\
    Class& operator = (const Class&);

#define UNUSED(x)\
    (void) x;

#endif // GLOBAL_H
