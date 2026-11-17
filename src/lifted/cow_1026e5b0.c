/* f_0x1026e5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026e5b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, COW_IMG(0x1099aee0u));
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1027e460u), 1, COW_IMG(0x1099aee0u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x18u, arg1);
        wr32(sp0 - 0x1cu, COW_IMG(0x1099aee0u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x1027e4b0u), 3, COW_IMG(0x1099aee0u), arg1, in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x20u, COW_IMG(0x1099af00u));
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x1cu;
        t7 = cow_cdecl(g, COW_IMG(0x102857f0u), 1, COW_IMG(0x1099af00u));
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            ecx = t8;
            edx = t9;
            loc_c = in_ebx;
            loc_10 = in_esi;
            loc_14 = in_edi;
        }
        else
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            wr32(sp0 - 0x18u, COW_IMG(0x1099af00u));
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10285810u), 1, COW_IMG(0x1099af00u));
            t10 = g->ecx;
            t11 = g->edx;
            ecx = t10;
            edx = t11;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    if (rd32(COW_IMG(0x1099aedcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1099aedcu));
        if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
        {
            ecx = rd32(COW_IMG(0x1099aed8u));
        }
        else
        {
            ecx = rd32(COW_IMG(0x1099aed8u));
            esi = eax + 0xbcu;
            edi = 0u;
L_1026e617: ;
            wr32(sp0 - 0x18u, arg1);
            wr32(sp0 - 0x1cu, esi - 0xbcu);
            g->eax = esi - 0xbcu;
            g->esp = sp0 - 0x18u;
            t12 = cow_call_regs(g, COW_IMG(0x1027dd90u), g->eax, ecx, edx, 1, 1, esi - 0xbcu);
            t13 = g->edx;
            wr32(sp0 - 0x20u, rd32(esi));
            g->ecx = rd32(esi);
            g->edx = t13;
            t14 = rd32(esi);
            g->esp = sp0 - 0x1cu;
            t15 = cow_cdecl(g, COW_IMG(0x102857f0u), 1, t14);
            t16 = g->ecx;
            t17 = g->edx;
            if ((uint8_t)t15 == 0u)
            {
                ecx = t16;
                edx = t17;
            }
            else
            {
                edx = t17;
                if ((int32_t)rd32(esi - 0x28u) < 0) goto L_1026e65a;
                ecx = rd32(esi - 0x28u);
                if ((rd8(ecx * 0xacu + rd32(COW_IMG(0x1099aed0u))) & 4u) == 0u)
                {
                    edx = ecx * 0x15u;
                    ecx = rd32(COW_IMG(0x1099aed0u));
                    goto L_1026e68a;
                }
                eax = ecx * 0x2bu;
                ecx = rd32(COW_IMG(0x1099aed0u));
                wr32(sp0 - 0x18u, rd32(esi));
                edx = rd32(esi);
                loc_18 = rd32(esi);
L_1026e682: ;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_cdecl(g, COW_IMG(0x10285810u), 1, loc_18);
                t18 = g->ecx;
                t19 = g->edx;
                ecx = t18;
                edx = t19;
            }
L_1026e68a: ;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099aed8u)))
            {
                esi = esi + 0xc0u;
                edi = edi + 1u;
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
                goto L_1026e617;
            }
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    if (rd32(COW_IMG(0x1099aed0u)) != 0u)
    {
        esi = rd32(COW_IMG(0x1099aed0u));
        t20 = rd32(COW_IMG(0x1099aeccu));
        wr32(COW_IMG(0x1099af48u), 0u);
        wr32(COW_IMG(0x1099af4cu), 0u);
        wr32(COW_IMG(0x1099af50u), 0u);
        wr32(COW_IMG(0x1099af54u), 0u);
        if ((int32_t)t20 > 0)
        {
            edx = 0u;
            esi = esi + 0x98u;
            edi = 0u;
L_1026e6dc: ;
            if ((rd32(esi - 0x98u) & 0x200u) != 0u)
            {
                t21 = rd32(esi - 4u);
                wr32(sp0 - 0x18u, t21);
                wr32(sp0 - 0x1cu, esi);
                t22 = rd32(esi - 8u);
                wr32(sp0 - 0x20u, t22);
                wr32(sp0 - 0x24u, 0u);
                t23 = rd32(esi + 0x10u);
                wr32(sp0 - 0x28u, t23);
                g->ecx = t22;
                g->edx = t23;
                g->esp = sp0 - 0x14u;
                cow_cdecl(g, COW_IMG(0x10278eb0u), 5, t23, 0u, t22, esi, t21);
                t24 = g->ecx;
                t25 = g->edx;
                ecx = t24;
                edx = t25;
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            t26 = rd32(esi + 0x10u);
            wr32(sp0 - 0x18u, t26);
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x102784b0u), 3, t26, loc_14, loc_10);
            eax = 0u;
L_1026e709: ;
            t27 = rd32(COW_IMG(0x1099af48u) + eax) + rd32(COW_IMG(0x109f8270u) + eax);
            t28 = rd32(COW_IMG(0x109f8270u) + eax);
            wr32(COW_IMG(0x1099af48u) + eax, t27);
            if ((int32_t)(eax + 4u) < 16)
            {
                eax = eax + 4u;
                goto L_1026e709;
            }
            ecx = t28;
            edx = t27;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099aeccu)))
            {
                esi = esi + 0xacu;
                edi = edi + 1u;
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
                goto L_1026e6dc;
            }
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = loc_14;
    return;
L_1026e65a: ;
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0xffffffffu);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10273390u), 3, 0xffffffffu, sp0 - 8u, sp0 - 4u);
    if (rd32(rd32(esi) + 0x20u) == rd32(sp0 - 8u))
    {
        eax = rd32(esi);
        ecx = rd32(rd32(esi) + 0x20u);
        edx = rd32(sp0 - 8u);
        goto L_1026e681;
    }
    eax = rd32(esi);
    ecx = rd32(rd32(esi) + 0x20u);
    edx = rd32(sp0 - 8u);
    if (ecx != rd32(sp0 - 4u)) goto L_1026e68a;
L_1026e681: ;
    wr32(sp0 - 0x18u, eax);
    loc_18 = eax;
    goto L_1026e682;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026e5b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
