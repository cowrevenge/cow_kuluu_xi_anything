/* f_0x100185a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100185a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100185c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100185c2;
    case 0x100185d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x4u; goto E_100185d5;
    case 0x100185e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x4u; goto E_100185e8;
    case 0x100185fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x4u; goto E_100185fa;
    case 0x10018617u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x4u; goto E_10018617;
    case 0x10018623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10018623;
    case 0x1001862du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1001862d;
    case 0x10018633u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10018633;
    case 0x10018635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10018635;
    case 0x1001864au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1001864a;
    case 0x1001865au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1001865a;
    default: break;
    }
#endif

    COW_AT(100185a0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 4u, self);
    wr32(sp0 - 0x18u, arg1);
    g->edi = self + 4u;
    g->ecx = self + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x101be510u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1001865a;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    COW_AT(100185c2)
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1001865a;
    }
    edx = t5;
    ebx = t4;
    COW_AT(100185d5)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x101be470u), sp0 + 4u, self + 4u, g->edx, 0, 3, sp0 + 4u, arg1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        ecx = t7;
        goto L_10018623;
    }
    eax = t6;
    edx = t8;
    COW_AT(100185e8)
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x101be590u), self + 4u, 3, arg1, ebx, esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        edx = t11;
        goto L_10018617;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(100185fa)
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t12 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
    wr32(sp0 - 0x18u, arg1);
    g->edi = self + 4u;
    t13 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, arg1, 0, 1, arg1);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return t13;
L_10018617: ;
    COW_AT(10018617)
    wr32(sp0 - 0x18u, arg1);
    g->edi = self + 4u;
    g->ecx = self + 4u;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, arg1);
    t14 = g->ecx;
    ecx = t14;
L_10018623: ;
    COW_AT(10018623)
    if ((int32_t)esi <= 0)
    {
        eax = 0u;
        edx = 0u;
        edi = 0u;
        goto L_1001864a;
    }
    eax = 0u;
    edx = 0u;
    edi = 0u;
L_1001862d: ;
    COW_AT(1001862d)
    if (eax <= arg2)
    {
        cf = eax < arg2;
        pf = PARITY((uint8_t)(eax - arg2));
        zf = eax == arg2;
        sf = (int32_t)(eax - arg2) < 0;
        of = ((eax ^ arg2) & (eax ^ eax - arg2)) >> 0x1fu;
    }
    else
    {
    COW_AT(10018633)
        eax = 0u;
        cf = 0u;
        pf = PARITY(0u);
        zf = 1u;
        sf = 0u;
        of = 0u;
    }
    COW_AT(10018635)
    if ((int32_t)(edx + 1u) < (int32_t)esi)
    {
        edi = edi + ((uint32_t)(int8_t)rd8(ebx + edx) << (eax * 4u & 0x1fu));
        eax = eax + 1u;
        edx = edx + 1u;
        goto L_1001862d;
    }
    ecx = eax * 4u;
    edi = edi + ((uint32_t)(int8_t)rd8(ebx + edx) << (eax * 4u & 0x1fu));
    eax = eax + 1u;
    edx = edx + 1u;
L_1001864a: ;
    COW_AT(1001864a)
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t15 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebx);
    wr32(rd32(sp0 - 4u) + 8u, edi);
    eax = t15;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_1001865a: ;
    COW_AT(1001865a)
    g->ebx = loc_8;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = loc_c;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100185a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100185c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
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
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x100185d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x4u;
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100185e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x4u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100185fau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x4u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10018617u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x4u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10018623u:
    {
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
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001862du:
    {
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
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10018633u:
    {
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
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10018635u:
    {
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
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001864au:
    {
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
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001865au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
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
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100185a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100185a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
