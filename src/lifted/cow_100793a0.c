/* f_0x100793a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100793a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 1u)
    {
        eax = t3 - 1u;
        ecx = t4;
        edx = t5;
        esi = 1u;
    }
    else
    {
        eax = t3 - 1u;
        ecx = t4;
        edx = t5;
        if (eax == 1u)
        {
            eax = eax - 1u;
            esi = 0u;
        }
        else
        {
            eax = eax - 1u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t6 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc0u);
            t7 = g->ecx;
            t8 = g->edx;
            eax = t6;
            ecx = t7;
            edx = t8;
            esi = t6 != 1u;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xc0u, esi);
    t10 = g->edx;
    if (esi != 1u)
    {
        eax = t9;
        ecx = rd32(COW_IMG(0x10578158u));
        edx = t10;
        goto L_10079402;
    }
    eax = t9;
    ecx = rd32(COW_IMG(0x10578158u));
    edx = t10;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x129u);
    t11 = g->edx;
    g->edx = t11;
    return arg3;
L_10079402: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x12au);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100793a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100793a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
