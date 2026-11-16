/* f_0x1031858a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031858a(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 1u, in_edi, in_esi);
    t1 = g->edx;
    if (arg1 != 0u)
    {
        edx = t1;
        eax = COW_IMG(0x109b2730u);
        esi = rd32(COW_IMG(0x109b2730u));
        loc_10 = 0x15u;
    }
    else
    {
        edx = t1;
        eax = COW_IMG(0x109b272cu);
        esi = rd32(COW_IMG(0x109b272cu));
        loc_10 = 2u;
    }
    if (esi != 0u)
    {
        edi = loc_10;
        if (esi == 1u)
        {
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, 1u, edx, 1, 3, 1u, in_edi, in_esi);
            t7 = g->edx;
            edx = t7;
        }
        else
        {
            wr32(eax, 0u);
            g->eax = eax;
            g->esp = sp0 - 4u;
            t3 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, 1u, edx, 1, 3, 1u, in_edi, in_esi);
            t4 = g->ecx;
            t5 = g->edx;
            g->edx = t5;
            g->esp = sp0 - 0x10u;
            cow_thiscall_cdecl(g, esi, t4, 1, edi);
            t6 = g->edx;
            edx = t6;
        }
        eax = 1u;
    }
    else
    {
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, 1u, edx, 1, 3, 1u, in_edi, in_esi);
        t2 = g->edx;
        eax = 0u;
        edx = t2;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031858a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031858a(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
