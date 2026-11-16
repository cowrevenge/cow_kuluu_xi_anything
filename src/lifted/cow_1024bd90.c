/* f_0x1024bd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1024bd90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 2u) == 0u) goto L_1024bde3;
    if ((int32_t)(rd32(self - 4u) - 1u) < 0)
    {
        eax = self + rd32(self - 4u) * 0x1c0u;
        ecx = rd32(self - 4u) - 1u;
        edx = in_edx;
    }
    else
    {
        eax = self + rd32(self - 4u) * 0x1c0u;
        ecx = rd32(self - 4u) - 1u;
        edx = in_edx;
        esi = eax + 0x58u;
        edi = ecx + 1u;
L_1024bdbc: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x102469b0u), esi - 0x1c0u, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if (edi != 1u)
        {
            eax = t1;
            edx = t3;
            esi = esi - 0x1c0u;
            edi = edi - 1u;
            goto L_1024bdbc;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (arg1 & 1u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self - 4u);
        t4 = g->edx;
        edx = t4;
    }
    g->edx = edx;
    return self - 4u;
L_1024bde3: ;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x102469b0u), self + 0x58u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self);
        t8 = g->edx;
        edx = t8;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024bd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024bd90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
