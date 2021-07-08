1. mkdir <filename> - Crear repositorios (enlaces duros, 2)
   touch <filename> - Crear ficheros vacios (enlaces blandos, 0)
   ln - s enlace <filename> - Crear  enlace simbolico a fichero o directorio (acceso a un fichero o directorio que se encuentra en otro sitio del disco sin copiar el fichero o directorio).
   ln -n enlace <filename> - -n: crea ese enlace entre ambos ficheros. Crea enlaces duros

2. vim <filename> + excribir caracteres - bytes dentro del archivo

3. chmod 504 <filename> - Cambiar permisos de los archivos
	-- cuidado con los enlaces enlazados, afectan los cambios a ambos.

4. touch -t mmddHHMM <filename> - Cambio de fecha
   touch -mht mmddHHMM <filename> - Cambio de fecha en archivos enlazados
