/* f_0x10317d0a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10317d0a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_9c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    if (arg1 == 0u) goto L_10317db0;
    if (rd8(arg1) != 0x43u) goto L_10317d5a;
    if (rd8(arg1 + 1u) != 0u) goto L_10317d5a;
    wr8(arg2 + 1u, 0u);
    wr8(arg2, 0x43u);
    if (arg3 != 0u)
    {
        wr16(arg3, 0u);
        wr16(arg3 + 2u, 0u);
        wr16(arg3 + 4u, 0u);
    }
    if (arg4 == 0u)
    {
        eax = arg2;
    }
    else
    {
        wr32(arg4, 0u);
        eax = arg2;
    }
L_10317e1d: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return eax;
L_10317d5a: ;
    wr32(sp0 - 0x9cu, arg1);
    wr32(sp0 - 0xa0u, COW_IMG(0x103d06a8u));
    g->edi = COW_IMG(0x103d06a8u);
    g->edx = 0u;
    g->esp = sp0 - 0x98u;
    t1 = cow_call_regs(g, COW_IMG(0x10320960u), in_eax, g->ecx, g->edx, 1, 2, COW_IMG(0x103d06a8u), arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        ecx = arg1;
        edx = t2;
        goto L_10317de0;
    }
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x9cu, arg1);
    wr32(sp0 - 0xa0u, COW_IMG(0x103d0624u));
    g->edi = COW_IMG(0x103d06a8u);
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t3 = cow_call_regs(g, COW_IMG(0x10320960u), eax, g->ecx, g->edx, 1, 2, COW_IMG(0x103d0624u), arg1);
    t4 = g->edx;
    if (t3 == 0u)
    {
        ecx = arg1;
        edx = t4;
        goto L_10317de0;
    }
    edx = t4;
    wr32(sp0 - 0x9cu, arg1);
    wr32(sp0 - 0xa0u, sp0 - 0x8cu);
    g->ebx = COW_IMG(0x103d0624u);
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t5 = cow_cdecl(g, COW_IMG(0x10317e4au), 3, sp0 - 0x8cu, arg1, rd32(sp0 - 0x98u));
    t6 = g->edx;
    if (t5 != 0u) goto L_10317db0;
    edx = t6;
    wr32(sp0 - 0x9cu, sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, COW_IMG(0x109b2720u));
    wr32(sp0 - 0xa4u, sp0 - 0x8cu);
    g->edi = COW_IMG(0x103d06a8u);
    g->esp = sp0 - 0x98u;
    t7 = cow_call_regs(g, COW_IMG(0x10322c2au), g->eax, arg1, edx, 1, 3, sp0 - 0x8cu, COW_IMG(0x109b2720u), sp0 - 0x8cu);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_10317db4;
    }
L_10317db0: ;
    eax = 0u;
    goto L_10317e1d;
L_10317db4: ;
    wr32(COW_IMG(0x109b2728u), rd16(COW_IMG(0x109b2724u)));
    wr32(sp0 - 0x9cu, sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, COW_IMG(0x103d06a8u));
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10317f16u), 5, COW_IMG(0x103d06a8u), sp0 - 0x8cu, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
    t10 = g->edx;
    if (rd8(arg1) == 0u)
    {
        edx = t10;
        wr32(sp0 - 0x9cu, COW_IMG(0x103d06a8u));
        loc_9c = COW_IMG(0x103d06a8u);
    }
    else
    {
        edx = t10;
        wr32(sp0 - 0x9cu, arg1);
        loc_9c = arg1;
    }
    wr32(sp0 - 0xa0u, COW_IMG(0x103d0624u));
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x10317500u), 3, COW_IMG(0x103d0624u), loc_9c, rd32(sp0 - 0x98u));
    t11 = g->edx;
    ecx = rd32(sp0 - 0x9cu);
    edx = t11;
L_10317de0: ;
    if (arg3 != 0u)
    {
        wr32(sp0 - 0x9cu, 6u);
        wr32(sp0 - 0xa0u, COW_IMG(0x109b2720u));
        wr32(sp0 - 0xa4u, arg3);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg3, COW_IMG(0x109b2720u), 6u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    if (arg4 != 0u)
    {
        wr32(sp0 - 0x9cu, 4u);
        wr32(sp0 - 0xa0u, COW_IMG(0x109b2728u));
        wr32(sp0 - 0xa4u, arg4);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg4, COW_IMG(0x109b2728u), 4u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    wr32(sp0 - 0x9cu, COW_IMG(0x103d06a8u));
    wr32(sp0 - 0xa0u, arg2);
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x10317500u), 3, arg2, COW_IMG(0x103d06a8u), rd32(sp0 - 0x98u));
    eax = COW_IMG(0x103d06a8u);
    goto L_10317e1d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317d0a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317d0a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
