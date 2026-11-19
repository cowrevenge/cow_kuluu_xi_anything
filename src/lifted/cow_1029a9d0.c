/* f_0x1029a9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1029a9d0(Guest* g)
{
    uint32_t af;
    uint32_t cf;
    double d14;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029a9dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1029a9da;
    case 0x1029a9e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1029a9e8;
    case 0x1029a9f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1029a9f3;
    case 0x1029a9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1029a9fa;
    case 0x1029aa00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa00;
    case 0x1029aa03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1029aa03;
    case 0x1029aa0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1029aa0d;
    case 0x1029aa13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa13;
    case 0x1029aa16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1029aa16;
    case 0x1029aa28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa28;
    case 0x1029aa34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa34;
    case 0x1029aa4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa4c;
    case 0x1029aa57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa57;
    case 0x1029aa61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa61;
    case 0x1029aa68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa68;
    case 0x1029aa6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa6f;
    case 0x1029aa71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa71;
    case 0x1029aa77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1029aa77;
    case 0x1029aa82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa82;
    case 0x1029aa87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029aa87;
    case 0x1029aa98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1029aa98;
    default: break;
    }
#endif

    COW_AT(1029a9d0)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    g->esp = sp0 - 0x48u;
    t1 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029a9da)
    if (arg1 == 0u)
    {
        edi = in_edi;
        loc_44 = in_ebx;
        loc_48 = in_esi;
    }
    else
    {
        ebx = eax;
    COW_AT(1029a9e8)
        if (rd8(arg1 + 0x14u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x14u);
            edi = in_edi;
            loc_44 = in_ebx;
            loc_48 = in_esi;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x14u);
    COW_AT(1029a9f3)
            if (rd8(arg1 + 0x44u) != 0u)
            {
                loc_44 = in_ebx;
                loc_48 = in_esi;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(arg1 + 0x44u);
    COW_AT(1029a9fa)
                wr32(sp0 - 0x4cu, arg1);
                g->esp = sp0 - 0x48u;
                cow_call_regs(g, COW_IMG(0x1029a710u), g->eax, g->ecx, edx, 1, 1, arg1);
                t4 = g->edx;
                edx = t4;
    COW_AT(1029aa00)
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
    COW_AT(1029aa03)
            if (rd32(rd32(arg1 + 0x24u) + 0x3cu) != 0u)
            {
                cf = 0u;
                pf = PARITY((uint8_t)rd32(rd32(arg1 + 0x24u) + 0x3cu));
                af = 0u;
                zf = rd32(rd32(arg1 + 0x24u) + 0x3cu) == 0u;
                sf = (int32_t)rd32(rd32(arg1 + 0x24u) + 0x3cu) < 0;
                of = 0u;
            }
            else
            {
                eax = rd32(arg1 + 0x24u);
                ecx = rd32(rd32(arg1 + 0x24u) + 0x3cu);
    COW_AT(1029aa0d)
                wr32(sp0 - 0x4cu, arg1);
                g->esp = sp0 - 0x48u;
                cow_cdecl(g, COW_IMG(0x1029a130u), 1, arg1);
    COW_AT(1029aa13)
                cf = sp0 - 0x48u < sp0 - 0x4cu;
                pf = PARITY((uint8_t)(sp0 - 0x48u));
                af = (sp0 - 0x4cu ^ sp0 - 0x48u) >> 4u & 1u;
                zf = sp0 == 0x48u;
                sf = (int32_t)(sp0 - 0x48u) < 0;
                of = ((sp0 - 0x4cu ^ sp0 - 0x48u) & (sp0 - 0x48u ^ 4u)) >> 0x1fu;
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
    COW_AT(1029aa16)
            wr32(sp0 - 0x4cu, in_edi);
            t5 = rd32(rd32(arg1 + 0x24u) + 0x14u);
            wr32(sp0 - 0x50u, t5);
            wr32(sp0 - 0x54u, sp0 - 0x40u);
            g->cf = cf;
            g->pf = pf;
            g->af = af;
            g->zf = zf;
            g->sf = sf;
            g->of = of;
            g->edx = t5;
            g->esp = sp0 - 0x40u;
            cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x40u, t5, in_edi, loc_48, loc_44);
            t6 = g->edx;
            edx = t6;
    COW_AT(1029aa28)
            if ((int32_t)rd32(arg1 + 0x3cu) <= 0) goto L_1029aa57;
            edi = 0u;
L_1029aa34: ;
    COW_AT(1029aa34)
            wr32(sp0 - 0x50u, edi);
            t7 = rd32(arg1 + 0x2cu);
            wr32(sp0 - 0x54u, t7);
            t8 = rd32(arg1 + 0x28u);
            wr32(sp0 - 0x58u, t8);
            wr32(sp0 - 0x5cu, sp0 - 0x40u);
            t9 = rd32(edi * 4u + rd32(arg1 + 0x38u));
            wr32(sp0 - 0x60u, t9);
            g->edx = sp0 - 0x40u;
            g->esp = sp0 - 0x4cu;
            cow_thiscall_cdecl(g, rd32(t9 + 0x18u), t8, 5, t9, sp0 - 0x40u, t8, t7, edi);
            t10 = g->edx;
            edx = t10;
    COW_AT(1029aa4c)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x3cu))
            {
                edi = edi + 1u;
                goto L_1029aa34;
            }
L_1029aa57: ;
    COW_AT(1029aa57)
            if (rd32(rd32(arg1 + 0x24u) + 0x3cu) != 0u)
            {
                eax = rd32(arg1 + 0x24u);
                ecx = rd32(rd32(arg1 + 0x24u) + 0x3cu);
            }
            else
            {
                eax = rd32(arg1 + 0x24u);
                ecx = rd32(rd32(arg1 + 0x24u) + 0x3cu);
    COW_AT(1029aa61)
                if (rd32(eax + 0x20u) != 0u)
                {
                    esi = rd32(eax + 0x20u);
    COW_AT(1029aa68)
                    if ((int32_t)rd32(eax + 0x28u) <= 0)
                    {
                        eax = rd32(eax + 0x28u);
                    }
                    else
                    {
                        eax = rd32(eax + 0x28u);
    COW_AT(1029aa6f)
                        edi = eax;
L_1029aa71: ;
    COW_AT(1029aa71)
                        wr32(sp0 - 0x50u, esi);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x4cu;
                        t11 = cow_cdecl(g, COW_IMG(0x10274910u), 1, esi);
                        t12 = g->ecx;
                        t13 = g->edx;
                        d14 = cow_take_float(g);
                        eax = t11;
                        ecx = t12;
                        edx = t13;
                        x0 = d14;
    COW_AT(1029aa77)
                        if (edi != 1u)
                        {
                            esi = esi + 0xcu;
                            edi = edi - 1u;
                            goto L_1029aa71;
                        }
                    }
                }
            }
    COW_AT(1029aa82)
            g->eax = eax;
            g->esp = sp0 - 0x4cu;
            t15 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
            t16 = g->edx;
            eax = t15;
            edx = t16;
    COW_AT(1029aa87)
            t17 = eax + rd32(COW_IMG(0x109a2848u)) - ebx;
            t18 = rd32(sp0 - 0x4cu);
            wr32(COW_IMG(0x109a2848u), t17);
            eax = eax - ebx;
            edi = t18;
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
        }
    }
    COW_AT(1029aa98)
    g->ebx = loc_44;
    g->esi = loc_48;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029a9d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029a9dau:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1029a9e8u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a9f3u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a9fau:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa00u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa03u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa0du:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa13u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa16u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa28u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x54u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1029aa34u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa4cu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x60u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1029aa57u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029aa61u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1029aa68u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1029aa6fu:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1029aa71u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1029aa77u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1029aa82u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1029aa87u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1029aa98u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a9d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029a9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
