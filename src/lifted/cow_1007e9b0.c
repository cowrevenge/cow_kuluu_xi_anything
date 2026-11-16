/* f_0x1007e9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007e9b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    t3 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 1u)
    {
        eax = t3 - 1u;
        ecx = t4;
        edx = t5;
        goto L_1007ea13;
    }
    eax = t3 - 1u;
    ecx = t4;
    edx = t5;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007e9f2;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 6u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        esi = 0x12fu;
    }
    else
    {
        eax = t6;
        edx = t7;
        esi = 0x130u;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, esi);
    t8 = g->edx;
    g->edx = t8;
    return arg3;
L_1007e9f2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 6u, 1u);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x12eu);
    t11 = g->edx;
    g->edx = t11;
    return arg3;
L_1007ea13: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 6u, 0u);
    t13 = g->edx;
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x12du);
    t14 = g->edx;
    g->edx = t14;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007e9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007e9b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
