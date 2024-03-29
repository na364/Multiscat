!Hard limits on Multiscat parameters included everywhere at compile time

      parameter (NZFIXED_MAX = 550)        !max no of z points in fixed pot.
      parameter (NVFCFIXED_MAX = 4096)      !max no of fourier cmpts (fixed, from file)

      parameter (nmax = 1024)    !         diffraction channels
      parameter (mmax = 550)    !         z grid points
      parameter (nfcx = 4096)    !         max number of potential fourier components per z slice