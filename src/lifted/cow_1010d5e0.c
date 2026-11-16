/* f_0x1010d5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1010d5e0(Guest* g)
{
    uint32_t cf;
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
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x28u, self);
    if (rd32(arg1 + 4u) == 0u)
    {
        edx = 0u;
    }
    else
    {
        eax = rd32(arg1 + 4u);
        edx = rd32(eax + 4u);
    }
    ecx = sp0 - 0x24u;
    ebx = 3u;
L_1010d608: ;
    wr32(ecx, 0u);
    if (edx != 0u)
    {
        if (rd8(edx) != 0u)
        {
            edi = 5u;
L_1010d61c: ;
            t1 = rd32(ecx) << 6u;
            wr32(ecx, t1);
            if (rd8(edx) != 0u)
            {
                eax = (t1 & 0xffffff00u) | rd8(edx);
                esi = t1;
                if ((uint8_t)eax <= 0x60u)
                {
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
                    eax = (uint8_t)eax - 0x40u;
                }
                t2 = (eax & 0x3fu) | esi;
                wr32(ecx, t2);
                edx = edx + 1u;
            }
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_1010d61c;
            }
        }
    }
    if (ebx != 1u)
    {
        ecx = ecx + 4u;
        ebx = ebx - 1u;
        goto L_1010d608;
    }
    if (rd32(arg2 + 4u) == 0u)
    {
        edx = 0u;
    }
    else
    {
        eax = rd32(arg2 + 4u);
        edx = rd32(eax + 4u);
    }
    ecx = sp0 - 0x18u;
    ebx = 3u;
L_1010d66d: ;
    wr32(ecx, 0u);
    if (edx != 0u)
    {
        if (rd8(edx) != 0u)
        {
            edi = 5u;
L_1010d681: ;
            t3 = rd32(ecx) << 6u;
            wr32(ecx, t3);
            if (rd8(edx) != 0u)
            {
                eax = (t3 & 0xffffff00u) | rd8(edx);
                esi = t3;
                if ((uint8_t)eax <= 0x60u)
                {
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
                    eax = (uint8_t)eax - 0x40u;
                }
                t4 = (eax & 0x3fu) | esi;
                wr32(ecx, t4);
                edx = edx + 1u;
            }
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_1010d681;
            }
        }
    }
    if (ebx != 1u)
    {
        ecx = ecx + 4u;
        ebx = ebx - 1u;
        goto L_1010d66d;
    }
    eax = rd32(self + 0x34u);
    edx = 0u;
L_1010d6bc: ;
    if (rd32(eax + 4u) == 0u) goto L_1010d6d5;
    if (rd32(eax + 8u) == 0u) goto L_1010d6d5;
    ecx = rd32(eax + 8u);
    if ((uint16_t)edx >= rd16(self + 0x44u)) goto L_1010d6d5;
    eax = ecx;
    edx = edx + 1u;
    goto L_1010d6bc;
L_1010d6d5: ;
    wr16(self + 0x44u, (uint16_t)edx);
    if (rd32(eax + 4u) == 0u) goto L_1010d8a5;
    if (rd32(eax + 8u) == 0u) goto L_1010d8a5;
    ecx = rd32(eax + 8u);
    wr32(sp0 - 0xcu, COW_IMG(0x10332e90u));
    t5 = rd32(eax) + 8u;
    wr32(sp0 - 8u, t5);
    ebx = rd32(t5 + 0x10u);
L_1010d703: ;
    wr32(sp0 - 4u, ebx);
    if (rd32(ebx + 4u) == 0u) goto L_1010d7d2;
    if (rd32(ebx + 8u) == 0u) goto L_1010d7ce;
    ebp = rd32(ebx + 8u);
    eax = 0u;
    esi = rd32(ebx) - (sp0 - 0x24u);
    edi = rd32(ebx);
L_1010d729: ;
    if (rd32(eax * 4u + esi + sp0 - 0x24u) > rd32(eax * 4u + sp0 - 0x24u))
    {
        ecx = rd32(eax * 4u + esi + sp0 - 0x24u);
        edx = rd32(eax * 4u + sp0 - 0x24u);
        goto L_1010d7ce;
    }
    cf = rd32(eax * 4u + esi + sp0 - 0x24u) < rd32(eax * 4u + sp0 - 0x24u);
    if (cf) goto L_1010d744;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_1010d729;
    }
L_1010d744: ;
    eax = 0u;
    esi = edi - (sp0 - 0x24u);
L_1010d74e: ;
    if (rd32(eax * 4u + esi + sp0 - 0x24u) > rd32(eax * 4u + sp0 - 0x24u)) goto L_1010d765;
    ecx = rd32(eax * 4u + esi + sp0 - 0x24u);
    edx = rd32(eax * 4u + sp0 - 0x24u);
    cf = rd32(eax * 4u + esi + sp0 - 0x24u) < rd32(eax * 4u + sp0 - 0x24u);
    if (cf) goto L_1010d7c3;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_1010d74e;
    }
L_1010d765: ;
    eax = 0u;
    esi = edi + 0xcu - (sp0 - 0x18u);
    edi = edi + 0xcu;
L_1010d772: ;
    if (rd32(eax * 4u + esi + sp0 - 0x18u) > rd32(eax * 4u + sp0 - 0x18u))
    {
        ecx = rd32(eax * 4u + esi + sp0 - 0x18u);
        edx = rd32(eax * 4u + sp0 - 0x18u);
        goto L_1010d7ce;
    }
    cf = rd32(eax * 4u + esi + sp0 - 0x18u) < rd32(eax * 4u + sp0 - 0x18u);
    if (cf) goto L_1010d789;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_1010d772;
    }
L_1010d789: ;
    eax = 0u;
    esi = edi - (sp0 - 0x18u);
L_1010d793: ;
    if (rd32(eax * 4u + esi + sp0 - 0x18u) > rd32(eax * 4u + sp0 - 0x18u)) goto L_1010d7aa;
    ecx = rd32(eax * 4u + esi + sp0 - 0x18u);
    edx = rd32(eax * 4u + sp0 - 0x18u);
    cf = rd32(eax * 4u + esi + sp0 - 0x18u) < rd32(eax * 4u + sp0 - 0x18u);
    if (cf) goto L_1010d7c3;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_1010d793;
    }
L_1010d7aa: ;
    wr32(sp0 - 0x3cu, arg3);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x10109260u), rd32(ebx) + 0x18u, 1, arg3);
    return;
L_1010d7c3: ;
    ebx = ebp;
    goto L_1010d703;
L_1010d7ce: ;
L_1010d7d2: ;
    esi = rd32(self + 0x14u);
L_1010d7d5: ;
    if (rd32(esi + 4u) == 0u) goto L_1010d834;
    if (rd32(esi + 8u) == 0u) goto L_1010d834;
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->edx = edx;
    t6 = rd32(esi);
    g->esp = sp0 - 0x38u;
    t7 = cow_thiscall(g, COW_IMG(0x1010e070u), t6, 1, sp0 - 0x24u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_1010d834;
    }
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->edx = sp0 - 0x24u;
    t10 = rd32(esi);
    g->esp = sp0 - 0x38u;
    t11 = cow_thiscall(g, COW_IMG(0x1010e0a0u), t10, 1, sp0 - 0x24u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_1010d829;
    }
    edx = t13;
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->edx = edx;
    t14 = rd32(esi);
    g->esp = sp0 - 0x38u;
    t15 = cow_thiscall(g, COW_IMG(0x1010e070u), t14 + 0xcu, 1, sp0 - 0x18u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        ecx = t16;
        edx = t17;
        goto L_1010d834;
    }
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    t18 = rd32(esi);
    g->esp = sp0 - 0x38u;
    t19 = cow_thiscall(g, COW_IMG(0x1010e0a0u), t18 + 0xcu, 1, sp0 - 0x18u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        ecx = t20;
        edx = t21;
        goto L_1010d834;
    }
    ecx = t20;
    edx = t21;
L_1010d829: ;
    if (rd32(esi + 8u) != 0u)
    {
        eax = rd32(esi + 8u);
        esi = eax;
    }
    goto L_1010d7d5;
L_1010d834: ;
    wr32(sp0 - 0x3cu, 0x20u);
    g->esp = sp0 - 0x30u;
    t22 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, in_edi, in_esi);
    t23 = g->edx;
    if (t22 != 0u)
    {
        eax = t22;
        edx = t23;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t24 = cow_thiscall(g, COW_IMG(0x1010d8b0u), eax, 0);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 != 0u)
        {
            eax = t24;
            ecx = t25;
            edx = t26;
            edi = t24;
            wr32(sp0 - 0x3cu, 0xcu);
            g->eax = eax;
            g->esp = sp0 - 0x38u;
            t27 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0xcu);
            t28 = g->edx;
            if (t27 == 0u)
            {
                edx = t28;
                eax = 0u;
            }
            else
            {
                eax = t27;
                edx = t28;
                wr32(sp0 - 0x3cu, edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x38u;
                t29 = cow_thiscall(g, COW_IMG(0x1010e770u), eax, 1, edi);
                t30 = g->edx;
                eax = t29;
                edx = t30;
            }
            wr32(sp0 - 0x3cu, esi);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x1010e790u), eax, 1, esi);
            t31 = g->edx;
            wr16(self + 0xau, (uint16_t)(rd16(self + 0xau) + 1u));
            wr32(sp0 - 0x3cu, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->edx = t31;
            t32 = cow_thiscall(g, COW_IMG(0x1010e040u), edi, 1, sp0 - 0x24u);
            t33 = g->edx;
            wr32(sp0 - 0x3cu, sp0 - 0x18u);
            cow_thiscall(g, COW_IMG(0x1010e040u), edi + 0xcu, 1, sp0 - 0x18u);
            wr32(sp0 - 0x3cu, arg3);
            g->edx = arg3;
            cow_thiscall(g, COW_IMG(0x10109260u), edi + 0x18u, 1, arg3);
            t34 = g->edx;
            wr32(sp0 - 0x3cu, edi);
            cow_fastcall(g, COW_IMG(0x1010e1d0u), sp0 - 0xcu, t34, 1, edi);
        }
    }
L_1010d8a5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010d5e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
