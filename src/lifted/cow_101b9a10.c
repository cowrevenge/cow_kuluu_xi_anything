/* f_0x101b9a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101b9a10(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b9a23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x88u); goto E_101b9a23;
    case 0x101b9a38u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x88u); goto E_101b9a38;
    case 0x101b9a43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x88u); goto E_101b9a43;
    case 0x101b9ac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9ac3;
    case 0x101b9aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9ace;
    default: break;
    }
#endif

    COW_AT(101b9a10)
    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x88u;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101b9a43;
    }
    edx = t2;
    COW_AT(101b9a23)
    wr32(sp0 - 0x8cu, in_edi);
    esi = self + 8u;
    edi = COW_IMG(0x1037c928u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        goto L_101b9a43;
    }
    COW_AT(101b9a38)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
L_101b9a43: ;
    COW_AT(101b9a43)
    wr32(sp0 - 0x8cu, sp0 - 0x68u);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
    t3 = rd32(self + 0x10cu);
    wr32(sp0 - 0x90u, t3);
    t4 = rd32(self + 0x108u);
    wr32(sp0 - 0x94u, t4);
    wr32(sp0 - 0x98u, sp0 - 0x68u);
    g->eax = t4;
    g->ecx = sp0 - 0x68u;
    g->esp = sp0 - 4u;
    t5 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x68u, t4, t3, sp0 - 0x68u, in_esi, in_ebx, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u)}, g->ecx, g->edx, g->eax, 148u);
    t6 = g->ecx;
    wr32(sp0 - 0x9cu, sp0 - 0x68u);
    g->esp = sp0 - 8u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x68u, sp0 - 0x68u, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), sp0 - 0x68u, in_esi, in_ebx, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu)}, g->ecx, g->edx, g->eax, 148u);
    t7 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x78u, t7);
    t8 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x74u, t8);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, 0u);
    t9 = rd32(self + 4u);
    wr32(sp0 - 0x80u, t9);
    wr32(sp0 - 0x94u, 0x18u);
    t10 = rd32(sp0 - 4u);
    wr32(sp0 - 0x6cu, t10);
    wr32(sp0 - 0x98u, sp0 - 0x80u);
    wr32(sp0 - 0x9cu, self + 8u);
    t11 = rd32(sp0 - 8u);
    wr32(sp0 - 0x70u, t11);
    g->eax = t11;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x88u;
    t12 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, self + 8u, sp0 - 0x80u, 0x18u, 0u, 0u);
    t13 = g->edx;
    if ((int32_t)t12 >= 0)
    {
        edx = t13;
        goto L_101b9ace;
    }
    eax = t12;
    COW_AT(101b9ac3)
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_101b9ace: ;
    COW_AT(101b9ace)
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, 1u);
    t14 = rd32(self + 0x10cu);
    wr32(sp0 - 0x94u, t14);
    t15 = rd32(self + 0x108u);
    wr32(sp0 - 0x98u, t15);
    wr32(sp0 - 0x9cu, self + 8u);
    g->eax = t14;
    g->esp = sp0 - 0x88u;
    t16 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, self + 8u, t15, t14, 1u, 0u);
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = in_edi;
    return (t16 & 0xffffff00u) | (int32_t)t16 >= 0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b9a10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b9a23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x101b9a38u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x88u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b9a43u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x101b9ac3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101b9aceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        g->esi = self + 8u;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9a10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b9a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
