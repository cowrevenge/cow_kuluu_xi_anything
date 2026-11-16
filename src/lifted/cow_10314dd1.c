/* f_0x10314dd1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10314dd1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if ((int32_t)rd32(rd32(sp0 + 4u)) >= 0)
    {
        esi = rd32(sp0 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x1031ffb9u), 0);
        t1 = g->ecx;
        t2 = g->edx;
        if ((int32_t)rd32(esi) <= 259200)
        {
            ecx = t1;
            edx = t2;
            goto L_10314e4a;
        }
        eax = rd32(esi);
        ecx = t1;
        edx = t2;
        if ((int32_t)eax >= 2147224447) goto L_10314e4a;
        t3 = eax - rd32(COW_IMG(0x103d2d50u));
        wr32(sp0 + 4u, t3);
        wr32(sp0 - 0xcu, sp0 + 4u);
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10320591u), g->eax, ecx, edx, 1, 1, sp0 + 4u);
        t5 = g->edx;
        if (rd32(COW_IMG(0x103d2d54u)) == 0u)
        {
            edx = t5;
            esi = t4;
        }
        else
        {
            edx = t5;
            esi = t4;
            wr32(sp0 - 0xcu, esi);
            g->edx = edx;
            g->esp = sp0 - 8u;
            t6 = cow_cdecl(g, COW_IMG(0x10320284u), 1, esi);
            t7 = g->edx;
            if (t6 == 0u)
            {
                edx = t7;
            }
            else
            {
                ecx = rd32(sp0 - 0xcu);
                edx = t7;
                wr32(sp0 + 4u, rd32(sp0 + 4u) - rd32(COW_IMG(0x103d2d58u)));
                wr32(sp0 - 0xcu, sp0 + 4u);
                g->esp = sp0 - 8u;
                t8 = cow_call_regs(g, COW_IMG(0x10320591u), g->eax, ecx, edx, 1, 1, sp0 + 4u);
                t9 = g->edx;
                wr32(t8 + 0x20u, 1u);
                edx = t9;
                esi = t8;
            }
        }
L_10314ef4: ;
        eax = esi;
    }
    else
    {
        eax = 0u;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
L_10314e4a: ;
    wr32(sp0 - 0xcu, esi);
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10320591u), g->eax, ecx, edx, 1, 1, esi);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x10u, t10);
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x10320284u), 1, t10);
    if (t13 == 0u)
    {
        eax = rd32(t10);
        esi = t10;
    }
    else
    {
        eax = rd32(t10);
        esi = t10;
        eax = eax - rd32(COW_IMG(0x103d2d58u));
    }
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0x3cu);
    t14 = eax - rd32(COW_IMG(0x103d2d50u));
    wr32(sp0 + 4u, t14);
    t15 = cow_divs(g, t14, 0x3cu);
    t16 = cow_mods(g, t14, 0x3cu);
    wr32(esi, t16);
    if ((int32_t)t16 < 0)
    {
        edx = t16;
        wr32(esi, edx + 0x3cu);
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 0x3cu);
    }
    t17 = cow_divs(g, rd32(sp0 + 4u), 0x3cu);
    t18 = cow_mods(g, rd32(sp0 + 4u), 0x3cu);
    t19 = t17 + rd32(esi + 4u);
    wr32(sp0 + 4u, t19);
    t20 = cow_divs(g, t19, 0x3cu);
    t21 = cow_mods(g, t19, 0x3cu);
    wr32(esi + 4u, t21);
    if ((int32_t)t21 < 0)
    {
        edx = t21;
        wr32(esi + 4u, edx + 0x3cu);
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 0x3cu);
    }
    wr32(sp0 - 0xcu, 0x18u);
    t22 = cow_divs(g, rd32(sp0 + 4u), 0x3cu);
    t23 = cow_mods(g, rd32(sp0 + 4u), 0x3cu);
    t24 = t22 + rd32(esi + 8u);
    wr32(sp0 + 4u, t24);
    t25 = cow_divs(g, t24, 0x18u);
    t26 = cow_mods(g, t24, 0x18u);
    wr32(esi + 8u, t26);
    if ((int32_t)t26 < 0)
    {
        edx = t26;
        wr32(esi + 8u, edx + 0x18u);
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 0x18u);
    }
    wr32(sp0 - 0xcu, 0x18u);
    t27 = cow_divs(g, rd32(sp0 + 4u), 0x18u);
    t28 = cow_mods(g, rd32(sp0 + 4u), 0x18u);
    wr32(sp0 + 4u, t27);
    if ((int32_t)t27 <= 0)
    {
        ecx = t27;
        edx = t28;
        sf = (int32_t)t27 < 0;
        goto L_10314ef9;
    }
    ecx = t27;
    wr32(sp0 - 0xcu, 7u);
    t29 = cow_divs(g, ecx + rd32(esi + 0x18u), 7u);
    t30 = cow_mods(g, ecx + rd32(esi + 0x18u), 7u);
    wr32(esi + 0x18u, t30);
    wr32(esi + 0xcu, rd32(esi + 0xcu) + rd32(sp0 + 4u));
    edx = t30;
L_10314eee: ;
    wr32(esi + 0x1cu, rd32(esi + 0x1cu) + rd32(sp0 + 4u));
    goto L_10314ef4;
L_10314ef9: ;
    if (!sf) goto L_10314ef4;
    wr32(sp0 - 0xcu, 7u);
    t31 = cow_divs(g, ecx + rd32(esi + 0x18u) + 7u, 7u);
    t32 = cow_mods(g, ecx + rd32(esi + 0x18u) + 7u, 7u);
    wr32(esi + 0x18u, t32);
    wr32(esi + 0xcu, rd32(esi + 0xcu) + rd32(sp0 + 4u));
    if ((int32_t)rd32(esi + 0xcu) > 0)
    {
        edx = t32;
        goto L_10314eee;
    }
    eax = rd32(esi + 0xcu);
    edx = t32;
    wr32(esi + 0x14u, rd32(esi + 0x14u) - 1u);
    wr32(esi + 0xcu, eax + 0x1fu);
    wr32(esi + 0x1cu, 0x16cu);
    wr32(esi + 0x10u, 0xbu);
    goto L_10314ef4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10314dd1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10314dd1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
