/* f_0x102a42d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a42d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = arg2;
    g->edx = in_edx;
    t1 = rd32(arg1 + 0x2cu);
    t2 = rd32(arg1 + 0x24u);
    t3 = rd32(rd32(arg1 + 0x2cu) + 0x3cu);
    t4 = cow_cdecl(g, COW_IMG(0x102a4330u), 5, arg1, arg2, in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(arg1 + 0x28u) == 0u)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ebp = t2;
        esi = t3;
        t7 = ebp * 4u + rd32(esi + 0x34u);
        t8 = rd32(arg1 + 0x1cu);
        t9 = ebp + rd32(esi + 0x38u);
        t10 = ebp * 4u + rd32(esi + 0x30u);
        g->edx = t9;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027d290u), 6, t10, eax, t9, t8, t7, in_ebx);
        t11 = g->edx;
        eax = ebp * 4u + rd32(esi + 0x30u);
        edx = t11;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a42d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a42d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
