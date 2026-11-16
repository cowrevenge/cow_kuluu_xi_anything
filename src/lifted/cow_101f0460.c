/* f_0x101f0460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f0460(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 18) goto L_101f05ae;
    if (arg1 > 0x10u) goto L_101f05ae;
    t1 = rd32(COW_IMG(0x101f05b0u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x101f047du: goto L_101f047d;
    case 0x101f048fu: goto L_101f048f;
    case 0x101f04a1u: goto L_101f04a1;
    case 0x101f04b3u: goto L_101f04b3;
    case 0x101f04c5u: goto L_101f04c5;
    case 0x101f04d7u: goto L_101f04d7;
    case 0x101f04e9u: goto L_101f04e9;
    case 0x101f04fbu: goto L_101f04fb;
    case 0x101f050du: goto L_101f050d;
    case 0x101f051fu: goto L_101f051f;
    case 0x101f0531u: goto L_101f0531;
    case 0x101f0543u: goto L_101f0543;
    case 0x101f0555u: goto L_101f0555;
    case 0x101f0567u: goto L_101f0567;
    case 0x101f0579u: goto L_101f0579;
    case 0x101f058bu: goto L_101f058b;
    case 0x101f059du: goto L_101f059d;
    default: rt_fatal(g, COW_IMG(0x101f0476u), "switch");
    }
    return;
L_101f047d: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e2cu)), g->edx, 0, 3, 0u, 1u, 0u);
    return;
L_101f048f: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e30u)), g->edx, 0, 3, 0u, 1u, 1u);
    return;
L_101f04a1: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e34u)), g->edx, 0, 3, 0u, 1u, 2u);
    return;
L_101f04b3: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e40u)), g->edx, 0, 3, 0u, 1u, 5u);
    return;
L_101f04c5: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e44u)), g->edx, 0, 3, 0u, 1u, 6u);
    return;
L_101f04d7: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e48u)), g->edx, 0, 3, 0u, 1u, 7u);
    return;
L_101f04e9: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e38u)), g->edx, 0, 3, 0u, 1u, 3u);
    return;
L_101f04fb: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e3cu)), g->edx, 0, 3, 0u, 1u, 4u);
    return;
L_101f050d: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e4cu)), g->edx, 0, 3, 0u, 1u, 8u);
    return;
L_101f051f: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e50u)), g->edx, 0, 3, 0u, 1u, 0xau);
    return;
L_101f0531: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e54u)), g->edx, 0, 3, 0u, 1u, 0xbu);
    return;
L_101f0543: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e58u)), g->edx, 0, 3, 0u, 1u, 0xcu);
    return;
L_101f0555: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e5cu)), g->edx, 0, 3, 0u, 1u, 0xdu);
    return;
L_101f0567: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e60u)), g->edx, 0, 3, 0u, 1u, 0xeu);
    return;
L_101f0579: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e64u)), g->edx, 0, 3, 0u, 1u, 0xfu);
    return;
L_101f058b: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e68u)), g->edx, 0, 3, 0u, 1u, 0x10u);
    return;
L_101f059d: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1021c7c0u), arg1, rd32(COW_IMG(0x10666e6cu)), g->edx, 0, 3, 0u, 1u, 9u);
L_101f05ae: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f0460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
