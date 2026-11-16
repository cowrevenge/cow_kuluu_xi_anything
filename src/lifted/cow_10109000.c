/* f_0x10109000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10109000(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) == 0u)
    {
        ecx = self;
        goto L_10109015;
    }
    eax = rd32(self + 4u);
    if (rd16(self) >= (uint16_t)arg1)
    {
        edx = in_edx;
        goto L_10109092;
    }
    ecx = (self & 0xffff0000u) | rd16(self);
L_10109015: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101083c0u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)arg1 > t1)
    {
        edx = t3;
        ebx = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x10108590u), 3, 4u, (uint16_t)arg1, 0u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
            ebx = t4;
        }
        else
        {
            edx = t5;
            ebx = t4;
            if (arg2 != 0u)
            {
                if ((uint16_t)arg3 != 0u)
                {
                    esi = arg2;
                    edi = ebx;
                    ecx = (uint16_t)arg3 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = arg3 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    edx = (uint16_t)arg3;
                }
            }
            wr8(ebx + (uint16_t)arg3, 0u);
            t6 = rd32(self + 4u);
            wr16(self, (uint16_t)arg1);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x101086b0u), 1, t6);
            t7 = g->edx;
            wr32(self + 4u, ebx);
            edx = t7;
        }
    }
    eax = ebx;
L_10109092: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109000(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
