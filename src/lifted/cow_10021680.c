/* f_0x10021680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10021680(Guest* g)
{
    double d3;
    double d32;
    double d4;
    double d71;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002169eu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_1002169e;
    case 0x100216b1u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100216b1;
    case 0x100216c1u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100216c1;
    case 0x100216d1u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100216d1;
    case 0x100216deu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100216de;
    case 0x100217cfu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100217cf;
    case 0x100218c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100218c2;
    case 0x100218d5u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); goto E_100218d5;
    case 0x100218d7u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); goto E_100218d7;
    default: break;
    }
#endif

    COW_AT(10021680)
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    if (rd8(COW_IMG(0x10487f80u)) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        edx = t2;
    COW_AT(100217cf)
        g->eax = eax;
        g->esp = sp0 - 0x64u;
        t36 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
        g->edx = rd32(arg2);
        t37 = rd32(arg2);
        t38 = cow_thiscall(g, rd32(t37 + 0x1c0u), arg2, 0);
        t39 = g->edx;
        wr32(sp0 - 0x68u, rd32(t38));
        g->eax = rd32(t38);
        t40 = rd32(t38);
        t41 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, t40);
        g->edx = rd32(arg2);
        t42 = rd32(arg2);
        t43 = cow_thiscall(g, rd32(t42 + 0x1c0u), arg2, 0);
        t44 = g->edx;
        t45 = rd32(t43 + 4u);
        wr32(sp0 - 0x68u, t45);
        g->eax = t45;
        t46 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t45);
        g->edx = rd32(arg2);
        t47 = rd32(arg2);
        t48 = cow_thiscall(g, rd32(t47 + 0x1c0u), arg2, 0);
        t49 = g->edx;
        t50 = rd32(t48 + 8u);
        wr32(sp0 - 0x68u, t50);
        g->eax = t50;
        t51 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t50);
        g->edx = rd32(arg2);
        t52 = rd32(arg2);
        t53 = cow_thiscall(g, rd32(t52 + 0x1bcu), arg2, 0);
        t54 = g->edx;
        wr32(sp0 - 0x68u, t53);
        g->edx = t54;
        cow_thiscall(g, COW_IMG(0x10027cd0u), sp0 - 0x40u, 1, t53);
        t55 = g->ecx;
        t56 = g->edx;
        wr32(sp0 - 0x68u, COW_IMG(0x1035126cu));
        wr32(sp0 - 0x6cu, sp0 - 0x58u);
        g->eax = sp0 - 0x58u;
        g->edx = t56;
        t57 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x58u, COW_IMG(0x1035126cu));
        t58 = g->edx;
        wr32(sp0 - 0x68u, sp0 - 0x58u);
        t59 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x58u);
        wr32(sp0 - 0x68u, sp0 - 0x58u);
        g->edx = sp0 - 0x58u;
        cow_thiscall(g, COW_IMG(0x1001e780u), self, 1, sp0 - 0x58u);
        t60 = g->edx;
        wr32(sp0 - 0x68u, sp0 - 0x58u);
        wr32(sp0 - 0x6cu, self + 0x98u);
        g->eax = sp0 - 0x58u;
        t61 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x98u, sp0 - 0x58u);
        wr8(self + 0x89u, 1u);
        g->edx = rd32(arg2);
        t62 = rd32(arg2);
        t63 = cow_thiscall(g, rd32(t62 + 0x1bcu), arg2, 0);
        t64 = g->ecx;
        t65 = g->edx;
        wr32(sp0 - 0x68u, t63);
        wr32(sp0 - 0x6cu, sp0 - 0x4cu);
        g->eax = sp0 - 0x4cu;
        t66 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, t63);
        t67 = rd32(sp0 - 0x54u);
        wr32(sp0 - 0x48u, t67);
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        g->edx = sp0 - 0x4cu;
        cow_thiscall(g, COW_IMG(0x1001e760u), self, 1, sp0 - 0x4cu);
        t68 = g->edx;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x6cu, self + 0x8cu);
        g->eax = sp0 - 0x4cu;
        g->edx = t68;
        t69 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x8cu, sp0 - 0x4cu);
        t70 = g->edx;
        wr8(self + 0x88u, 1u);
        eax = t69;
        edx = t70;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        edx = t2;
    COW_AT(1002169e)
        if ((double)rdf32(arg1) != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100216b1)
            d3 = (double)rdf32(arg1 + 4u);
            if (d3 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100216c1)
                d4 = (double)rdf32(arg1 + 8u);
                if (d4 != (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100216d1)
                    wr32(arg1 + 4u, 0xc0000000u);
                    wr32(arg1, 0xc0800000u);
                }
            }
        }
    COW_AT(100216de)
        g->edx = edx;
        g->esp = sp0 - 0x64u;
        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
        t5 = g->edx;
        g->eax = rd32(arg2);
        g->edx = t5;
        t6 = rd32(arg2);
        t7 = cow_thiscall(g, rd32(t6 + 0x1c0u), arg2, 0);
        t8 = g->edx;
        wr32(sp0 - 0x68u, rd32(t7));
        t9 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, rd32(t7));
        g->edx = rd32(arg2);
        t10 = rd32(arg2);
        t11 = cow_thiscall(g, rd32(t10 + 0x1c0u), arg2, 0);
        t12 = g->edx;
        t13 = rd32(t11 + 4u);
        wr32(sp0 - 0x68u, t13);
        g->eax = t13;
        t14 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t13);
        g->edx = rd32(arg2);
        t15 = rd32(arg2);
        t16 = cow_thiscall(g, rd32(t15 + 0x1c0u), arg2, 0);
        t17 = g->edx;
        t18 = rd32(t16 + 8u);
        wr32(sp0 - 0x68u, t18);
        g->eax = t18;
        t19 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t18);
        g->edx = rd32(arg2);
        t20 = rd32(arg2);
        t21 = cow_thiscall(g, rd32(t20 + 0x1bcu), arg2, 0);
        t22 = g->edx;
        wr32(sp0 - 0x68u, t21);
        g->edx = t22;
        cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, t21);
        t23 = g->edx;
        wr32(sp0 - 0x68u, arg1);
        wr32(sp0 - 0x6cu, sp0 - 0x4cu);
        g->eax = sp0 - 0x4cu;
        t24 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x4cu, arg1);
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x6cu, self + 0x8cu);
        g->edx = self + 0x8cu;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x8cu, sp0 - 0x4cu);
        t25 = g->edx;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr8(self + 0x88u, 1u);
        g->eax = sp0 - 0x4cu;
        t26 = cow_thiscall(g, COW_IMG(0x1001e760u), self, 1, sp0 - 0x4cu);
        g->edx = rd32(arg2);
        t27 = rd32(arg2);
        t28 = cow_thiscall(g, rd32(t27 + 0x1bcu), arg2, 0);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp0 - 0x68u, t28);
        wr32(sp0 - 0x6cu, sp0 - 0x58u);
        g->eax = sp0 - 0x58u;
        t31 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x58u, t28);
        d32 = fr(g, (double)rdf32(sp0 - 0x54u) - (double)rdf32(COW_IMG(0x10329a08u)));
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        wr32(sp0 - 0x74u, self + 0x98u);
        wrf32(sp0 - 0x54u, (float)(double)(float)d32);
        g->edx = self + 0x98u;
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x98u, sp0 - 0x58u);
        t33 = g->edx;
        wr8(self + 0x89u, 1u);
        wr32(sp0 - 0x68u, sp0 - 0x58u);
        g->eax = sp0 - 0x58u;
        g->edx = t33;
        g->esp = sp0 - 0x64u;
        t34 = cow_thiscall(g, COW_IMG(0x1001e780u), self, 1, sp0 - 0x58u);
        t35 = g->edx;
        wr8(self + 0xf0u, 0u);
        eax = t34;
        edx = t35;
        ebx = (arg1 & 0xffffff00u) | 1u;
    }
    COW_AT(100218c2)
    d71 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(self + 0x54u));
    if (!(d71 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d71;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d71;
    COW_AT(100218d5)
        x0 = -x0;
    }
    COW_AT(100218d7)
    wrf32(COW_IMG(0x10456d78u), (float)x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t72 = cow_thiscall(g, COW_IMG(0x10021b70u), self, 0);
    t73 = g->edx;
    wr8(self + 0xf4u, (uint8_t)ebx);
    t74 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return t74;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10021680(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002169eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x100216b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100216c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100216d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100216deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100217cfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x5cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100218c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x100218d5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x100218d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10021680(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10021680(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
