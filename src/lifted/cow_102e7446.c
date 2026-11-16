/* f_0x102e7446 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e7446(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, COW_IMG(0x10346420u));
    wr32(sp0 - 0x24u, 0x80000002u);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329008u)), self, 3, 0x80000002u, COW_IMG(0x10346420u), sp0 - 8u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_102e74b4;
    }
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, COW_IMG(0x1034643cu));
    t4 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t4);
    wr32(sp0 - 0xcu, 4u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x1032900cu)), ecx, 6, t4, COW_IMG(0x1034643cu), 0u, sp0 - 0x10u, sp0 - 0x14u, sp0 - 0xcu);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_102e74ab;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    if (rd32(sp0 - 0x10u) != 4u) goto L_102e74ab;
    if (rd32(sp0 - 0x14u) == 0u) goto L_102e74ab;
    t8 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t8);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329024u)), ecx, 1, t8);
    t9 = g->edx;
    wr32(COW_IMG(0x103ccc50u), 0u);
    eax = 0u;
    edx = t9;
L_102e74dc: ;
    g->edi = loc_18;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e74ab: ;
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t10);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329024u)), ecx, 1, t10);
    t11 = g->ecx;
    t12 = g->edx;
    ecx = t11;
    edx = t12;
L_102e74b4: ;
    if ((int32_t)rd32(COW_IMG(0x103ccc50u)) >= 0) goto L_102e74d7;
    wr32(COW_IMG(0x103ccc50u), 0u);
    g->edi = 0u;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x18u;
    t13 = cow_fastcall(g, COW_IMG(0x102e7421u), ecx, edx, 0);
    t14 = g->edx;
    if (t13 == 0u)
    {
        edx = t14;
        goto L_102e74d7;
    }
    edx = t14;
    rt_fatal(g, COW_IMG(0x102e74cbu), "unimplemented: emms ");
    return 0;
L_102e74d7: ;
    eax = rd32(COW_IMG(0x103ccc50u));
    loc_4 = in_ebp;
    loc_18 = in_edi;
    goto L_102e74dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7446(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e7446(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
