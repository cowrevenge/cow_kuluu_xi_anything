/* f_0x101542b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101542b0(Guest* g)
{
    uint32_t cf;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_101542d6;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_101542cf;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_101542d9;
    }
L_101542cf: ;
    eax = 1u;
L_101542df: ;
    t1 = rd32(COW_IMG(0x10154448u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101542e6u: goto L_101542e6;
    case 0x1015433cu: goto L_1015433c;
    case 0x1015438du: goto L_1015438d;
    case 0x101543e2u: goto L_101543e2;
    default: rt_fatal(g, COW_IMG(0x101542dfu), "switch");
    }
    return 0;
L_101542d6: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_101542d9: ;
    if (!cf && !zf) goto L_10154438;
    goto L_101542df;
L_101542e6: ;
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t34 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t35 = g->edx;
    g->edx = t35;
    cow_thiscall(g, COW_IMG(0x10155550u), sp0 - 0x40u, 0);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, t37, 1, 2, sp0 - 0x40u, arg2);
    t38 = g->edx;
    t39 = cow_thiscall(g, COW_IMG(0x10155600u), sp0 - 0x40u, 0);
    g->edx = rd32(t39);
    t40 = rd32(t39);
    t41 = cow_thiscall(g, rd32(t40 + 4u), t39, 0);
    t42 = g->edx;
    wr32(sp0 - 0x4cu, t41);
    g->edx = t42;
    t43 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t41);
    t44 = g->edx;
    t45 = cow_fastcall(g, COW_IMG(0x10155500u), sp0 - 0x40u, t44, 0);
    return (t45 & 0xffff0000u) | (uint16_t)t34;
L_1015433c: ;
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t24 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t25 = g->edx;
    g->edx = t25;
    cow_thiscall(g, COW_IMG(0x10155160u), sp0 - 0x30u, 0);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, t27, 1, 2, sp0 - 0x30u, arg2);
    t28 = g->edx;
    t29 = cow_thiscall(g, COW_IMG(0x101552d0u), sp0 - 0x30u, 0);
    wr32(sp0 - 0x4cu, arg1);
    g->edx = rd32(t29);
    t30 = rd32(t29);
    t31 = cow_thiscall(g, rd32(t30 + 4u), t29, 1, arg1);
    t32 = g->edx;
    t33 = cow_fastcall(g, COW_IMG(0x10155100u), sp0 - 0x30u, t32, 0);
    return (t33 & 0xffff0000u) | (uint16_t)t24;
L_1015438d: ;
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t14 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x10154dc0u), sp0 - 0x30u, 0);
    t17 = g->ecx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, sp0 - 0x30u, 1, 2, sp0 - 0x30u, arg2);
    t18 = g->edx;
    t19 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0x30u, 0);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0xffffffffu);
    wr32(sp0 - 0x54u, arg1);
    g->edx = rd32(t19);
    t20 = rd32(t19);
    t21 = cow_thiscall(g, rd32(t20 + 0x20u), t19, 3, arg1, 0xffffffffu, 0u);
    t22 = g->edx;
    t23 = cow_fastcall(g, COW_IMG(0x10154d70u), sp0 - 0x30u, t22, 0);
    return (t23 & 0xffff0000u) | (uint16_t)t14;
L_101543e2: ;
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t2 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t3 = g->edx;
    t4 = cow_thiscall(g, COW_IMG(0x10155370u), sp0 - 0x30u, 0);
    t5 = g->ecx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, sp0 - 0x30u, 1, 2, sp0 - 0x30u, arg2);
    t6 = g->edx;
    t7 = cow_thiscall(g, COW_IMG(0x101554e0u), sp0 - 0x30u, 0);
    g->edx = rd32(t7);
    t8 = rd32(t7);
    t9 = cow_thiscall(g, rd32(t8 + 0x1cu), t7, 0);
    t10 = g->edx;
    wr32(sp0 - 0x4cu, t9);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t9);
    t12 = g->edx;
    t13 = cow_fastcall(g, COW_IMG(0x10155320u), sp0 - 0x30u, t12, 0);
    return (t13 & 0xffff0000u) | (uint16_t)t2;
L_10154438: ;
    return (eax & 0xffff0000u) | (uint16_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101542b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101542b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
