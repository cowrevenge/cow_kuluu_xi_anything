/* f_0x10207e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10207e80(Guest* g)
{
    double d25;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 7u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_102080ef;
    }
    t1 = rd32(COW_IMG(0x102080f8u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10207e9du: goto L_10207e9d;
    case 0x10208017u: goto L_10208017;
    case 0x10208072u: goto L_10208072;
    case 0x102080aeu: goto L_102080ae;
    case 0x102080efu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_102080ef;
    default: rt_fatal(g, COW_IMG(0x10207e96u), "switch");
    }
    return 0;
L_10207e9d: ;
    g->edi = self;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, COW_IMG(0x10207990u), self, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((int32_t)rd32(rd32(COW_IMG(0x10664438u)) + 0x10u) < 0)
    {
        ecx = t27;
        edx = t28;
        ebx = rd32(rd32(COW_IMG(0x10664438u)) + 0x10u);
        esi = t26;
        goto L_10207f3a;
    }
    eax = rd32(COW_IMG(0x10664438u));
    edx = t28;
    ebx = rd32(rd32(COW_IMG(0x10664438u)) + 0x10u);
    esi = t26;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t29 = cow_stdcall(g, COW_IMG(0x10207960u), 1, (uint32_t)(int16_t)arg2);
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)(ebx - 0x2000u) < 256)
    {
        eax = ebx;
        ecx = t30;
        edx = t31;
        ebx = ebx - 0x2000u;
        ebp = t29;
        goto L_10207f2f;
    }
    eax = ebx;
    ecx = t30;
    edx = t31;
    ebp = t29;
    t32 = -(esi != eax - 0x2100u) & eax - 0x2100u;
    eax = eax - 0x2100u;
    ebx = t32;
    esi = t32;
L_10207ee5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if ((int32_t)ebx >= 0)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        t36 = (edx & 0xffffff00u) | rd8(self + 0x1cu);
        g->esi = esi;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x100fcf80u), 4, t36, 0x1200u, ebp, ebx);
    }
L_10207f01: ;
    t37 = rd32(COW_IMG(0x10664438u));
    wr32(t37 + 0x10u, 0xffffffffu);
    t38 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = t37;
    g->esp = sp0 - 0x10u;
    t39 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t38, 2, t38, 0u);
    t40 = g->ecx;
    t41 = g->edx;
    g->edx = t41;
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, COW_IMG(0x10037b90u), t40, 0);
    t43 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t43;
    return t42;
L_10207f2f: ;
    if (esi != ebx) goto L_10207ee5;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    goto L_10207f01;
L_10207f3a: ;
    if ((int32_t)rd32(self + 0x14u) >= 0)
    {
        eax = rd32(self + 0x14u);
        goto L_1020800c;
    }
    eax = rd32(self + 0x14u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t44 = cow_call_regs(g, COW_IMG(0x101cc400u), eax, g->ecx, g->edx, 1, 0);
    t45 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        edx = t45;
        goto L_10207f69;
    }
    eax = t44;
    edx = t45;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    t46 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0xcu;
    t47 = cow_thiscall(g, COW_IMG(0x10129e30u), t46, 1, 0xb8u);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
L_10207f5e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t50 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t51 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t51;
    return t50;
L_10207f69: ;
    g->eax = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0xcu;
    t52 = cow_stdcall(g, COW_IMG(0x10207960u), 1, (uint32_t)(int16_t)arg2);
    wr32(self + 0x14u, t52);
    if (t52 == 0u)
    {
        if (esi == 0u)
        {
            esi = 0u;
        }
        else
        {
            esi = esi + 0x2000u;
        }
        wr16(rd32(COW_IMG(0x10664438u)) + 0x1eu, 1u);
    }
    else
    {
        eax = t52;
        if (eax == 1u)
        {
            if (esi == 0u)
            {
                wr16(rd32(COW_IMG(0x10664438u)) + 0x1eu, 2u);
                esi = 0u;
            }
            else
            {
                wr16(rd32(COW_IMG(0x10664438u)) + 0x1eu, 2u);
                esi = esi + 0x2000u;
            }
        }
        else
        {
            if (esi == 0u)
            {
                wr16(rd32(COW_IMG(0x10664438u)) + 0x1eu, 3u);
                esi = 0u;
            }
            else
            {
                wr16(rd32(COW_IMG(0x10664438u)) + 0x1eu, 3u);
                esi = esi + 0x2100u;
            }
        }
    }
    t53 = rd32(COW_IMG(0x10664438u));
    wr32(t53 + 0x18u, esi);
    wr8(t53 + 0x20u, 1u);
    t54 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = t53;
    g->esp = sp0 - 0xcu;
    t55 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t54, 2, t54, 0u);
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
L_1020800c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t58 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t59 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t59;
    return t58;
L_10208017: ;
    if ((int32_t)rd32(self + 0x14u) >= 0)
    {
        eax = rd32(COW_IMG(0x10664438u));
        ecx = rd32(rd32(COW_IMG(0x10664438u)) + 0x10u);
        goto L_10208037;
    }
    eax = rd32(COW_IMG(0x10664438u));
    ecx = rd32(rd32(COW_IMG(0x10664438u)) + 0x10u);
    if ((int32_t)ecx >= 0) goto L_1020803f;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x10207710u), self, 0);
    t17 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t17;
    return t16;
L_10208037: ;
    if ((int32_t)ecx < 0)
    {
        edx = in_edx;
        goto L_102080ef;
    }
L_1020803f: ;
    wr32(eax + 0x10u, 0xffffffffu);
    t18 = rd32(COW_IMG(0x10664438u));
    wr16(t18 + 0x1eu, 0u);
    t19 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = t18;
    g->esp = sp0 - 0xcu;
    t20 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t19, 2, t19, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10037bf0u), t21, 0);
    t24 = g->edx;
    d25 = cow_take_float(g);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t24;
    fpush(g, d25);
    return t23;
L_10208072: ;
    if ((int32_t)rd32(self + 0x14u) >= 0)
    {
        eax = rd32(self + 0x14u);
        ecx = self;
        edx = in_edx;
        goto L_10207f5e;
    }
    if ((int32_t)rd32(rd32(COW_IMG(0x10664438u)) + 0x10u) >= 0)
    {
        eax = rd32(COW_IMG(0x10664438u));
        ecx = rd32(rd32(COW_IMG(0x10664438u)) + 0x10u);
        edx = in_edx;
        goto L_10207f5e;
    }
    eax = rd32(COW_IMG(0x10664438u));
    t10 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t11 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t10, 2, t10, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10037e90u), t12, 0);
    t15 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t15;
    return t14;
L_102080ae: ;
    if ((int32_t)rd32(rd32(COW_IMG(0x10664438u)) + 0x10u) <= 0)
    {
        eax = rd32(COW_IMG(0x10664438u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10664438u));
        if (rd32(eax + 0x14u) == 0u)
        {
            eax = rd32(eax + 0x14u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(eax + 0x14u);
            if (eax == 1u)
            {
                edx = in_edx;
            }
            else
            {
                g->eax = eax;
                g->edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
                t2 = rd16(rd32(self + 8u) + 0x4cu);
                t3 = rd32(self + 8u);
                g->esp = sp0 - 0xcu;
                t4 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 0u);
                t5 = g->edx;
                if (t5 == t4)
                {
                    eax = t4;
                    edx = t5;
                    esi = t3;
                    goto L_102080e7;
                }
                eax = t4;
                edx = t5;
                esi = t3;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t6 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 1u);
                t7 = g->edx;
                if (t7 != t6)
                {
                    eax = t6;
                    edx = t7;
                    goto L_102080ef;
                }
                eax = t6;
                edx = t7;
L_102080e7: ;
                g->ebx = arg1;
                g->edi = self;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t8 = cow_call_regs(g, COW_IMG(0x10118260u), eax, esi, g->edx, 0, 1, arg1);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
    }
L_102080ef: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207e80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
