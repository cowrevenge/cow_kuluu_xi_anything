/* f_0x102a8890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a8890(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 536u);

    wr32(sp0 - 0x204u, in_esi);
    wr32(sp0 - 0x208u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x20cu, arg1);
    wr32(arg2 + 0x10u, 1u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x204u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1034f2d0u));
    t2 = g->edx;
    wr32(arg2 + 0xcu, t1);
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_102a88c6;
    }
    eax = t1;
    return eax;
L_102a88c6: ;
    wr32(sp0 - 0x208u, eax);
    wr32(sp0 - 0x20cu, 0x200u);
    wr32(sp0 - 0x210u, 1u);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x200u;
    t3 = cow_cdecl(g, COW_IMG(0x10298a60u), 5, sp0 - 0x200u, 1u, 0x200u, eax, in_esi);
    t4 = g->ecx;
    if ((int32_t)t3 >= 512) goto L_102a88f8;
    ecx = t4;
    t5 = rd32(arg2 + 0xcu);
    wr32(sp0 - 0x208u, t5);
    g->esp = sp0 - 0x1fcu;
    cow_cdecl(g, COW_IMG(0x10311f70u), 3, t5, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    g->esi = rd32(sp0 - 0x204u);
    return 0u;
L_102a88f8: ;
    t6 = rd32(sp0 - 0x200u);
    t7 = rd32(sp0 - 0x1fcu);
    wr32(arg2, t6);
    t8 = rd32(sp0 - 0x1f8u);
    wr32(arg2 + 4u, t7);
    wr32(arg2 + 8u, t8);
    if (rd32(arg2 + 0x10u) != 0u)
    {
        eax = rd32(arg2 + 0x10u);
        ecx = t8;
        edx = t7;
        wr32(sp0 - 0x208u, 6u);
        wr32(sp0 - 0x20cu, arg2);
        g->esp = sp0 - 0x1f8u;
        cow_thiscall_cdecl(g, COW_IMG(0x102a8930u), ecx, 5, arg2, 6u, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu));
    }
    g->esi = rd32(sp0 - 0x204u);
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a8890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
