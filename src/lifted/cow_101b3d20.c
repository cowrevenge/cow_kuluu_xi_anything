/* f_0x101b3d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3d20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
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
    uint32_t t2;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b3d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3d30;
    case 0x101b3d38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3d38;
    case 0x101b3d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3d53;
    case 0x101b3d67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3d67;
    case 0x101b3d78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3d78;
    case 0x101b3d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3d7c;
    case 0x101b3d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3d99;
    case 0x101b3dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3dab;
    case 0x101b3dbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3dbd;
    case 0x101b3dc9u: ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3dc9;
    case 0x101b3dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3dd0;
    case 0x101b3ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3ddf;
    case 0x101b3deau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_101b3dea;
    case 0x101b3e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3e02;
    case 0x101b3e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101b3e09;
    default: break;
    }
#endif

    COW_AT(101b3d20)
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_stdcall(g, COW_IMG(0x101b41a0u), 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101b3d30)
    if ((uint8_t)eax == 0u) goto L_101b3e02;
    COW_AT(101b3d38)
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x114u, t3);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t3;
    t4 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x110u;
    t5 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t3);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    COW_AT(101b3d53)
    wr32(sp0 - 0x114u, 0x100u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    wr32(sp0 - 0x11cu, 8u);
    wr32(sp0 - 0x120u, eax);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x110u;
    t7 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, eax, 8u, sp0 - 0x100u, 0x100u);
    t8 = g->edx;
    edx = t8;
    esi = eax;
    eax = t7;
    COW_AT(101b3d67)
    wr32(sp0 - 0x114u, esi);
    t9 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x118u, t9);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t10 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x110u;
    t11 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t9, esi);
    edi = eax;
    eax = t11;
    COW_AT(101b3d78)
    if (edi != 0u) goto L_101b3d99;
    COW_AT(101b3d7c)
    edi = self + 0xef23u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = self + 0xef23u;
    return self + 0xef23u;
L_101b3d99: ;
    COW_AT(101b3d99)
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    if (rd8(sp0 - 0x100u) == 0u)
    {
        edx = sp0 - 0x100u;
        esi = 0u;
        goto L_101b3dea;
    }
    edx = sp0 - 0x100u;
    esi = 0u;
    loc_104 = sp0 - 0x100u;
L_101b3dab: ;
    COW_AT(101b3dab)
    wr32(sp0 - 0x114u, sp0 - 0x104u);
    t12 = esi + self + 0xef23u;
    wr32(sp0 - 0x118u, t12);
    g->eax = sp0 - 0x104u;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), t12, 4, t12, sp0 - 0x104u, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t14 = g->edx;
    eax = t13;
    edx = t14;
    loc_104 = rd32(sp0 - 0x104u);
    COW_AT(101b3dbd)
    if ((int16_t)eax <= 0)
    {
        ecx = (uint32_t)(int16_t)eax;
    }
    else
    {
        ecx = (uint32_t)(int16_t)eax;
    COW_AT(101b3dc9)
        eax = 0u;
        edi = esi + self + 0xf12cu;
L_101b3dd0: ;
    COW_AT(101b3dd0)
        t15 = rd8(esi + self + 0xf12cu);
        wr8(eax + edi, (uint8_t)t15);
        if ((int32_t)(eax + 1u) < (int32_t)ecx)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t15;
            loc_104 = rd32(sp0 - 0x104u);
            goto L_101b3dd0;
        }
        edx = (edx & 0xffffff00u) | t15;
        loc_104 = rd32(sp0 - 0x104u);
    }
    COW_AT(101b3ddf)
    t16 = rd8(loc_104);
    if ((uint8_t)t16 != 0u)
    {
        esi = ecx + esi;
        goto L_101b3dab;
    }
    esi = ecx + esi;
L_101b3dea: ;
    COW_AT(101b3dea)
    wr8(esi + self + 0xef23u, 0u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return self + 0xef23u;
L_101b3e02: ;
    COW_AT(101b3e02)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t17 = cow_thiscall(g, COW_IMG(0x101b71e0u), self, 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(101b3e09)
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b3d20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b3d30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3d38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3d53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3d67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3d78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3d7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3d99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3dabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3dbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x114u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x101b3dc9u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->eax = 0u;
        wr32(sp0 - 0x114u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x101b3dd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3ddfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3deau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3d20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b3d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
