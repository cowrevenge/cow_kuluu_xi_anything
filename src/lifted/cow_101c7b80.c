/* f_0x101c7b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c7b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_204;
    uint32_t loc_208;
    uint32_t loc_20c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 544u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c7ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7ba0;
    case 0x101c7ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7ba2;
    case 0x101c7ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7ba8;
    case 0x101c7baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bae;
    case 0x101c7bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bb0;
    case 0x101c7bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bb4;
    case 0x101c7bc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x210u); in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bc2;
    case 0x101c7bc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x210u); in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bc8;
    case 0x101c7bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x210u); in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bcc;
    case 0x101c7bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x210u); in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bd5;
    case 0x101c7bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7bdd;
    case 0x101c7bebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_101c7beb;
    case 0x101c7c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_101c7c04;
    case 0x101c7c12u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101c7c12;
    case 0x101c7c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101c7c3e;
    default: break;
    }
#endif

    COW_AT(101c7b80)
    wr32(sp0 - 0x204u, in_ebp);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    wr32(sp0 - 0x210u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x20cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c7b40u), self, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        loc_204 = in_ebp;
        loc_208 = in_esi;
        loc_20c = in_edi;
        goto L_101c7c3e;
    }
    eax = t1;
    edx = t2;
    COW_AT(101c7ba0)
    edi = 0u;
L_101c7ba2: ;
    COW_AT(101c7ba2)
    if (rd32(edi * 4u + self) == 0u) goto L_101c7bb0;
    COW_AT(101c7ba8)
    if ((int32_t)(edi + 1u) < 4)
    {
        edi = edi + 1u;
        goto L_101c7ba2;
    }
    COW_AT(101c7bae)
L_101c7bb4: ;
    COW_AT(101c7bb4)
    wr32(sp0 - 0x210u, in_ebx);
    eax = 1u;
    edx = rd32(self + 0x18u);
    ebx = self + 0x1cu;
    edi = 0u;
L_101c7bc2: ;
    COW_AT(101c7bc2)
    if (rd32(ebx) < edx)
    {
        ecx = rd32(ebx);
    COW_AT(101c7bc8)
        edx = ecx;
        edi = eax;
    }
    COW_AT(101c7bcc)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ebx = ebx + 4u;
        goto L_101c7bc2;
    }
    eax = eax + 1u;
    COW_AT(101c7bd5)
    if (rd32(edi * 4u + self) != 0u)
    {
        ecx = rd32(edi * 4u + self);
    COW_AT(101c7bdd)
        wr32(sp0 - 0x210u, 1u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t3 = rd32(ecx);
        g->esp = sp0 - 0x20cu;
        t4 = cow_thiscall(g, rd32(t3 + 0x18u), ecx, 1, 1u);
        t5 = g->edx;
        wr32(edi * 4u + self, 0u);
        eax = t4;
        edx = t5;
    }
L_101c7beb: ;
    COW_AT(101c7beb)
    wr32(sp0 - 0x210u, arg1);
    wr32(sp0 - 0x214u, 2u);
    wr32(sp0 - 0x218u, 0x1ffu);
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->eax = eax;
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    t6 = cow_cdecl(g, COW_IMG(0x10310997u), 4, sp0 - 0x200u, 0x1ffu, 2u, arg1);
    t7 = g->ecx;
    if ((int32_t)t6 >= 0)
    {
        eax = t6;
        ecx = t7;
        goto L_101c7c12;
    }
    COW_AT(101c7c04)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    g->ebp = rd32(sp0 - 0x204u);
    return 0u;
L_101c7bb0: ;
    COW_AT(101c7bb0)
    if ((int32_t)edi >= 0) goto L_101c7beb;
    goto L_101c7bb4;
L_101c7c12: ;
    COW_AT(101c7c12)
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    g->eax = eax;
    g->esp = sp0 - 0x20cu;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10253870u), ecx, 1, sp0 - 0x200u);
    t9 = g->ecx;
    wr32(edi * 4u + self, t8);
    wr16(edi * 2u + self + 0x10u, (uint16_t)(uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 3u)) >> 2u));
    g->eax = (uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 3u)) >> 2u);
    t10 = cow_thiscall(g, COW_IMG(0x100dbe10u), t9, 0);
    wr32(edi * 4u + self + 0x18u, t10);
    eax = rd32(edi * 4u + self);
    loc_204 = rd32(sp0 - 0x204u);
    loc_208 = rd32(sp0 - 0x208u);
    loc_20c = rd32(sp0 - 0x20cu);
L_101c7c3e: ;
    COW_AT(101c7c3e)
    g->ebx = in_ebx;
    g->esi = loc_208;
    g->edi = loc_20c;
    g->ebp = loc_204;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c7b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c7ba0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7ba2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7ba8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7baeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bc2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x210u);
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x210u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bc8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x210u);
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x210u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x210u);
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x210u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x210u);
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x210u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7bebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7c04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x21cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c7c12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        wr32(sp0 - 0x21cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c7c3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_20c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c7b80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
