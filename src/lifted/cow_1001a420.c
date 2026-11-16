/* f_0x1001a420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001a420(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x18u, self);
    if (rd8(COW_IMG(0x10456d28u)) & 1u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10456d28u));
        wr8(COW_IMG(0x10456d28u), (uint8_t)(eax | 1u));
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x10032a40u), COW_IMG(0x10456d2cu), 0);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(sp0 - 0x30u, COW_IMG(0x1001a650u));
        g->edx = t2;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1001a650u));
        t3 = g->edx;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10462430u)) != 0u)
    {
        esi = COW_IMG(0x1045f040u);
        edi = 0u;
L_1001a468: ;
        wr32(sp0 - 0x30u, COW_IMG(0x10456d3cu));
        wr32(sp0 - 0x34u, esi);
        t4 = rd32(COW_IMG(0x10456d30u));
        wr32(esi - 0x10u, rd32(COW_IMG(0x10456d2cu)));
        t5 = rd32(COW_IMG(0x10456d34u));
        wr32(esi - 0xcu, t4);
        t6 = rd32(COW_IMG(0x10456d38u));
        wr32(esi - 8u, t5);
        wr32(esi - 4u, t6);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, esi, COW_IMG(0x10456d3cu));
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x38u, COW_IMG(0x1035109cu));
        wr32(sp0 - 0x3cu, esi + 0xcu);
        g->edx = t8;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, esi + 0xcu, COW_IMG(0x1035109cu));
        t9 = g->edx;
        if (edi + 1u < rd32(COW_IMG(0x10462430u)))
        {
            esi = esi + 0x34u;
            edi = edi + 1u;
            goto L_1001a468;
        }
        edx = t9;
    }
    ebx = 5u;
    esi = self + 0x50u;
    edi = 0u;
L_1001a4c3: ;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t10 = cow_thiscall(g, COW_IMG(0x1001b340u), esi, 0);
    t11 = g->edx;
    if (ebx != 1u)
    {
        edx = t11;
        ebx = ebx - 1u;
        esi = esi - 0x14u;
        edi = edi + t10;
        goto L_1001a4c3;
    }
    eax = t10;
    ebx = ebx - 1u;
    edi = edi + t10;
    if (edi != 0u) goto L_1001a4e2;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return eax & 0xffffff00u;
L_1001a4e2: ;
    edx = rd32(COW_IMG(0x10462430u));
    ebp = self + 0x50u;
    edi = 4u;
L_1001a4ed: ;
    if (rd32(ebp + 4u) != 0u)
    {
        eax = rd32(ebp + 4u);
        wr32(sp0 - 0x30u, COW_IMG(0x1045f030u));
        wr32(sp0 - 0x34u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t12 = cow_fastcall(g, COW_IMG(0x1001b230u), ebp, edx, 2, edi, COW_IMG(0x1045f030u));
        if (rd32(COW_IMG(0x10462430u)) == 0u)
        {
            edx = rd32(COW_IMG(0x10462430u));
            goto L_1001a52a;
        }
        eax = t12;
        ecx = 0u;
        edx = rd32(COW_IMG(0x10462430u));
L_1001a50d: ;
        if ((rd8(ecx + rd32(COW_IMG(0x1045f028u))) & 0x3fu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + rd32(COW_IMG(0x1045f028u)));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + rd32(COW_IMG(0x1045f028u)));
            esi = rd32(COW_IMG(0x1045f028u));
            wr8(ecx + esi, (uint8_t)(eax | 0x40u));
            eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0x40u);
            edx = rd32(COW_IMG(0x10462430u));
        }
        if (ecx + 1u < edx)
        {
            ecx = ecx + 1u;
            goto L_1001a50d;
        }
    }
L_1001a52a: ;
    if ((int32_t)(edi - 1u) >= 0)
    {
        ebp = ebp - 0x14u;
        edi = edi - 1u;
        goto L_1001a4ed;
    }
    wr32(sp0 - 0x1cu, 5u);
    t13 = rd32(sp0 - 0x18u) + 0x70u;
    wr32(sp0 - 0x18u, t13);
    esi = 5u;
    edi = t13;
    loc_1c = 5u;
    loc_18 = t13;
L_1001a546: ;
    if (rd32(edi - 8u) == 0u)
    {
        eax = rd32(edi - 8u);
    }
    else
    {
        if (edx == 0u)
        {
            eax = 0u;
            goto L_1001a571;
        }
        eax = 0u;
L_1001a557: ;
        t14 = rd8(eax + rd32(COW_IMG(0x1045f028u)));
        wr8(eax + rd32(COW_IMG(0x1045f028u)), t14 & 0x80u);
        if (eax + 1u < rd32(COW_IMG(0x10462430u)))
        {
            eax = eax + 1u;
            ebx = (ebx & 0xffffff00u) | (t14 & 0x80u);
            goto L_1001a557;
        }
        eax = eax + 1u;
        ebx = (ebx & 0xffffff00u) | (t14 & 0x80u);
L_1001a571: ;
        wr32(sp0 - 0x30u, COW_IMG(0x1045b820u));
        wr32(sp0 - 0x34u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t15 = cow_fastcall(g, COW_IMG(0x1001b230u), edi - 0xcu, edx, 2, esi, COW_IMG(0x1045b820u));
        wr32(sp0 - 0x14u, rd32(edi));
        if (rd32(COW_IMG(0x10462430u)) == 0u)
        {
            eax = t15;
            edx = rd32(COW_IMG(0x10462430u));
        }
        else
        {
            edx = rd32(COW_IMG(0x10462430u));
            loc_14 = rd32(edi);
            ebx = loc_14;
            ebp = 0u;
            esi = 0u;
L_1001a59b: ;
            if ((int8_t)rd8(ebp + rd32(COW_IMG(0x1045f028u))) >= 0)
            {
                eax = (rd32(COW_IMG(0x1045f028u)) & 0xffffff00u) | rd8(ebp + rd32(COW_IMG(0x1045f028u)));
            }
            else
            {
                eax = (rd32(COW_IMG(0x1045f028u)) & 0xffffff00u) | rd8(ebp + rd32(COW_IMG(0x1045f028u)));
                if ((eax & 0x3fu) != 0u)
                {
                    wr32(sp0 - 0x30u, ebx);
                    t16 = COW_IMG(0x1045b820u) + esi;
                    wr32(sp0 - 0x34u, t16);
                    wr32(sp0 - 0x38u, sp0 - 0x10u);
                    t17 = COW_IMG(0x1045f030u) + esi;
                    g->esp = sp0 - 0x2cu;
                    t18 = cow_call_regs(g, COW_IMG(0x10033220u), eax, t17, g->edx, 0, 3, sp0 - 0x10u, t16, ebx);
                    wr32(t17, rd32(t18));
                    t19 = rd32(t18 + 4u);
                    wr32(t17 + 4u, t19);
                    t20 = rd32(t18 + 8u);
                    wr32(t17 + 8u, t20);
                    t21 = rd32(t18 + 0xcu);
                    wr32(t17 + 0xcu, t21);
                    g->edx = t21;
                    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                    t22 = g->edx;
                    wr32(sp0 - 0x30u, ebx);
                    t23 = COW_IMG(0x1045f040u) + esi;
                    wr32(sp0 - 0x34u, t23);
                    t24 = COW_IMG(0x1045b830u) + esi;
                    wr32(sp0 - 0x38u, t24);
                    wr32(sp0 - 0x3cu, t23);
                    g->ecx = t24;
                    cow_cdecl(g, COW_IMG(0x100276a0u), 4, t23, t24, t23, ebx);
                    t25 = g->ecx;
                    wr32(sp0 - 0x40u, ebx);
                    t26 = COW_IMG(0x1045f04cu) + esi;
                    wr32(sp0 - 0x44u, t26);
                    t27 = COW_IMG(0x1045b83cu) + esi;
                    wr32(sp0 - 0x48u, t27);
                    wr32(sp0 - 0x4cu, t26);
                    g->eax = t26;
                    g->esp = sp0 - 0x3cu;
                    t28 = cow_cdecl(g, COW_IMG(0x100276a0u), 4, t26, t27, t26, ebx);
                    eax = t28;
                    edx = rd32(COW_IMG(0x10462430u));
                    edi = rd32(sp0 - 0x18u);
                }
            }
            if (ebp + 1u < edx)
            {
                ebp = ebp + 1u;
                esi = esi + 0x34u;
                goto L_1001a59b;
            }
            esi = rd32(sp0 - 0x1cu);
        }
    }
    wr32(sp0 - 0x1cu, esi + 1u);
    wr32(sp0 - 0x18u, edi + 0x14u);
    if ((int32_t)(esi + 1u) < 7)
    {
        loc_1c = esi + 1u;
        esi = esi + 1u;
        loc_18 = edi + 0x14u;
        edi = edi + 0x14u;
        goto L_1001a546;
    }
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001a420(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
