/* f_0x10245ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10245ed0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self) != 1u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, COW_IMG(0x102463e0u), 1, 0xffffffffu);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_stdcall(g, COW_IMG(0x10246020u), 2, 0xffffffffu, 0xffffffffu);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_call_regs(g, COW_IMG(0x10246180u), t3, g->ecx, g->edx, 0, 3, 0u, 0xffffffffu, 0xffffffffu);
        t6 = g->edx;
        g->ecx = self;
        g->edx = t6;
        t7 = cow_call_regs(g, COW_IMG(0x10246710u), t5, g->ecx, g->edx, 0, 2, 0u, 0xffffffffu);
        t8 = g->ecx;
        t9 = g->edx;
        if ((t5 | t7) == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
        }
        else
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            edi = rd32(COW_IMG(0x103290f8u));
L_10245f10: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t10 = cow_thiscall(g, edi, ecx, 1, 0x28u);
            t11 = g->edx;
            g->edx = t11;
            t12 = cow_call_regs(g, COW_IMG(0x10246180u), t10, g->ecx, g->edx, 0, 3, 0u, 0xffffffffu, 0xffffffffu);
            t13 = g->edx;
            g->ecx = self;
            g->edx = t13;
            t14 = cow_call_regs(g, COW_IMG(0x10246710u), t12, g->ecx, g->edx, 0, 2, 0u, 0xffffffffu);
            t15 = g->ecx;
            t16 = g->edx;
            if ((t12 | t14) != 0u)
            {
                eax = t14;
                ecx = t15;
                edx = t16;
                goto L_10245f10;
            }
            eax = t14;
            ecx = t15;
            edx = t16;
        }
    }
    if (rd32(self + 0xcu) != 0u)
    {
        esi = rd32(self + 0xcu);
        if (rd32(esi) != 0u)
        {
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x10245db0u), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
        }
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
