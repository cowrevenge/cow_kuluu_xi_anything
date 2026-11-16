/* f_0x10079f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10079f10(Guest* g)
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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

    if (rd32(COW_IMG(0x1047d490u)) != 3u)
    {
        edx = in_edx;
        goto L_10079fcc;
    }
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 <= 0)
    {
        edx = t5;
        goto L_10079fcc;
    }
    ecx = t4;
    esi = t3;
    t6 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t7 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, t7, 1, 2, t6, COW_IMG(0x103580bcu));
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        ecx = t9;
        goto L_10079f7b;
    }
    edx = t10;
    if (rd32(COW_IMG(0x106627b4u)) == 0u) goto L_10079f65;
    eax = rd32(COW_IMG(0x106627b4u));
    if (rd32(eax + 8u) != 0u) goto L_10079fa6;
L_10079f65: ;
    t11 = esi * 2u - 2u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101a2890u), rd32(COW_IMG(0x10662794u)), 1, t11);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
L_10079f7b: ;
    t13 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t14 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, t14, 1, 2, t13, COW_IMG(0x103580b4u));
    t16 = g->edx;
    if (t15 != 0u)
    {
        edx = t16;
        goto L_10079fcc;
    }
    edx = t16;
    if (rd32(COW_IMG(0x106627b4u)) == 0u) goto L_10079fb9;
    eax = rd32(COW_IMG(0x106627b4u));
    if (rd32(eax + 8u) == 0u) goto L_10079fb9;
L_10079fa6: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
    t17 = g->edx;
    g->edx = t17;
    return arg3;
L_10079fb9: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101a2920u), rd32(COW_IMG(0x10662794u)), 1, esi - 1u);
    t18 = g->edx;
    g->edx = t18;
    return arg3;
L_10079fcc: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
