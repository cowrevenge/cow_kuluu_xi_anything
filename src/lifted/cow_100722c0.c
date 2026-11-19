/* f_0x100722c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100722c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100722d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100722d6;
    case 0x100722dau: eax = g->eax; ecx = g->ecx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100722da;
    case 0x100722e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100722e1;
    case 0x100722f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100722f7;
    case 0x100722feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100722fe;
    case 0x10072302u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072302;
    case 0x10072304u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072304;
    case 0x10072308u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072308;
    case 0x1007230fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007230f;
    case 0x10072313u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072313;
    case 0x10072315u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072315;
    case 0x10072319u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072319;
    case 0x1007231du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007231d;
    case 0x10072328u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072328;
    case 0x1007232du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007232d;
    case 0x10072334u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072334;
    case 0x10072338u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072338;
    case 0x1007233au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007233a;
    case 0x1007233eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007233e;
    case 0x10072343u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072343;
    case 0x10072354u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072354;
    case 0x1007235eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007235e;
    case 0x10072362u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072362;
    case 0x10072367u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072367;
    case 0x1007236eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007236e;
    case 0x10072372u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072372;
    case 0x10072374u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072374;
    case 0x1007237cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007237c;
    case 0x10072383u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072383;
    case 0x10072387u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072387;
    case 0x10072398u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072398;
    case 0x1007239fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007239f;
    case 0x100723a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723a9;
    case 0x100723adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723ad;
    case 0x100723afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723af;
    case 0x100723b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723b3;
    case 0x100723b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723b7;
    case 0x100723d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723d0;
    case 0x100723e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723e9;
    case 0x100723fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100723fb;
    case 0x10072414u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10072414;
    default: break;
    }
#endif

    COW_AT(100722c0)
    t1 = rd32(self + 0x24u) & 0x7fu;
    if ((rd32(self + 0x24u) & 0x7fu) != 1u)
    {
        eax = t1;
        loc_4 = t1;
    COW_AT(100722da)
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t2 = cow_thiscall(g, COW_IMG(0x10072270u), self, 0);
        eax = t2;
    }
    else
    {
        loc_4 = t1;
    COW_AT(100722d6)
        eax = self;
    }
    COW_AT(100722e1)
    if (eax == 0u)
    {
        edx = eax;
        goto L_1007237c;
    }
    edx = eax;
L_100722f7: ;
    COW_AT(100722f7)
    if (rd32(edx + 0x3cu) == 0u)
    {
    COW_AT(10072302)
        ecx = 0u;
    }
    else
    {
        ecx = rd32(edx + 0x3cu);
    COW_AT(100722fe)
        ecx = rd32(ecx);
    }
    COW_AT(10072304)
    if (eax != ecx) goto L_1007231d;
    COW_AT(10072308)
    if (rd32(edx + 0x28u) == 0u)
    {
    COW_AT(10072313)
        eax = 0u;
    }
    else
    {
        eax = rd32(edx + 0x28u);
    COW_AT(1007230f)
        eax = rd32(eax);
    }
    COW_AT(10072315)
    if (eax == edx) goto L_1007237c;
    COW_AT(10072319)
    edx = eax;
L_10072367: ;
    COW_AT(10072367)
    if (rd32(eax + 8u) == 0u)
    {
    COW_AT(10072372)
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
    COW_AT(1007236e)
        eax = rd32(eax);
    }
    COW_AT(10072374)
    if (eax != 0u) goto L_100722f7;
L_1007237c: ;
    COW_AT(1007237c)
    if (loc_4 != 1u)
    {
    COW_AT(10072398)
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x10072270u), self, 0);
        eax = t5;
    }
    else
    {
    COW_AT(10072383)
        eax = self;
    }
    COW_AT(1007239f)
    t6 = rd32(eax + 0x28u);
    wr32(eax + 0x38u, arg4);
    if (t6 == 0u)
    {
        ecx = t6;
    COW_AT(100723ad)
        edx = 0u;
    }
    else
    {
        ecx = t6;
    COW_AT(100723a9)
        edx = rd32(ecx);
    }
    COW_AT(100723af)
    if (eax == edx) goto L_100723e9;
    COW_AT(100723b3)
    if (ecx == 0u) goto L_100723d0;
    COW_AT(100723b7)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100722c0u), rd32(ecx), 4, arg1, arg2, arg3, arg4);
    t7 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t7;
    return arg1;
L_1007231d: ;
    COW_AT(1007231d)
    if ((rd32(eax + 0x24u) & 0x7fu) == 1u)
    {
    COW_AT(10072328)
        if (rd32(eax + 0x38u) == arg4)
        {
    COW_AT(1007232d)
            if (rd32(eax + 0x3cu) == 0u)
            {
    COW_AT(10072338)
                eax = 0u;
            }
            else
            {
                eax = rd32(eax + 0x3cu);
    COW_AT(10072334)
                eax = rd32(eax);
            }
        }
    }
    COW_AT(1007233a)
    if (arg2 != 0u) goto L_10072354;
    COW_AT(1007233e)
    if (rd32(eax + 0x20u) != arg3) goto L_10072367;
L_10072343: ;
    COW_AT(10072343)
    t4 = rd32(eax + 0x14u);
    wr32(arg1, t4);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t4;
    return arg1;
L_10072354: ;
    COW_AT(10072354)
    if ((rd32(eax + 0x24u) & 0x7fu) != arg2) goto L_10072367;
    COW_AT(1007235e)
    if (arg3 == 0u) goto L_10072343;
    COW_AT(10072362)
    if (rd32(eax + 0x20u) == arg3) goto L_10072387;
    goto L_10072367;
L_10072387: ;
    COW_AT(10072387)
    t3 = rd32(eax + 0x14u);
    wr32(arg1, t3);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return arg1;
L_100723d0: ;
    COW_AT(100723d0)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100722c0u), 0u, 4, arg1, arg2, arg3, arg4);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t8;
    return arg1;
L_100723e9: ;
    COW_AT(100723e9)
    if (rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u) == rd32(self + 0x14u)) goto L_10072414;
    eax = rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u);
    COW_AT(100723fb)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100722c0u), rd32(eax), 4, arg1, arg2, arg3, arg4);
    t9 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t9;
    return arg1;
L_10072414: ;
    COW_AT(10072414)
    wr32(arg1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100722c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100722d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100722dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100722e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100722f7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100722feu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072302u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072304u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072308u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007230fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072313u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072315u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072319u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007231du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072328u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007232du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072334u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072338u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007233au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007233eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072343u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10072354u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007235eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072362u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072367u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007236eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072372u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072374u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007237cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072383u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072387u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10072398u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007239fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723a9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723adu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723afu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723b3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723b7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723d0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723e9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100723fbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg4;
        g->esi = arg3;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10072414u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100722c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100722c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
