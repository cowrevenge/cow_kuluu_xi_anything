/* f_0x10209000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10209000(Guest* g)
{
    uint32_t eax;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)arg2 == 5u) goto L_102090b0;
    if ((uint32_t)(int16_t)arg2 == 6u) goto L_10209057;
    if ((uint32_t)(int16_t)arg2 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 8u;
        edx = in_edx;
        goto L_10209231;
    }
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(self + 0x10u);
        edx = in_edx;
        goto L_10209231;
    }
    if ((int32_t)rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u) >= 0)
    {
        eax = rd32(COW_IMG(0x1066442cu));
        edx = in_edx;
        goto L_10209231;
    }
    eax = rd32(COW_IMG(0x1066442cu));
    t1 = rd32(eax + 8u);
    g->eax = t1;
    g->esp = sp0 - 0xcu;
    t2 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10037e90u), t3, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_10209057: ;
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u);
        ecx = rd32(COW_IMG(0x1066442cu));
        goto L_10209078;
    }
    eax = rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u);
    ecx = rd32(COW_IMG(0x1066442cu));
    if ((int32_t)eax >= 0) goto L_10209080;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x10207710u), ecx, 0);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_10209078: ;
    if ((int32_t)eax < 0)
    {
        edx = in_edx;
        goto L_10209231;
    }
L_10209080: ;
    wr32(ecx + 0x14u, 0xffffffffu);
    wr16(self + 0x1eu, 0u);
    t9 = rd32(rd32(COW_IMG(0x1066442cu)) + 8u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t9, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037bf0u), t11, 0);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_102090b0: ;
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = arg1;
        ecx = (uint32_t)(int16_t)arg3;
        edx = rd32(arg1 + 0x38u);
        goto L_1020922c;
    }
    edx = rd32(arg1 + 0x38u);
    if ((int16_t)arg3 >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        ecx = (uint32_t)(int16_t)arg3;
        goto L_1020922c;
    }
    if (edx + (uint32_t)(int16_t)arg3 * 0x54u == 0u)
    {
        eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
        ecx = edx + (uint32_t)(int16_t)arg3 * 0x54u;
        goto L_1020922c;
    }
    ecx = edx + (uint32_t)(int16_t)arg3 * 0x54u;
    if (rd32(ecx + 0x48u) != 0xfffffffeu)
    {
        esi = rd32(ecx + 0x48u);
        goto L_1020912a;
    }
    g->eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
    g->esp = sp0 - 0x1cu;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe5u);
    t16 = rd8(self + 0x22u);
    g->ebx = self;
    g->edx = t16;
    t17 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x10210e30u), t17, 7, COW_IMG(0x10209290u), t16, t15, 0u, 0u, 1u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x10037b90u), t19, 0);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_1020912a: ;
    if (esi != 0xffffffffu) goto L_1020915a;
    t23 = rd32(COW_IMG(0x10664438u));
    wr16(t23 + 0x1cu, 0u);
    g->eax = t23;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038556cu), 1u, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10037b90u), t25, 0);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_1020915a: ;
    if (esi == 0u)
    {
        eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
        goto L_1020922c;
    }
    g->eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, COW_IMG(0x101f4b60u), ecx, 1, 1u);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 == 0x80404040u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        goto L_1020922c;
    }
    edx = t31;
    if ((int32_t)rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u) < 0)
    {
        ecx = rd32(COW_IMG(0x1066442cu));
        goto L_1020920c;
    }
    eax = rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u);
    ecx = rd32(COW_IMG(0x1066442cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t32 = cow_thiscall(g, COW_IMG(0x10207990u), ecx, 0);
    t33 = g->edx;
    if ((int32_t)(esi - 0x2000u) < 256)
    {
        eax = t32;
        ecx = esi - 0x2000u;
        edx = t33;
        goto L_102091ff;
    }
    eax = t32;
    ecx = esi - 0x2000u;
    edx = t33;
    t34 = -(eax != esi - 0x2100u) & esi - 0x2100u;
    eax = t34;
    esi = t34;
L_102091a8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t35 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t36 = g->edx;
    if ((int32_t)esi >= 0)
    {
        eax = t35;
        edx = t36;
        t37 = (edx & 0xffff0000u) | rd16(rd32(COW_IMG(0x1066442cu)) + 0x14u);
        t38 = (eax & 0xffffff00u) | rd8(self + 0x22u);
        g->esi = esi;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x100fcf80u), 4, t38, 0x1200u, t37, esi);
    }
L_102091ce: ;
    wr32(rd32(COW_IMG(0x1066442cu)) + 0x14u, 0xffffffffu);
    wr16(self + 0x1eu, 0u);
    t39 = rd32(rd32(COW_IMG(0x1066442cu)) + 8u);
    g->eax = t39;
    t40 = rd32(COW_IMG(0x1066442cu));
    g->esp = sp0 - 0xcu;
    t41 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t40, 2, t39, 0u);
    t42 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t42;
    return (t41 & 0xffffff00u) | 1u;
L_102091ff: ;
    if (eax != ecx)
    {
        esi = ecx;
        goto L_102091a8;
    }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    goto L_102091ce;
L_1020920c: ;
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(self + 0x10u);
        goto L_10209231;
    }
    eax = rd32(self + 0x10u);
    g->ebx = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_stdcall(g, COW_IMG(0x101cc400u), 0);
    t44 = g->edx;
    if ((uint8_t)t43 == 0u)
    {
        eax = t43;
        edx = t44;
        goto L_10209239;
    }
    eax = t43;
    edx = t44;
    g->eax = eax;
    g->edx = edx;
    t45 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0xcu;
    t46 = cow_thiscall(g, COW_IMG(0x10129e30u), t45, 1, 0xb8u);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
L_1020922c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t62 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t63 = g->edx;
    eax = t62;
    edx = t63;
L_10209231: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10209239: ;
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10621808u));
    g->edx = edx;
    t49 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0xcu;
    t50 = cow_stdcall(g, COW_IMG(0x1015bc40u), 1, esi);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 == 0u)
    {
        eax = t50;
        ecx = t51;
        edx = t52;
        goto L_1020922c;
    }
    eax = t50;
    edx = t52;
    edi = esi - 0x2000u;
    t53 = rd16(eax + 0x1cu);
    wr32(self + 0x10u, esi);
    wr32(self + 0x14u, t53);
    if ((int32_t)edi >= 256)
    {
        t54 = rd32(COW_IMG(0x1066442cu));
        wr32(t54 + 0x18u, esi);
        edx = t54;
    }
    t55 = rd32(rd32(COW_IMG(0x1066442cu)) + 8u);
    g->eax = rd32(COW_IMG(0x1066442cu));
    t56 = rd32(COW_IMG(0x1066442cu));
    g->esp = sp0 - 0xcu;
    t57 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t55, 0u);
    t58 = g->ecx;
    t59 = g->edx;
    g->edx = t59;
    t60 = cow_thiscall(g, COW_IMG(0x10037b90u), t58, 0);
    t61 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t61;
    return (t60 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10209000(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
