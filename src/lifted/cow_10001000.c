/* f_0x10001000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10001000(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 2u) == 0u) goto L_1000104b;
    if ((int32_t)(rd32(self - 4u) - 1u) < 0)
    {
        eax = rd32(self - 4u) - 1u;
        ecx = rd32(self - 4u) * 3u;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self - 4u) - 1u;
        ecx = rd32(self - 4u) * 3u;
        esi = self + rd32(self - 4u) * 0xcu;
        ebp = rd32(COW_IMG(0x10329310u));
        edi = eax + 1u;
L_10001026: ;
        t1 = rd32(esi - 0xcu);
        g->eax = eax;
        g->edx = t1;
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, ebp, ecx, 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        if (edi != 1u)
        {
            eax = t2;
            ecx = t3;
            esi = esi - 0xcu;
            edi = edi - 1u;
            goto L_10001026;
        }
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    if (arg1 & 1u)
    {
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self - 4u);
        t5 = g->edx;
        edx = t5;
    }
    g->edx = edx;
    return self - 4u;
L_1000104b: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t6 = rd32(self);
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x10329310u)), self, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t9;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self);
        t10 = g->edx;
        edx = t10;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10001000(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
