/* f_0x10302dea - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10302dea(Guest* g)
{
    uint32_t eax;
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

    if (arg2 == 0u)
    {
        esi = rd32(arg1 + 0x180u);
        if (rd8(rd32(arg1 + 0x19cu) + 8u) == 0u)
        {
            eax = rd32(arg1 + 0x19cu);
            wr32(esi + 4u, COW_IMG(0x10302c57u));
            edx = in_edx;
        }
        else
        {
            eax = rd32(arg1 + 0x19cu);
            wr32(esi + 4u, COW_IMG(0x10302cbfu));
            g->edi = arg1;
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_stdcall(g, COW_IMG(0x103029bcu), 0);
            t5 = g->edx;
            wr32(esi + 0x40u, 0u);
            wr32(esi + 0x44u, 0u);
            wr32(esi + 0x4cu, 0u);
            eax = t4;
            edx = t5;
        }
        wr8(esi + 0x30u, 0u);
        wr32(esi + 0x34u, 0u);
    }
    else
    {
        esi = rd32(arg1 + 0x180u);
        if (arg2 == 2u)
        {
            wr32(esi + 4u, COW_IMG(0x10302dc7u));
            eax = arg2 - 2u;
            edx = in_edx;
        }
        else
        {
            wr32(rd32(arg1) + 0x14u, 4u);
            g->eax = rd32(arg1);
            g->edx = in_edx;
            t1 = rd32(arg1);
            g->esp = sp0 - 0xcu;
            t2 = cow_thiscall_cdecl(g, rd32(t1), self, 1, arg1);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302dea(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10302dea(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
