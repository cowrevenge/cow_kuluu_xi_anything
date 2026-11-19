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
    uint32_t loc_108;
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
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b3c38u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b3c38;
    case 0x101b3c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b3c46;
    case 0x101b3c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101b3c9d;
    case 0x101b3ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101b3ca1;
    case 0x101b3ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101b3ccb;
    case 0x101b3cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b3cd8;
    case 0x101b3ce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b3ce3;
    case 0x101b3cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b3cfd;
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
    t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x110u, t3);
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x100u;
    t6 = cow_stdcall(g, COW_IMG(0x102bc87cu), 4, t3, in_esi, in_ebp, rd32(sp0 - 0x104u));
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        esi = t3;
        goto L_101b3cd8;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = t3;
    COW_AT(101b3c38)
    if (rd8(self + 0xf123u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
        goto L_101b3cd8;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xf123u);
    COW_AT(101b3c46)
    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_edi);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 0x80u);
    wr32(sp0 - 0x118u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x118u;
    t9 = cow_stdcall(g, COW_IMG(0x102bc888u), 0);
    wr32(sp0 - 0x11cu, 0x100u);
    wr32(sp0 - 0x120u, sp0 - 0x104u);
    wr32(sp0 - 0x124u, 8u);
    edi = sp0 - 0x104u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, esi);
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x10cu;
    cow_stdcall(g, COW_IMG(0x102bc888u), 7, esi, 8u, sp0 - 0x104u, 0x100u, rd32(sp0 - 0x118u), 0x80u, 0u);
    t10 = g->edx;
    wr32(sp0 - 0x110u, esi);
    t11 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x114u, t11);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t12 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x114u;
    t13 = cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    if (rd8(sp0 - 0x100u) == 0u)
    {
        edx = sp0 - 0x100u;
        esi = 0u;
        goto L_101b3ccb;
    }
    edx = sp0 - 0x100u;
    ebx = t9;
    esi = 0u;
L_101b3c9d: ;
    COW_AT(101b3c9d)
    if ((int32_t)ebx <= 0) goto L_101b3ccb;
    COW_AT(101b3ca1)
    wr32(sp0 - 0x118u, sp0 - 0x104u);
    t14 = esi + self + 0xef23u;
    wr32(sp0 - 0x11cu, t14);
    g->eax = sp0 - 0x104u;
    g->esp = sp0 - 0x10cu;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), t14, 4, t14, sp0 - 0x104u, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t16 = g->ecx;
    if (rd8(sp0 - 0x100u) != 0u)
    {
        edx = (uint32_t)(int16_t)t15;
        esi = esi + (uint32_t)(int16_t)t15;
        goto L_101b3c9d;
    }
    edx = (uint32_t)(int16_t)t15;
    esi = esi + (uint32_t)(int16_t)t15;
L_101b3ccb: ;
    COW_AT(101b3ccb)
    g->ebx = rd32(sp0 - 0x110u);
    g->esi = 0u;
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return esi;
L_101b3cd8: ;
    COW_AT(101b3cd8)
    wr32(sp0 - 0x104u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t17 = cow_stdcall(g, COW_IMG(0x102bc87cu), 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x108u, esi);
    if (t17 == 0u)
    {
        ecx = t18;
        loc_108 = esi;
        goto L_101b3cfd;
    }
    edx = t19;
    loc_108 = esi;
    COW_AT(101b3ce3)
    t20 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x10cu, t20);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t21 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x10cu;
    t22 = cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    t23 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = t23;
    return 0xffffffffu;
L_101b3cfd: ;
    COW_AT(101b3cfd)
    t24 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x10cu, t24);
    g->eax = t24;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t25 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x10cu;
    t26 = cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x101b56c0u), self, 0);
    t29 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = t29;
    return t28;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b3c10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b3c38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x100u;
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
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x101b3c9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x120u, sp0 - 0x104u);
        wr32(sp0 - 0x10cu, 0u);
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3ca1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x120u, sp0 - 0x104u);
        wr32(sp0 - 0x10cu, 0u);
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3ccbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x114u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x120u, sp0 - 0x104u);
        wr32(sp0 - 0x10cu, 0u);
        wr32(sp0 - 0x104u, sp0 - 0x100u);
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
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x100u;
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
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
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
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
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
