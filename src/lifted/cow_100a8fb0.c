/* f_0x100a8fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100a8fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    t1 = rd32(arg2 + 0x20u);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 4u, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100a912e;
    }
    edx = t3;
    edi = t1;
    if (edi == 0u) goto L_100a9027;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x1018c940u), edi, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100a912e;
    }
    eax = t4;
    edx = t5;
    edi = t4;
    wr32(sp0 - 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10085450u), edi, 1, 0u);
    t6 = g->edx;
    g->eax = rd32(edi);
    g->edx = t6;
    t7 = rd32(edi);
    t8 = cow_thiscall(g, rd32(t7 + 0x304u), edi, 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
    }
    else
    {
        eax = t8;
        edx = t9;
        if (rd16(arg2 + 0x26u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(arg2 + 0x26u);
            t10 = (uint32_t)(int16_t)rd16(arg2 + 0x28u);
            wr32(sp0 - 0x1cu, t10);
            t11 = (uint32_t)(int16_t)eax - 1u;
            wr32(sp0 - 0x20u, t11);
            g->edx = t11;
            g->esp = sp0 - 0x14u;
            cow_thiscall_cdecl(g, COW_IMG(0x1022b330u), t10, 3, t11, t10, rd32(sp0 - 0x18u));
            t12 = g->edx;
            edx = t12;
        }
    }
    g->eax = rd32(edi);
    g->edx = edx;
    t13 = rd32(edi);
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1e4u), edi, 0);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_100a912e;
    }
    edx = t15;
L_100a9027: ;
    ebx = 0u;
L_100a9029: ;
    if (rd32(arg2 + 0x20u) == 0u)
    {
        ecx = rd32(arg2 + 0x20u);
        eax = (uint32_t)(int16_t)rd16(arg2 + 0x24u);
    }
    else
    {
        ecx = rd32(arg2 + 0x20u);
        eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
        edx = rd32(ecx + 0xcu);
    }
    if ((int32_t)ebx >= (int32_t)eax) goto L_100a912e;
    if (ecx == 0u) goto L_100a9051;
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t16 = cow_thiscall(g, COW_IMG(0x1018c980u), ecx, 1, ebx);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_100a905d: ;
    if (eax == 0u) goto L_100a909a;
    edi = eax;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, COW_IMG(0x100814a0u), sp0 - 0xcu, 0);
    t21 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x100814f0u), sp0 - 0xcu, 1, edi);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10081550u), sp0 - 0xcu, 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        edx = t24;
        goto L_100a9091;
    }
    edx = t24;
    g->eax = rd32(edi);
    g->edx = edx;
    t25 = rd32(edi);
    g->esp = sp0 - 0x18u;
    t26 = cow_thiscall(g, rd32(t25 + 0x1e4u), edi, 0);
    t27 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        eax = t26;
        edx = t27;
        goto L_100a909d;
    }
    eax = t26;
    edx = t27;
L_100a9091: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100814e0u), sp0 - 0xcu, 0);
    t54 = g->edx;
    edx = t54;
L_100a909a: ;
    ebx = ebx + 1u;
    goto L_100a9029;
L_100a9051: ;
    if (ebx != 0u) goto L_100a909a;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t18 = cow_thiscall(g, COW_IMG(0x10081550u), arg2 + 0x14u, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    goto L_100a905d;
L_100a909d: ;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100814e0u), sp0 - 0xcu, 0);
    t28 = rd32(arg2 + 0x30u);
    wr32(sp0 - 0x1cu, t28);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 + 8u);
    g->edx = t28;
    t29 = cow_stdcall(g, COW_IMG(0x10072290u), 3, sp0 + 8u, 7u, t28);
    t30 = g->edx;
    if (rd32(t29) == 0u)
    {
        eax = rd32(t29);
        edx = t30;
    }
    else
    {
        eax = rd32(t29);
        edx = t30;
        t31 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0x1cu, t31);
        wr32(sp0 - 0x20u, 0u);
        g->edx = edx;
        t32 = rd32(eax);
        g->esp = sp0 - 0x20u;
        t33 = cow_thiscall(g, COW_IMG(0x10081550u), arg2 + 0x14u, 0);
        t34 = g->edx;
        wr32(sp0 - 0x24u, t33);
        g->edx = t34;
        g->esp = sp0 - 0x24u;
        t35 = cow_thiscall(g, COW_IMG(0x10081550u), arg2 + 8u, 0);
        t36 = g->edx;
        wr32(sp0 - 0x28u, t35);
        g->edx = t36;
        g->esp = sp0 - 0x18u;
        t37 = cow_thiscall(g, COW_IMG(0x10056c70u), t32, 4, t35, rd32(sp0 - 0x24u), 0u, rd32(sp0 - 0x1cu));
        t38 = g->edx;
        if (rd8(arg2 + 0x2au) == 0u)
        {
            eax = (t37 & 0xffffff00u) | rd8(arg2 + 0x2au);
            edx = t38;
        }
        else
        {
            edx = t38;
            ebx = t37;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t39 = cow_thiscall(g, COW_IMG(0x10081550u), arg2 + 8u, 0);
            t40 = g->edx;
            wr32(ebx + 0xacu, COW_IMG(0x100a9200u));
            wr32(ebx + 0xb0u, t39);
            eax = t39;
            edx = t40;
        }
    }
    if (rd32(arg2 + 0x20u) != 0u)
    {
        ecx = rd32(arg2 + 0x20u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t41 = cow_thiscall(g, COW_IMG(0x1018c890u), ecx, 0);
        t42 = g->edx;
        if (t41 == 0u)
        {
            edx = t42;
        }
        else
        {
            eax = t41;
            edx = t42;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
            t43 = g->edx;
            edx = t43;
        }
        edi = 0u;
L_100a911e: ;
        if (rd32(arg2 + 0x20u) == 0u)
        {
            ecx = rd32(arg2 + 0x20u);
            eax = (uint32_t)(int16_t)rd16(arg2 + 0x24u);
        }
        else
        {
            ecx = rd32(arg2 + 0x20u);
            eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
            edx = rd32(ecx + 0xcu);
        }
        if ((int32_t)edi >= (int32_t)eax) goto L_100a9178;
        wr32(sp0 - 0x1cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t44 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, edi);
        t45 = g->edx;
        if (t44 == 0u)
        {
            edx = t45;
        }
        else
        {
            eax = t44;
            edx = t45;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
            t46 = g->edx;
            edx = t46;
        }
        edi = edi + 1u;
        goto L_100a911e;
    }
L_100a9178: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t47 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 0x14u, 0);
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x100814e0u), arg2 + 8u, 0);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    t52 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t50, t51, 1, 1, arg2);
    t53 = g->edx;
    eax = t52;
    edx = t53;
L_100a9191: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
L_100a912e: ;
    g->eax = eax;
    g->edx = edx;
    t55 = rd32(arg2 + 0x20u);
    g->esp = sp0 - 0x18u;
    t56 = cow_thiscall(g, COW_IMG(0x100a91a0u), arg2, 0);
    t57 = g->ecx;
    t58 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    t59 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t57, t58, 1, 1, arg2);
    t60 = g->edx;
    if (t55 == 0u)
    {
        eax = t59;
        edx = t60;
        goto L_100a9191;
    }
    eax = t59;
    edx = t60;
    edi = t55;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t61 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, edi, g->edx, 1, 0);
    t62 = g->ecx;
    t63 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    t64 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t62, t63, 1, 1, edi);
    t65 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t65;
    return t64;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a8fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
