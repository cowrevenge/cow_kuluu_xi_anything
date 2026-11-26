/* f_0x101b3c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3c10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_110;
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
    cow_frame(g, sp0, 296u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b3c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3c28;
    case 0x101b3c30u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3c30;
    case 0x101b3c38u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3c38;
    case 0x101b3c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3c46;
    case 0x101b3c57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3c57;
    case 0x101b3c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3c78;
    case 0x101b3c87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3c87;
    case 0x101b3c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3c9d;
    case 0x101b3ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3ca1;
    case 0x101b3cb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3cb3;
    case 0x101b3ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3ccb;
    case 0x101b3cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3cd8;
    case 0x101b3cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3cde;
    case 0x101b3ce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_110 = rd32(sp0 - 0x110u); goto E_101b3ce3;
    case 0x101b3cf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101b3cf1;
    case 0x101b3cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_110 = rd32(sp0 - 0x110u); goto E_101b3cfd;
    case 0x101b3d0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3d0c;
    case 0x101b3d13u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101b3d13;
    default: break;
    }
#endif

    COW_AT(101b3c10)
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    t1 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x110u, t1);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3c28u);
    t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101b3c28)
    wr32(sp0 - 0x110u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3c30u);
    t6 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    esi = eax;
    eax = t6;
    COW_AT(101b3c30)
    if (eax == 0u) goto L_101b3cd8;
    COW_AT(101b3c38)
    if (rd8(self + 0xf123u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
        goto L_101b3cd8;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b3c46)
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 0x80u);
    wr32(sp0 - 0x124u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    COW_RET(0x101b3c57u);
    t9 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, esi, 0x80u, 0u, 0u);
    eax = t9;
    COW_AT(101b3c57)
    wr32(sp0 - 0x118u, 0x100u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr32(sp0 - 0x120u, 8u);
    t10 = eax;
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x124u, esi);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x114u;
    COW_RET(0x101b3c78u);
    cow_stdcall(g, COW_IMG(0x102bc888u), 4, esi, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
    t11 = g->edx;
    edx = t11;
    ebx = t10;
    COW_AT(101b3c78)
    wr32(sp0 - 0x118u, esi);
    t12 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x11cu, t12);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t13 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x114u;
    COW_RET(0x101b3c87u);
    t14 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t12, esi);
    eax = t14;
    COW_AT(101b3c87)
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    if (rd8(sp0 - 0x100u) == 0u)
    {
        edx = sp0 - 0x100u;
        esi = 0u;
        goto L_101b3ccb;
    }
    edx = sp0 - 0x100u;
    esi = 0u;
    edi = sp0 - 0x100u;
    loc_104 = sp0 - 0x100u;
L_101b3c9d: ;
    COW_AT(101b3c9d)
    if ((int32_t)ebx <= 0) goto L_101b3ccb;
    COW_AT(101b3ca1)
    wr32(sp0 - 0x118u, sp0 - 0x104u);
    t15 = esi + self + 0xef23u;
    wr32(sp0 - 0x11cu, t15);
    g->eax = sp0 - 0x104u;
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3cb3u);
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), t15, 4, t15, sp0 - 0x104u, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t17 = g->ecx;
    eax = t16;
    ecx = t17;
    COW_AT(101b3cb3)
    t18 = rd32(sp0 - 0x104u);
    if (rd8(rd32(sp0 - 0x104u)) != 0u)
    {
        edx = (uint32_t)(int16_t)eax;
        ebx = ebx + edi - rd32(sp0 - 0x104u);
        esi = esi + (uint32_t)(int16_t)eax;
        edi = t18;
        loc_104 = rd32(sp0 - 0x104u);
        goto L_101b3c9d;
    }
    edx = (uint32_t)(int16_t)eax;
    esi = esi + (uint32_t)(int16_t)eax;
L_101b3ccb: ;
    COW_AT(101b3ccb)
    g->ebx = rd32(sp0 - 0x110u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return esi;
L_101b3cd8: ;
    COW_AT(101b3cd8)
    wr32(sp0 - 0x110u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3cdeu);
    t19 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, esi);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(101b3cde)
    wr32(sp0 - 0x110u, esi);
    if (eax == 0u)
    {
        loc_110 = esi;
        goto L_101b3cfd;
    }
    loc_110 = esi;
    COW_AT(101b3ce3)
    t22 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x114u, t22);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t23 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3cf1u);
    t24 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t22, loc_110);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(101b3cf1)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return 0xffffffffu;
L_101b3cfd: ;
    COW_AT(101b3cfd)
    t26 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x114u, t26);
    g->eax = t26;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t27 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3d0cu);
    t28 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t26, loc_110);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(101b3d0c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    COW_RET(0x101b3d13u);
    t30 = cow_thiscall(g, COW_IMG(0x101b56c0u), self, 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(101b3d13)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b3c10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b3c28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3c30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3c38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3c46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3c57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3c78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3c87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3c9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3ca1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3cb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3ccbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3cd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3cdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3ce3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3cf1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3cfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3d0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x101b3d13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3c10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b3c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
