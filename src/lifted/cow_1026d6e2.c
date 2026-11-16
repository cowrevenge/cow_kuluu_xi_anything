/* f_0x1026d6e2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026d6e2(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = 0u;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
    }
    else
    {
        t1 = rd32(arg1 + 0x1006cu);
        wr32(sp0 - 0xcu, t1);
        g->eax = arg1;
        g->edx = t1;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x10329424u)), arg1, 1, t1);
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
        if (t5 != 1u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            eax = 0xffffffffu;
        }
        else
        {
            ecx = t6;
            edx = t7;
            wr32(arg1 + 0x1cu, 1u);
            eax = 0u;
        }
    }
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->esi = loc_8;
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d6e2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d6e2(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
