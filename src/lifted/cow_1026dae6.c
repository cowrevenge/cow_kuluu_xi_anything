/* f_0x1026dae6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026dae6(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (arg1 != 0u)
    {
        if (rd32(arg1 + 0x10u) == 0u)
        {
            wr32(sp0 - 0xcu, 0u);
            t1 = rd32(arg1 + 0x18u);
            wr32(sp0 - 0x10u, t1);
            g->eax = arg1;
            g->edx = t1;
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), arg1, 2, t1, 0u);
            t3 = g->ecx;
            t4 = g->edx;
            g->cf = 0u;
            g->pf = PARITY(0u);
            g->af = 0u;
            g->zf = 1u;
            g->sf = 0u;
            g->of = 0u;
            g->ecx = t3;
            g->edx = t4;
            t5 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 != 0u)
            {
                ecx = t6;
                edx = t7;
                eax = 1u;
            }
            else
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                wr32(sp0 - 0xcu, COW_IMG(0x103b0ff8u));
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t8 = cow_thiscall(g, rd32(COW_IMG(0x103291f0u)), ecx, 1, COW_IMG(0x103b0ff8u));
                t9 = g->ecx;
                t10 = g->edx;
                g->cf = 0u;
                g->pf = PARITY(0u);
                g->af = 0u;
                g->zf = 1u;
                g->sf = 0u;
                g->of = 0u;
                g->ecx = t9;
                g->edx = t10;
                cow_stdcall(g, COW_IMG(0x10316dabu), 0);
                t11 = g->ecx;
                t12 = g->edx;
                eax = 0u;
                ecx = t11;
                edx = t12;
            }
        }
        else
        {
            eax = 0u;
            ecx = self;
            edx = in_edx;
        }
    }
    else
    {
        eax = 0u;
        ecx = self;
        edx = in_edx;
    }
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026dae6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026dae6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
