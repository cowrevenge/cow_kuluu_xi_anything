/* f_0x10157120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10157120(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x24u, in_esi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10157147;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_10157140;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_1015714a;
    }
L_10157140: ;
    eax = 1u;
L_10157150: ;
    t1 = rd32(COW_IMG(0x101572acu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10157157u: goto L_10157157;
    case 0x101571aau: goto L_101571aa;
    case 0x101571fdu: goto L_101571fd;
    case 0x1015724bu: goto L_1015724b;
    default: rt_fatal(g, COW_IMG(0x10157150u), "switch");
    }
    return 0;
L_10157147: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_1015714a: ;
    if (!cf && !zf) goto L_1015729e;
    goto L_10157150;
L_10157157: ;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258c20u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg4);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = arg4;
    t19 = cow_fastcall(g, COW_IMG(0x10156fd0u), self, sp0 - 0x20u, 3, sp0 - 0x20u, arg3, arg4);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
        esi = t19;
    }
    else
    {
        edx = t20;
        esi = t19;
        wr32(sp0 - 0x28u, arg2);
        g->eax = arg2;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t21 = cow_thiscall(g, COW_IMG(0x10258c50u), sp0 - 0x20u, 0);
        t22 = g->edx;
        wr32(sp0 - 0x2cu, t21);
        wr32(sp0 - 0x30u, arg1);
        g->edx = t22;
        g->esp = sp0 - 0x24u;
        t23 = cow_call_regs(g, COW_IMG(0x10312090u), t21, g->ecx, g->edx, 1, 3, arg1, t21, arg2);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258be0u), sp0 - 0x20u, 0);
    g->esi = rd32(sp0 - 0x24u);
    return esi;
L_101571aa: ;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x102588a0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg4);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = arg3;
    t12 = cow_fastcall(g, COW_IMG(0x10156fd0u), self, arg4, 3, sp0 - 0x20u, arg3, arg4);
    t13 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t13;
        esi = t12;
    }
    else
    {
        eax = t12;
        esi = t12;
        wr32(sp0 - 0x28u, arg2);
        g->eax = eax;
        g->edx = arg2;
        g->esp = sp0 - 0x28u;
        t14 = cow_thiscall(g, COW_IMG(0x10258910u), sp0 - 0x20u, 0);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x2cu, t14);
        wr32(sp0 - 0x30u, arg1);
        g->edx = t16;
        g->esp = sp0 - 0x24u;
        t17 = cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, arg1, t14, arg2);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0x20u, 0);
    g->esi = rd32(sp0 - 0x24u);
    return esi;
L_101571fd: ;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x102586b0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg4);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    t8 = cow_fastcall(g, COW_IMG(0x10156fd0u), self, arg3, 3, sp0 - 0x20u, arg3, arg4);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        esi = t8;
    }
    else
    {
        eax = t8;
        esi = t8;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0xffffffffu);
        wr32(sp0 - 0x30u, arg2);
        wr32(sp0 - 0x34u, arg1);
        g->eax = eax;
        g->edx = arg1;
        g->esp = sp0 - 0x24u;
        t10 = cow_thiscall(g, COW_IMG(0x10258730u), sp0 - 0x20u, 4, arg1, arg2, 0xffffffffu, 0u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258650u), sp0 - 0x20u, 0);
    g->esi = rd32(sp0 - 0x24u);
    return esi;
L_1015724b: ;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258a60u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x28u, arg4);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->eax = arg4;
    t2 = cow_fastcall(g, COW_IMG(0x10156fd0u), self, sp0 - 0x20u, 3, sp0 - 0x20u, arg3, arg4);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        esi = t2;
    }
    else
    {
        edx = t3;
        esi = t2;
        wr32(sp0 - 0x28u, arg2);
        g->eax = arg2;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t4 = cow_thiscall(g, COW_IMG(0x10258af0u), sp0 - 0x20u, 0);
        t5 = g->edx;
        wr32(sp0 - 0x2cu, t4);
        wr32(sp0 - 0x30u, arg1);
        g->edx = t5;
        g->esp = sp0 - 0x24u;
        t6 = cow_call_regs(g, COW_IMG(0x10312090u), t4, g->ecx, g->edx, 1, 3, arg1, t4, arg2);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0x20u, 0);
    g->esi = rd32(sp0 - 0x24u);
    return esi;
L_1015729e: ;
    return arg4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157120(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
