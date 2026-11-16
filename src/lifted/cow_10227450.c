/* f_0x10227450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10227450(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x24u, in_esi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10227477;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_10227470;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_1022747a;
    }
L_10227470: ;
    eax = 1u;
L_10227480: ;
    t1 = rd32(COW_IMG(0x1022757cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10227487u: goto L_10227487;
    case 0x102274c4u: goto L_102274c4;
    case 0x10227501u: goto L_10227501;
    case 0x1022753du: goto L_1022753d;
    default: rt_fatal(g, COW_IMG(0x10227480u), "switch");
    }
    return;
L_10227477: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_1022747a: ;
    if (!cf && !zf) goto L_10227573;
    goto L_10227480;
L_10227487: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258c20u), sp0 - 0x20u, 0);
    t19 = g->edx;
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->eax = arg2;
    t20 = cow_fastcall(g, COW_IMG(0x10227590u), self, t19, 2, sp0 - 0x20u, arg2);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x10258c50u), sp0 - 0x20u, 0);
    t23 = g->edx;
    wr32(sp0 - 0x28u, t22);
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t22);
    t25 = g->edx;
    cow_thiscall(g, COW_IMG(0x10258be0u), sp0 - 0x20u, 0);
    return;
L_102274c4: ;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x102588a0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    t13 = cow_fastcall(g, COW_IMG(0x10227590u), self, arg2, 2, sp0 - 0x20u, arg2);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10258910u), sp0 - 0x20u, 0);
    t16 = g->edx;
    wr32(sp0 - 0x28u, t15);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t15);
    t18 = g->edx;
    cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0x20u, 0);
    return;
L_10227501: ;
    g->esp = sp0 - 0x24u;
    t9 = cow_thiscall(g, COW_IMG(0x102586b0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    cow_fastcall(g, COW_IMG(0x10227590u), self, sp0 - 0x20u, 2, sp0 - 0x20u, arg2);
    t10 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, arg1);
    g->eax = arg1;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10258760u), sp0 - 0x20u, 3, arg1, 0xffffffffu, 0u);
    t12 = g->edx;
    cow_thiscall(g, COW_IMG(0x10258650u), sp0 - 0x20u, 0);
    return;
L_1022753d: ;
    g->esp = sp0 - 0x24u;
    t2 = cow_thiscall(g, COW_IMG(0x10258a60u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    t3 = cow_fastcall(g, COW_IMG(0x10227590u), self, sp0 - 0x20u, 2, sp0 - 0x20u, arg2);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10258af0u), sp0 - 0x20u, 0);
    t6 = g->edx;
    wr32(sp0 - 0x28u, t5);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t5);
    t8 = g->edx;
    cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0x20u, 0);
L_10227573: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10227450(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
