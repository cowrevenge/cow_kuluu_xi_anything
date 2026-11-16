/* f_0x1007f820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f820(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
        goto L_1007f865;
    }
    eax = t3 - 1u;
    ecx = t4;
    edx = t5;
    if (eax == 1u) goto L_1007f850;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 2u, 0u, 0u);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
        goto L_1007f8a4;
    }
    edx = t7;
    g->edx = edx;
    return -arg3;
L_1007f850: ;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 0u, 0u, 0u);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t9;
        goto L_1007f8a4;
    }
    edx = t9;
    g->edx = edx;
    return -arg3;
L_1007f865: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xbfu);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_1007f88f;
    }
    ecx = t11;
    edx = t12;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 4u, 0u, 0u);
    t14 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        edx = t14;
        goto L_1007f8a4;
    }
    edx = t14;
    g->edx = edx;
    return -arg3;
L_1007f88f: ;
    g->edx = edx;
    g->esp = sp0;
    t15 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 1u, 0u, 0u);
    t16 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        edx = t16;
        goto L_1007f8a4;
    }
    edx = t16;
    g->edx = edx;
    return -arg3;
L_1007f8a4: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
