/* f_0x102464c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102464c0(Guest* g)
{
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102464dcu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102464dc;
    case 0x102464e9u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102464e9;
    case 0x102464f3u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102464f3;
    case 0x102464fdu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102464fd;
    case 0x10246514u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246514;
    case 0x10246529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246529;
    case 0x10246540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246540;
    case 0x10246542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246542;
    case 0x1024654au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024654a;
    case 0x1024655eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024655e;
    case 0x10246570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246570;
    case 0x1024657cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024657c;
    case 0x1024657eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024657e;
    case 0x10246586u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246586;
    case 0x10246590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246590;
    case 0x10246594u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10246594;
    case 0x102465bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102465bd;
    case 0x102465c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102465c8;
    case 0x102465d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102465d0;
    case 0x102465d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102465d9;
    case 0x102465dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102465df;
    case 0x102465edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102465ed;
    default: break;
    }
#endif

    COW_AT(102464c0)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if (rd8(rd32(COW_IMG(0x10669108u)) + 4u) == 0u)
    {
        edx = in_edx;
        goto L_102465ed;
    }
    eax = (rd32(COW_IMG(0x10669108u)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10669108u)) + 4u);
    ebx = rd32(COW_IMG(0x10669108u)) + 4u;
    COW_AT(102464dc)
    if (rd8(rd32(sp0 + 4u)) != 0x42u)
    {
        edx = in_edx;
        goto L_102465ed;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(102464e9)
    if (rd8(esi + 1u) != 0x47u)
    {
        edx = in_edx;
        goto L_102465ed;
    }
    COW_AT(102464f3)
    if (rd8(esi + 2u) != 0x4du)
    {
        edx = in_edx;
        goto L_102465ed;
    }
    COW_AT(102464fd)
    wr32(sp0 - 0x54u, 0x104u);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x104u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_102465ed;
    }
    edx = t2;
    ebp = t1;
    COW_AT(10246514)
    t3 = (uint32_t)(int16_t)rd16(esi + 4u);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t3);
    wr32(sp0 + 8u, t4 & 0x7fu);
    eax = t4 & 0x7fu;
    ecx = t3;
    esi = 0u;
L_10246529: ;
    COW_AT(10246529)
    wr32(sp0 - 0x54u, 0x104u);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x104u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(esi * 4u + sp0 - 0x40u, t5);
    if ((int32_t)(esi + 1u) < 16)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        esi = esi + 1u;
        goto L_10246529;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10246540)
    edi = 0u;
L_10246542: ;
    COW_AT(10246542)
    if (rd32(edi * 4u + sp0 - 0x40u) == 0u)
    {
        esi = rd32(edi * 4u + sp0 - 0x40u);
    }
    else
    {
        esi = rd32(edi * 4u + sp0 - 0x40u);
    COW_AT(1024654a)
        t8 = rd32(sp0 + 4u);
        wr32(sp0 - 0x54u, t8);
        wr32(sp0 - 0x58u, ebx);
        wr32(sp0 - 0x5cu, COW_IMG(0x103888dcu));
        wr32(sp0 - 0x60u, esi);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t8;
        g->esp = sp0 - 0x4cu;
        t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x103888dcu), ebx, t8, rd32(sp0 - 0x50u));
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    COW_AT(1024655e)
    wr32(sp0 - 0x54u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x58u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t12 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, esi, COW_IMG(0x1034f2d0u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        edx = t14;
        goto L_1024657e;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(10246570)
    if ((int32_t)(edi + 1u) < 16)
    {
        ebx = ebx + 0x108u;
        edi = edi + 1u;
        goto L_10246542;
    }
    edi = edi + 1u;
    COW_AT(1024657c)
L_10246590: ;
    COW_AT(10246590)
    if (eax != 0u)
    {
    COW_AT(10246594)
        wr32(sp0 - 0x54u, eax);
        g->edi = edi;
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
        t16 = g->edx;
        wr32(sp0 - 0x54u, 0u);
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, arg3);
        t17 = rd32(sp0 + 8u);
        wr32(sp0 - 0x68u, t17);
        wr32(sp0 - 0x6cu, ebp);
        wr32(sp0 - 0x70u, 7u);
        g->eax = arg3;
        g->ecx = rd32(COW_IMG(0x106690b0u));
        g->edx = t16;
        t18 = rd32(COW_IMG(0x106690b0u));
        g->esp = sp0 - 0x50u;
        t19 = cow_stdcall(g, COW_IMG(0x1024c080u), 8, 7u, ebp, t17, arg3, 0u, 0u, 0u, 0u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    COW_AT(102465bd)
    wr32(sp0 - 0x54u, ebp);
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
    esi = 0u;
L_102465c8: ;
    COW_AT(102465c8)
    if (rd32(esi * 4u + sp0 - 0x40u) != 0u)
    {
        eax = rd32(esi * 4u + sp0 - 0x40u);
    COW_AT(102465d0)
        wr32(sp0 - 0x54u, eax);
        g->esp = sp0 - 0x50u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    COW_AT(102465d9)
    if ((int32_t)(esi + 1u) < 16)
    {
        esi = esi + 1u;
        goto L_102465c8;
    }
    COW_AT(102465df)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    g->edx = edx;
    return rd32(sp0 + 4u);
L_1024657e: ;
    COW_AT(1024657e)
    ecx = rd32(edi * 4u + sp0 - 0x40u);
    esi = ebp - rd32(edi * 4u + sp0 - 0x40u);
L_10246586: ;
    COW_AT(10246586)
    t15 = rd8(ecx);
    wr8(ecx + esi, (uint8_t)t15);
    if ((uint8_t)t15 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t15;
        goto L_10246586;
    }
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t15;
    goto L_10246590;
L_102465ed: ;
    COW_AT(102465ed)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102464c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102464dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102464e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102464f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102464fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10246514u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246529u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246540u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246542u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024654au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024655eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246570u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024657cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1024657eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246586u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246590u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10246594u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102465bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102465c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102465d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102465d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102465dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102465edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102464c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102464c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
