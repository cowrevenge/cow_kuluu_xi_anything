/* f_0x101be470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101be470(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u) goto L_101be486;
    return 0xffffffffu;
L_101be486: ;
    if (arg3 == 0u) goto L_101be4d2;
    if (arg3 == 1u) goto L_101be4a5;
    if (arg3 == 2u) goto L_101be49e;
    return 0xffffffffu;
L_101be49e: ;
    eax = arg3 - 2u;
    loc_10 = COW_IMG(0x1037cb34u);
L_101be4d7: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, loc_10, in_edi, in_esi, in_ebx);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_101be4e1: ;
    wr32(arg1, eax);
    if (eax != 0u) goto L_101be4f3;
    g->edx = edx;
    return 0xffffffffu;
L_101be4a5: ;
    g->eax = arg3 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, COW_IMG(0x1034f7fcu), in_edi, in_esi, in_ebx);
    t2 = g->edx;
    wr32(arg1, t1);
    if (t1 != 0u)
    {
        edx = t2;
        goto L_101be4f3;
    }
    edx = t2;
    g->ecx = self;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x101be730u), g->eax, g->ecx, edx, 0, 1, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, COW_IMG(0x1034f7fcu), in_edi, in_esi, in_ebx);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    goto L_101be4e1;
L_101be4d2: ;
    eax = arg3;
    loc_10 = COW_IMG(0x1034f2d0u);
    goto L_101be4d7;
L_101be4f3: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be470(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
