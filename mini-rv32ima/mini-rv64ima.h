#ifndef _MINI_RV64IMAH_H
#define _MINI_RV64IMAH_H

#ifndef MINIRV64WARN
	#define MINIRV64WARN( x... );
#endif

#ifndef MINIRV64_DECORATE
	#define MINIRV64_DECORATE static
#endif

#ifndef MINIRV64_RAM_IMAGE_OFFSET
	#define MINIRV64_RAM_IMAGE_OFFSET  0x80000000
#endif

#ifndef MINIRV64_POSTEXEC
	#define MINIRV64_POSTEXEC(...);
#endif

#ifndef MINIRV64_HANDLE_MEM_STORE_CONTROL
	#define MINIRV64_HANDLE_MEM_STORE_CONTROL(...);
#endif

#ifndef MINIRV64_HANDLE_MEM_LOAD_CONTROL
	#define MINIRV64_HANDLE_MEM_LOAD_CONTROL(...);
#endif

#ifndef MINIRV64_OTHERCSR_WRITE
	#define MINIRV64_OTHERCSR_WRITE(...);
#endif

#ifndef MINIRV64_OTHERCSR_READ
	#define MINIRV64_OTHERCSR_READ(...);
#endif

#ifndef MINIRV64_CUSTOM_MEMORY_BUS
	#define MINIRV64_STORE4( ofs, val ) *(uint32_t*)(image + ofs) = val
	#define MINIRV64_STORE2( ofs, val ) *(uint16_t*)(image + ofs) = val
	#define MINIRV64_STORE1( ofs, val ) *(uint8_t*)(image + ofs) = val
	#define MINIRV64_LOAD4( ofs ) *(uint32_t*)(image + ofs)
	#define MINIRV64_LOAD2( ofs ) *(uint16_t*)(image + ofs)
	#define MINIRV64_LOAD1( ofs ) *(uint8_t*)(image + ofs)
	#define MINIRV64_LOAD2_SIGNED( ofs ) *(int16_t*)(image + ofs)
	#define MINIRV64_LOAD1_SIGNED( ofs ) *(int8_t*)(image + ofs)
#endif

struct MiniRV64IMAState
{
    uint64_t pc[32];
}
