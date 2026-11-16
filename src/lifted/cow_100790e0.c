/* f_0x100790e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100790e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    t3 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 1u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_10079102;
    }
    edx = t5;
    wr8(COW_IMG(0x1047d694u), 0u);
L_100790fd: ;
L_10079101: ;
    g->edx = edx;
    return arg3;
L_10079102: ;
    if (eax != 2u) goto L_10079110;
    wr8(COW_IMG(0x1047d694u), 1u);
L_10079124: ;
    t7 = rd32(COW_IMG(0x1047d490u));
    wr8(COW_IMG(0x1047d695u), 0u);
    if ((int32_t)t7 < 3)
    {
        eax = t7;
        goto L_1007913c;
    }
    eax = 2u;
L_10079146: ;
    t8 = rd32(eax * 4u + rd32(COW_IMG(0x103551e0u)));
    t9 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, t9, 1, 2, t8, COW_IMG(0x103580a0u));
    t11 = g->edx;
    if (t10 != 0u)
    {
        edx = t11;
        goto L_10079101;
    }
    edx = t11;
    wr8(COW_IMG(0x1047d695u), 4u);
    g->edx = edx;
    return arg3;
L_10079110: ;
    t6 = rd8(COW_IMG(0x1047d694u));
    wr8(COW_IMG(0x1047d694u), t6 == 0u);
    if (t6 == 0u != 1u)
    {
        edx = (edx & 0xffffff00u) | t6;
        goto L_100790fd;
    }
    edx = (edx & 0xffffff00u) | t6;
    goto L_10079124;
L_1007913c: ;
    if (eax != 2u) goto L_100790fd;
    eax = 1u;
    goto L_10079146;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100790e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100790e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
