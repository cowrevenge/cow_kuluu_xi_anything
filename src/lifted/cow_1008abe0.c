/* f_0x1008abe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008abe0(Guest* g)
{
    double d52;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x1047d3f0u)) != 0u)
    {
        ecx = t2;
        edx = t3;
        ebp = rd32(t1 + 0xa0u);
        edi = t1;
        goto L_1008ac0d;
    }
    eax = rd32(COW_IMG(0x1047d3f0u));
    wr8(COW_IMG(0x10482f1eu), 0u);
    wr8(COW_IMG(0x104807f3u), 0u);
    return eax;
L_1008ac0d: ;
    if ((uint32_t)(int8_t)rd8(COW_IMG(0x10482f1eu)) == 1u)
    {
        eax = (uint32_t)(int8_t)rd8(COW_IMG(0x10482f1eu)) - 1u;
        goto L_1008ae5f;
    }
    eax = (uint32_t)(int8_t)rd8(COW_IMG(0x10482f1eu)) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1008ae39;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1008ae1a;
    }
    eax = eax - 1u;
    if ((uint32_t)(int8_t)rd8(COW_IMG(0x104807f3u)) - 1u > 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f3u));
        ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x104807f3u)) - 1u;
        goto L_1008acae;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f3u));
    ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x104807f3u)) - 1u;
    t4 = rd32(COW_IMG(0x1008aea8u) + ecx * 4u);
    switch (t4 - RD)
    {
    case 0x1008ac3eu: goto L_1008ac3e;
    case 0x1008ad3cu: goto L_1008ad3c;
    case 0x1008add1u: goto L_1008add1;
    case 0x1008adfbu: goto L_1008adfb;
    default: rt_fatal(g, COW_IMG(0x1008ac37u), "switch");
    }
    return 0;
L_1008ac3e: ;
    t27 = rd32(COW_IMG(0x104568fcu));
    wr32(COW_IMG(0x1035af48u), 0u);
    wr32(COW_IMG(0x1035af44u), 0u);
    wr32(COW_IMG(0x1035af40u), 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1001e780u), rd32(t27 + 0x50u), 1, edi + 4u);
    t28 = rd32(edi + 0xa0u);
    g->ebx = 0u;
    g->eax = rd32(COW_IMG(0x104568fcu));
    g->edx = t28;
    t29 = rd32(COW_IMG(0x104568fcu));
    t30 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
    t31 = cow_thiscall(g, COW_IMG(0x10021680u), t30, 2, COW_IMG(0x1035af40u), t28);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(COW_IMG(0x104804c8u), 0x3cu);
    g->ecx = t32;
    g->edx = t33;
    t34 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x78b8u, 0x30696466u, 0u, 0u, 0x3cu);
    t35 = g->ecx;
    t36 = g->edx;
    wr8(COW_IMG(0x104807f3u), 2u);
    eax = (t34 & 0xffffff00u) | 2u;
    ecx = t35;
    edx = t36;
L_1008acae: ;
    if (rd8(COW_IMG(0x1048098eu)) != 1u) goto L_1008aea0;
    if (rd8(COW_IMG(0x10482f1eu)) != 0u) goto L_1008aea0;
    if ((uint8_t)eax != 0u) goto L_1008aea0;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t37 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x5eu, 0u, 0u);
    t38 = g->ecx;
    t39 = g->edx;
    if (t37 == 0u)
    {
        eax = t37;
        goto L_1008aea0;
    }
    ecx = t38;
    edx = t39;
    esi = t37;
    t40 = rd32(COW_IMG(0x10485f98u));
    wr32(esi + 4u, t40);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t41 = cow_call_regs(g, COW_IMG(0x10097bc0u), t40, g->ecx, edx, 1, 0);
    t42 = g->ecx;
    t43 = g->edx;
    wr8(esi + 0x16u, (uint8_t)t41);
    t44 = rd8(COW_IMG(0x104807f2u));
    wr8(esi + 0x17u, (uint8_t)t44);
    t45 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x18u, 0u);
    wr8(COW_IMG(0x1048098eu), 2u);
    if (!(rd32(edi + 0x120u) >> 9u & 1u))
    {
        eax = t45;
        goto L_1008aea0;
    }
    edx = rd32(edi + 0x120u) >> 9u;
    g->eax = rd32(COW_IMG(0x104568fcu));
    t46 = rd32(COW_IMG(0x104568fcu));
    g->esp = sp0 - 0x10u;
    t47 = cow_thiscall(g, COW_IMG(0x100215c0u), rd32(t46 + 0x50u), 2, COW_IMG(0x1035af40u), ebp);
    g->ebx = in_ebx;
    return t47;
L_1008ad3c: ;
    if (!(rd32(edi + 0x120u) >> 9u & 1u)) goto L_1008aea0;
    ecx = rd32(edi + 0x120u) >> 9u;
    wr8(COW_IMG(0x104804c3u), 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, edx, 1, 1, 0x3f800000u);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x10035d40u), 2, 0x3f800000u, 0x1eu);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x1cu;
    t19 = cow_cdecl(g, COW_IMG(0x10035d90u), 2, 0x3f800000u, 0x1eu);
    t20 = g->ecx;
    t21 = g->edx;
    if (ebp == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_1008ada5;
    }
    eax = t19;
    g->eax = eax;
    g->edx = rd32(ebp);
    t22 = rd32(ebp);
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall(g, rd32(t22 + 0x19cu), ebp, 0);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_1008ada5;
    }
    eax = t23;
    if (rd8(COW_IMG(0x10482f45u)) == 0u) goto L_1008aea0;
    wr8(COW_IMG(0x104807f3u), 4u);
    return eax;
L_1008ada5: ;
    wr32(COW_IMG(0x104804c8u), 0x3cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t26 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x78b8u, 0x30696466u, 0u, 0u, 0x3cu);
    wr8(COW_IMG(0x104807f3u), 2u);
    return t26;
L_1008add1: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = cow_take_float(g);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = rd32(COW_IMG(0x104804c8u)) - t10;
    t12 = rd32(COW_IMG(0x104804c8u));
    wr32(COW_IMG(0x104804c8u), t11);
    if ((int32_t)(t12 - t10) >= 0)
    {
        eax = t10;
        goto L_1008aea0;
    }
    eax = t10;
    wr8(COW_IMG(0x104807f3u), 3u);
    return eax;
L_1008adfb: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x10062e80u), 4, 0x78b8u, 0x30696466u, 0u, 0u);
    wr8(COW_IMG(0x104807f3u), 0u);
    return t5;
L_1008ae1a: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t48 = cow_cdecl(g, COW_IMG(0x10062e80u), 4, 0x78b8u, 0x306f6466u, 0u, 0u);
    wr8(COW_IMG(0x10482f1eu), 0u);
    g->ebx = in_ebx;
    return t48;
L_1008ae39: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t49 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t50 = g->ecx;
    t51 = g->edx;
    d52 = cow_take_float(g);
    fpush(g, d52);
    t53 = cow_call_regs(g, COW_IMG(0x10311c6cu), t49, g->ecx, g->edx, 1, 0);
    t54 = rd32(COW_IMG(0x1047d69cu)) - t53;
    t55 = rd32(COW_IMG(0x1047d69cu));
    wr32(COW_IMG(0x1047d69cu), t54);
    if ((int32_t)(t55 - t53) >= 0)
    {
        eax = t53;
        goto L_1008aea0;
    }
    eax = t53;
    wr8(COW_IMG(0x10482f1eu), 3u);
    g->ebx = in_ebx;
    return eax;
L_1008ae5f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t56 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, edx, 1, 1, 0x3f800000u);
    t57 = g->ecx;
    t58 = g->edx;
    g->ecx = t57;
    g->edx = t58;
    g->esp = sp0 - 0x14u;
    t59 = cow_cdecl(g, COW_IMG(0x10035d40u), 2, 0u, 0x1eu);
    t60 = g->ecx;
    t61 = g->edx;
    g->ecx = t60;
    g->edx = t61;
    g->esp = sp0 - 0x1cu;
    t62 = cow_cdecl(g, COW_IMG(0x10035d90u), 2, 0u, 0x1eu);
    t63 = g->ecx;
    t64 = g->edx;
    wr32(COW_IMG(0x1047d69cu), 0x3cu);
    g->esp = sp0 - 0x24u;
    t65 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x78b8u, 0x306f6466u, 0u, 0u, 0x3cu);
    wr8(COW_IMG(0x10482f1eu), 2u);
    eax = t65;
L_1008aea0: ;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008abe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008abe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
