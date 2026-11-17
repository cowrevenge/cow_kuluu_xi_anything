/* f_0x1002a140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1002a140(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_28;
    uint32_t loc_4;
    uint32_t loc_c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd32(sp0 + 4u);
    g->eax = rd32(rd32(sp0 + 4u));
    t2 = rd32(rd32(sp0 + 4u));
    g->esp = sp0 - 0x24u;
    t3 = cow_thiscall(g, rd32(t2 + 0x320u), t1, 0);
    wr32(sp0 - 0xcu, (uint32_t)(int16_t)t3);
    wr32(sp0 - 0x10u, 0u);
    if ((uint32_t)(int16_t)t3 == 0u)
    {
        eax = (uint32_t)(int16_t)t3;
        ebp = 0u;
        esi = t1;
        loc_c = (uint32_t)(int16_t)t3;
        loc_10 = 0u;
    }
    else
    {
        eax = (uint32_t)(int16_t)t3;
        esi = t1;
        loc_c = (uint32_t)(int16_t)t3;
        wr32(sp0 - 0x10u, 1u);
        ebp = 1u;
        loc_10 = 1u;
    }
    wr32(sp0 - 0x28u, 1u);
    g->eax = eax;
    g->edx = rd32(esi);
    t4 = rd32(esi);
    g->esp = sp0 - 0x24u;
    t5 = cow_thiscall(g, rd32(t4 + 0x328u), esi, 1, 1u);
    t6 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    g->eax = rd32(esi);
    g->edx = t6;
    t7 = rd32(esi);
    t8 = cow_thiscall(g, rd32(t7 + 0x328u), esi, 1, 0u);
    t9 = g->edx;
    if ((uint8_t)(t5 | t8) == 0u)
    {
        edx = t9;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t5 | t8);
    }
    else
    {
        eax = t8;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t5 | t8);
        wr32(sp0 - 0x28u, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t10 = cow_thiscall(g, rd32(rd32(esi) + 0x328u), esi, 1, 0u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x10u, (uint32_t)(int8_t)t10);
        g->eax = (uint32_t)(int8_t)t10;
        g->edx = rd32(esi);
        t11 = rd32(esi);
        t12 = cow_thiscall(g, rd32(t11 + 0x328u), esi, 1, 1u);
        t13 = g->edx;
        edx = t13;
        ebp = (uint32_t)(int8_t)t12;
    }
    if (ebp != 0u) goto L_1002a1c7;
    if (rd32(sp0 - 0x10u) == 0u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_1002a25b;
    }
L_1002a1c7: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t14 = rd32(esi);
    g->esp = sp0 - 0x24u;
    t15 = cow_thiscall(g, rd32(t14 + 0x3d8u), esi, 0);
    t16 = g->edx;
    t17 = (uint32_t)(int8_t)rd8(t15 + 6u);
    wr32(sp0 - 4u, t17);
    if ((uint32_t)(int8_t)rd8(t15 + 0x10u) == 0xffffffffu)
    {
        eax = t15;
        edx = t16;
        ebx = (uint32_t)(int8_t)rd8(t15 + 0x10u);
        loc_4 = t17;
        goto L_1002a211;
    }
    eax = t15;
    edx = t16;
    ebx = (uint32_t)(int8_t)rd8(t15 + 0x10u);
    loc_4 = t17;
    if (ebp == 0u) goto L_1002a211;
    wr32(sp0 - 0x28u, 0x7eu);
    t18 = rd32(sp0 - 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t19 = cow_thiscall(g, COW_IMG(0x1002a9b0u), t18, 1, 0x7eu);
    t20 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t19);
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        edx = t20;
        edi = t18;
        loc_4 = rd32(sp0 - 4u);
        goto L_1002a215;
    }
    eax = t19;
    edx = t20;
    edi = t18;
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_thiscall(g, COW_IMG(0x1002a9b0u), edi, 1, ebx);
    t22 = g->edx;
    wr8(sp0 + 6u, (uint8_t)t21);
    wr32(sp0 - 0xcu, 1u);
    eax = t21;
    edx = t22;
    loc_c = 1u;
    loc_4 = rd32(sp0 - 4u);
L_1002a21a: ;
    if (loc_4 == 0xffffffffu) goto L_1002a254;
    if (rd32(sp0 - 0x10u) == 0u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_1002a254;
    }
    eax = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x28u, 0x7fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t23 = cow_thiscall(g, COW_IMG(0x1002a9b0u), edi, 1, 0x7fu);
    t24 = g->edx;
    wr8(sp0 + 5u, (uint8_t)t23);
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        edx = t24;
        loc_c = rd32(sp0 - 0xcu);
        goto L_1002a254;
    }
    eax = t23;
    t25 = rd32(sp0 - 4u);
    wr32(sp0 - 0x28u, t25);
    g->eax = eax;
    g->edx = t25;
    g->esp = sp0 - 0x24u;
    t26 = cow_thiscall(g, COW_IMG(0x1002a9b0u), edi, 1, t25);
    t27 = g->edx;
    wr8(sp0 + 7u, (uint8_t)t26);
    wr32(sp0 - 0xcu, 1u);
    eax = t26;
    edx = t27;
    loc_c = 1u;
L_1002a25f: ;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t28 = cow_thiscall(g, COW_IMG(0x10034330u), edi + 8u, 0);
    t29 = g->edx;
    if ((uint8_t)t28 != 0u)
    {
        eax = t28;
        edx = t29;
        ebp = edi + 8u;
        goto L_1002a277;
    }
    eax = t28;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return eax;
L_1002a211: ;
    edi = rd32(sp0 - 0x14u);
L_1002a215: ;
    wr8(sp0 + 6u, 0xffu);
    loc_c = rd32(sp0 - 0xcu);
    goto L_1002a21a;
L_1002a254: ;
    wr8(sp0 + 7u, 0xffu);
    goto L_1002a25f;
L_1002a25b: ;
    edi = rd32(sp0 - 0x14u);
    loc_c = rd32(sp0 - 0xcu);
    goto L_1002a25f;
L_1002a277: ;
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x24u;
    t30 = cow_call_regs(g, COW_IMG(0x1001a420u), eax, edi + 0x24u, edx, 0, 1, esi);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        edx = t31;
        goto L_1002a297;
    }
    eax = t30;
    edx = t31;
    if ((rd8(sp0 + 0x14u) & 0x10u) != 0u) goto L_1002a297;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_1002a297: ;
    if (arg4 == 0u)
    {
        eax = arg4;
        goto L_1002a2ec;
    }
    wr32(sp0 - 0x28u, 3u);
    g->eax = arg4;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t32 = cow_thiscall(g, COW_IMG(0x1002a9b0u), edi, 1, 3u);
    t33 = g->edx;
    wr32(sp0 + 0x14u, t32);
    if (t32 == 0u)
    {
        edx = t33;
        edi = t32;
        goto L_1002a2e3;
    }
    eax = t32;
    edx = t33;
    edi = t32;
    wr32(sp0 - 0x28u, 7u);
    t34 = rd32(sp0 - 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t35 = cow_thiscall(g, COW_IMG(0x1002a9b0u), t34, 1, 7u);
    t36 = g->edx;
    if (t35 == 0u)
    {
        eax = t35;
        edx = t36;
        goto L_1002a2e7;
    }
    eax = t35;
    edx = t36;
    ebx = t34;
    if ((int32_t)edi < (int32_t)eax)
    {
        wr32(sp0 - 0x28u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t39 = cow_thiscall(g, COW_IMG(0x1002a9b0u), ebx, 1, 4u);
        t40 = g->edx;
        edx = t40;
        edi = eax;
        eax = t39;
    }
    else
    {
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 + 0x14u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t37 = cow_thiscall(g, COW_IMG(0x1002a9b0u), ebx, 1, 4u);
        t38 = g->edx;
        eax = t37;
        edx = t38;
    }
L_1002a2ee: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10034620u), ebp, 0);
    t41 = g->edx;
    if (rd32(sp0 - 0xcu) == 0u)
    {
        eax = rd32(sp0 - 0xcu);
        ecx = ebp;
        edx = t41;
        wr32(sp0 - 0x28u, 0u);
        loc_28 = 0u;
    }
    else
    {
        ecx = ebp;
        edx = t41;
        wr32(sp0 - 0x28u, sp0 + 4u);
        eax = sp0 + 4u;
        loc_28 = sp0 + 4u;
    }
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, arg2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t42 = cow_thiscall(g, COW_IMG(0x100347d0u), ecx, 4, arg2, edi, 0u, loc_28);
    t43 = g->edx;
    if (edi == 0u)
    {
        edx = t43;
    }
    else
    {
        eax = t42;
        edx = t43;
        wr32(sp0 - 0x28u, arg2 + 0x30u);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t44 = cow_thiscall_cdecl(g, COW_IMG(0x10084390u), esi, 1, arg2 + 0x30u);
        wr32(sp0 - 0x2cu, t44);
        wr32(sp0 - 0x30u, arg4);
        g->edx = arg4;
        cow_thiscall(g, COW_IMG(0x1002ac60u), rd32(sp0 - 0x14u), 3, arg4, t44, arg2 + 0x30u);
        t45 = g->edx;
        t46 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x28u, t46);
        g->edx = t45;
        cow_thiscall(g, COW_IMG(0x10034b80u), ebp, 1, t46);
        t47 = g->edx;
        edx = t47;
    }
    if (rd32(sp0 - 0xcu) == 0u)
    {
        eax = rd32(sp0 - 0xcu);
    }
    else
    {
        eax = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, arg2);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t48 = cow_thiscall(g, COW_IMG(0x100347d0u), ebp, 4, arg2, 0u, 1u, sp0 + 4u);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    }
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t50 = cow_thiscall(g, COW_IMG(0x100347d0u), ebp, 4, arg2, 0u, 2u, 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return (t50 & 0xffffff00u) | 1u;
L_1002a2e3: ;
    eax = arg2;
L_1002a2e7: ;
    if (eax == 0xffffffffu) goto L_1002a2ee;
L_1002a2ec: ;
    edi = 0u;
    goto L_1002a2ee;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002a140(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
