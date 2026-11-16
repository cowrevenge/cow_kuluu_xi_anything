/* f_0x1007b620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b620(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1007b6a0u), self, 2, t1, COW_IMG(0x103579fcu));
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xb5u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5 + 1u;
        ecx = t6;
        edx = t7;
        esi = -(t5 + 1u < 3u) & t5 + 1u;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = eax - 1u;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb5u, esi);
    t8 = g->edx;
    if (esi == 1u)
    {
        edx = t8;
        goto L_1007b685;
    }
    edx = t8;
    esi = esi - 1u;
    if (esi != 1u)
    {
        eax = 0x122u;
        goto L_1007b68a;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x124u);
    t9 = g->edx;
    g->edx = t9;
    return arg3;
L_1007b685: ;
    eax = 0x123u;
L_1007b68a: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, eax);
    t10 = g->edx;
    g->edx = t10;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
