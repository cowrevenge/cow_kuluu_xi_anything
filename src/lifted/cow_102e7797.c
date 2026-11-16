/* f_0x102e7797 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102e7797(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_102e77eb;
    if (arg2 == 0u) goto L_102e77eb;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x102f51a0u), g->eax, self, in_edx, 1, 3, arg1, self + 0x48u, in_edi);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, rd32(COW_IMG(0x10329058u)), self + 0x48u, 1, arg2);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(self + 8u, t3);
        if (t3 != 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(self + 0x4cu, arg1);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(rd32(arg1) + 4u), ecx, 1, arg1);
            esi = arg2;
            edi = self + 0xcu;
            ecx = 0xfu;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = 0u;
        }
        else
        {
            eax = 0x8007000eu;
        }
    }
L_102e77f0: ;
    return eax;
L_102e77eb: ;
    eax = 0x8876086cu;
    goto L_102e77f0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7797(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e7797(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
