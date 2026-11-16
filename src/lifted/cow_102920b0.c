/* f_0x102920b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102920b0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, arg1 + 0x78u);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102805c0u), 3, sp0 - 0x40u, arg1 + 0x78u, arg2);
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    wr32(sp0 - 0x5cu, arg1 + 0xb8u);
    wr32(sp0 - 0x60u, arg1 + 0x24u);
    g->ecx = arg1 + 0x24u;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x1027fee0u), 3, arg1 + 0x24u, arg1 + 0xb8u, sp0 - 0x40u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 + 0x6cu) == 0u)
    {
        eax = rd32(arg1 + 0x6cu);
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = rd32(arg1 + 0x6cu);
        ecx = t1;
        edx = t2;
        wr32(sp0 - 0x4cu, arg2);
        wr32(sp0 - 0x50u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t3 = cow_cdecl(g, COW_IMG(0x102920b0u), 2, eax, arg2);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    if (rd32(arg1 + 0x70u) != 0u)
    {
        esi = rd32(arg1 + 0x70u);
        wr32(sp0 - 0x4cu, arg2);
        wr32(sp0 - 0x50u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t6 = cow_cdecl(g, COW_IMG(0x102920b0u), 2, esi, arg2);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102920b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102920b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
