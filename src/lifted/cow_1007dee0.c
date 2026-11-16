/* f_0x1007dee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007dee0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
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
        goto L_1007df3b;
    }
    eax = t3 - 1u;
    ecx = t4;
    edx = t5;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007df1a;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 9u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        edx = t7;
        goto L_1007df4d;
    }
    ecx = rd32(COW_IMG(0x10578158u));
    edx = t7;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x14cu);
    t8 = g->edx;
    g->edx = t8;
    return arg3;
L_1007df1a: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x101938f0u), 2, 9u, 1u);
    t9 = g->edx;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x14cu);
    t10 = g->edx;
    g->edx = t10;
    return arg3;
L_1007df3b: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x101938f0u), 2, 9u, 0u);
    t11 = g->edx;
    ecx = rd32(COW_IMG(0x10578158u));
    edx = t11;
L_1007df4d: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x14bu);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007dee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007dee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
