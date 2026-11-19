/* f_0x10149f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10149f20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10149f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10149f2d;
    case 0x10149f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10149f38;
    case 0x10149f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149f4d;
    case 0x10149f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10149f52;
    case 0x10149f61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149f61;
    case 0x10149f64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149f64;
    case 0x10149f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149f91;
    case 0x10149f9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10149f9d;
    case 0x10149fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149fb2;
    case 0x10149fb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149fb7;
    case 0x10149fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149fd1;
    case 0x10149fd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10149fd6;
    case 0x10149feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10149fee;
    case 0x10149ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10149ff1;
    case 0x1014a01au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1014a01a;
    default: break;
    }
#endif

    COW_AT(10149f20)
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    t1 = cow_call_regs(g, COW_IMG(0x100991d0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10149f2d)
    wr32(sp0 - 0x50u, 0x2710u);
    if (eax == 0u)
    {
        edi = eax;
    COW_AT(10149f52)
        wr32(sp0 - 0x54u, COW_IMG(0x103719f4u));
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        g->ecx = ecx;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719f4u), 0x2710u, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    COW_AT(10149f61)
    }
    else
    {
        edi = eax;
    COW_AT(10149f38)
        wr32(sp0 - 0x54u, rd16(edi));
        wr32(sp0 - 0x58u, COW_IMG(0x10357fbcu));
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        g->ecx = sp0 - 0x40u;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10357fbcu), rd16(edi), 0x2710u, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    COW_AT(10149f4d)
    }
    COW_AT(10149f64)
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 0x80808080u);
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    t8 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x1cu);
    wr32(sp0 - 0x64u, t8);
    t9 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 8u);
    wr32(sp0 - 0x68u, t9);
    g->eax = sp0 - 0x40u;
    g->edx = t9;
    g->esp = sp0 - 0x4cu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t8, 7, t9, t8, sp0 - 0x40u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10149f91)
    if (edi == 0u)
    {
    COW_AT(10149fd6)
        wr32(sp0 - 0x50u, rd8(4u));
        wr32(sp0 - 0x54u, COW_IMG(0x103719e4u));
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        g->ecx = rd8(4u);
        g->edx = sp0 - 0x40u;
        t15 = rd8(4u);
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719e4u), t15, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    COW_AT(10149fee)
        ebp = 0x80808080u;
    }
    else
    {
    COW_AT(10149f9d)
        if ((rd16(edi + 2u) & 0x7fu) < rd8(edi + 4u))
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 2u);
            ecx = (ecx & 0xffffff00u) | rd8(edi + 4u);
            edx = rd16(edi + 2u) & 0x7fu;
            ebp = 0x80808080u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 2u);
            ecx = (ecx & 0xffffff00u) | rd8(edi + 4u);
            edx = rd16(edi + 2u) & 0x7fu;
    COW_AT(10149fb2)
            ebp = 0x802060a0u;
        }
    COW_AT(10149fb7)
        wr32(sp0 - 0x50u, (uint8_t)ecx);
        wr32(sp0 - 0x54u, eax & 0x7fu);
        wr32(sp0 - 0x58u, COW_IMG(0x103719ecu));
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        g->ecx = (uint8_t)ecx;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719ecu), eax & 0x7fu, (uint8_t)ecx, rd32(sp0 - 0x4cu));
        t13 = g->ecx;
        t14 = g->edx;
        ecx = t13;
        edx = t14;
    COW_AT(10149fd1)
    }
    COW_AT(10149ff1)
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, ebp);
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    t18 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x44u);
    wr32(sp0 - 0x64u, t18);
    t19 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 8u);
    wr32(sp0 - 0x68u, t19);
    g->eax = sp0 - 0x40u;
    g->edx = t19;
    g->esp = sp0 - 0x4cu;
    t20 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t18, 7, t19, t18, sp0 - 0x40u, ebp, 1u, 0x3f800000u, 0x3f800000u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(1014a01a)
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = rd32(sp0 - 0x44u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10149f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10149f2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10149f38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x50u, 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x10149f4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149f52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x50u, 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x10149f61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149f64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10149f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149f9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x80808080u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149fb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149fb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149fd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149fd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x80808080u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149feeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = 0x80808080u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        wr32(sp0 - 0x58u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10149ff1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1014a01au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10149f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10149f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
