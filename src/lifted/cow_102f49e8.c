/* f_0x102f49e8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f49e8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        if (rd32(self + 0x64u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0x64u);
            g->edx = rd32(eax);
            t1 = rd32(eax);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(t1 + 0xe0u), ecx, 2, eax, ecx);
            t2 = g->edx;
            wr32(self + 0x64u, 0u);
            edx = t2;
        }
        if (rd32(self + 0x68u) != 0u)
        {
            ecx = rd32(self + 0x68u);
            t3 = rd32(self + 4u);
            g->edx = rd32(rd32(self + 4u));
            t4 = rd32(rd32(self + 4u));
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(t4 + 0xe0u), ecx, 2, t3, ecx);
            t5 = g->edx;
            wr32(self + 0x68u, 0u);
            edx = t5;
        }
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 0x20u), rd32(eax), 1, eax);
        t6 = g->edx;
        edx = t6;
    }
    if (rd32(self + 0x50u) != 0u)
    {
        ebx = 8u;
        esi = self + 0x10u;
L_102f4a39: ;
        if (rd32(esi + 0x20u) != 0u)
        {
            eax = rd32(esi + 0x20u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t7 = g->edx;
            wr32(esi + 0x20u, 0u);
            edx = t7;
        }
        if (rd32(esi) != 0u)
        {
            eax = rd32(esi);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t8 = g->edx;
            wr32(esi, 0u);
            edx = t8;
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 4u;
            goto L_102f4a39;
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f49e8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f49e8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
