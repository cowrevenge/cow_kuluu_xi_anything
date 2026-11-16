/* f_0x10244680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10244680(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0x1c8u) goto L_10244726;
    t1 = rd32(rd32(sp0 + 4u) + 4u);
    t2 = rd32(rd32(sp0 + 4u));
    g->eax = t1;
    g->ecx = t2;
    g->edx = in_edx;
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1000d230u), 2, t2, t1);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(t3 + 4u, t6);
    t7 = rd32(t3 + 0xcu);
    wr32(t3, t4);
    t8 = rd32(t3 + 8u);
    g->eax = t8;
    g->ecx = t5;
    g->edx = t7;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x1000d230u), 8, t8, t7, t2, t1, in_edi, in_esi, in_ebp, in_ebx);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(t3 + 8u, t9);
    wr32(t3 + 0xcu, t11);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x101c8c50u), t9, g->ecx, g->edx, 1, 4, t3 + 0x10u, 0x1b8u, t8, t7);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 + 4u, t12);
    eax = t12;
    ecx = t13;
    edx = t14;
    ebx = t3 + 0x10u;
    ebp = 0x14u;
    esi = t3;
    edi = t3 + 0x10u;
L_102446d7: ;
    t15 = (ecx & 0xffff0000u) | rd16(edi);
    g->eax = eax;
    g->ecx = t15;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t15);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd16(edi + 2u);
    wr16(edi, (uint16_t)t16);
    t20 = (t18 & 0xffff0000u) | t19;
    g->ecx = t17;
    g->edx = t20;
    g->esp = sp0 - 0x14u;
    t21 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t20);
    t22 = g->ecx;
    t23 = g->edx;
    wr16(edi + 2u, (uint16_t)t21);
    if (ebp != 1u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        ebp = ebp - 1u;
        edi = edi + 0x16u;
        goto L_102446d7;
    }
    edx = t23;
    if (rd32(sp0 + 4u) != rd32(esi + 8u)) goto L_1024479b;
    eax = rd32(sp0 + 4u);
    ecx = rd32(esi + 8u);
    g->esp = sp0 - 8u;
    t24 = cow_call_regs(g, COW_IMG(0x101c8c50u), eax, g->ecx, g->edx, 1, 4, ebx, 0x1b8u, in_edi, in_esi);
    wr32(esi + 8u, t24);
    wr32(esi + 0xcu, 0u);
    return;
L_10244726: ;
    t25 = rd32(rd32(sp0 + 4u));
    g->eax = arg2;
    g->ecx = t25;
    t26 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t27 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t25);
    t28 = g->ecx;
    t29 = rd32(t26 + 4u);
    wr32(t26, t27);
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x14u;
    t30 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t29);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(t26 + 4u, t30);
    g->ecx = t31;
    g->edx = t32;
    g->esp = sp0 - 0x10u;
    t33 = cow_call_regs(g, COW_IMG(0x101c8c50u), t30, g->ecx, g->edx, 1, 4, t26 + 8u, 0x1b8u, t29, t25);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 + 4u, t33);
    eax = t33;
    ecx = t34;
    edx = t35;
    ebx = t26 + 8u;
    ebp = 0x14u;
    esi = t26 + 8u;
    edi = t26;
L_1024475c: ;
    t36 = (eax & 0xffff0000u) | rd16(esi);
    g->eax = t36;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t37 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t36);
    t38 = g->ecx;
    t39 = g->edx;
    t40 = rd16(esi + 2u);
    wr16(esi, (uint16_t)t37);
    t41 = (t38 & 0xffff0000u) | t40;
    g->ecx = t41;
    g->edx = t39;
    g->esp = sp0 - 0x14u;
    t42 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t41);
    t43 = g->ecx;
    t44 = g->edx;
    wr16(esi + 2u, (uint16_t)t42);
    if (ebp != 1u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
        ebp = ebp - 1u;
        esi = esi + 0x16u;
        goto L_1024475c;
    }
    ecx = t43;
    if (rd32(sp0 + 4u) == rd32(edi + 4u))
    {
        eax = rd32(edi + 4u);
        edx = rd32(sp0 + 4u);
        g->esp = sp0 - 8u;
        t45 = cow_call_regs(g, COW_IMG(0x101c8c50u), eax, g->ecx, g->edx, 1, 4, ebx, 0x1b8u, in_edi, in_esi);
        wr32(edi + 4u, t45);
    }
L_1024479b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10244680(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
