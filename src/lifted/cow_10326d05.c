/* f_0x10326d05 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10326d05(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(rd32(COW_IMG(0x109b26e4u))) == 0u)
    {
        edx = in_edx;
        esi = rd32(COW_IMG(0x109b26e4u));
        goto L_10326d40;
    }
    eax = rd32(rd32(COW_IMG(0x109b26e4u)));
    esi = rd32(COW_IMG(0x109b26e4u));
    ecx = self;
    edx = in_edx;
L_10326d17: ;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x103265f8u), g->eax, ecx, edx, 1, 5, arg1, eax, arg2, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_10326d36;
    }
    ecx = t2;
    edx = t3;
    if (rd8(arg2 + rd32(esi)) == 0x3du) goto L_10326d50;
    eax = (rd32(esi) & 0xffffff00u) | rd8(arg2 + rd32(esi));
    if ((uint8_t)eax == 0u) goto L_10326d50;
L_10326d36: ;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        esi = esi + 4u;
        goto L_10326d17;
    }
    esi = esi + 4u;
L_10326d40: ;
    eax = -(uint32_t)((int32_t)(esi - rd32(COW_IMG(0x109b26e4u))) >> 2u);
L_10326d4d: ;
    g->edx = edx;
    return eax;
L_10326d50: ;
    eax = (uint32_t)((int32_t)(esi - rd32(COW_IMG(0x109b26e4u))) >> 2u);
    goto L_10326d4d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10326d05(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10326d05(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
