/* f_0x10198e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198e00(Guest* g)
{
    double d10;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10198e26u: eax = g->eax; ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10198e26;
    case 0x10198e5eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10198e5e;
    case 0x10198e76u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10198e76;
    case 0x10198edeu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10198ede;
    default: break;
    }
#endif

    COW_AT(10198e00)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    t1 = rd32(self + 0x1cu);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 != 0u)
    {
        eax = t1;
    COW_AT(10198e26)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x96u);
        t2 = rd32(self + 0x38u);
        wr32(sp0 - 0x2cu, t2);
        t3 = rd32(eax + rd32(self + 0x20u) * 0x10u + 4u);
        wr32(sp0 - 0x30u, t3);
        wr32(sp0 - 0x34u, 0xbu);
        g->eax = eax;
        g->edx = t3;
        g->esp = sp0 - 0x2cu;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t3);
        t5 = g->edx;
        wr32(sp0 - 0x30u, t4);
        t6 = (uint32_t)(int16_t)rd16(self + 0x42u) + 0x14u;
        wr32(sp0 - 0x34u, t6);
        t7 = (uint32_t)(int16_t)rd16(self + 0x40u) + 0x1eu;
        wr32(sp0 - 0x38u, t7);
        g->esp = sp0 - 0x20u;
        cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), t7, 6, t7, t6, t4, rd32(sp0 - 0x2cu), 0x96u, 0u);
    }
    COW_AT(10198e5e)
    wr32(sp0 - 0xcu, 0xffffffc4u - self);
    ebx = self + 0x28u;
    esi = self + 0x3cu;
L_10198e76: ;
    COW_AT(10198e76)
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    t8 = esi - self - 0x3bu;
    wr32(sp0 - 0x2cu, t8);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = self;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t8, 1u, 1u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x10u, rd8(esi));
    wr32(sp0 - 0x28u, 8u);
    d9 = fr(g, (double)(int32_t)rd8(esi) * (double)rdf32(COW_IMG(0x10336c44u)));
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, rd32(ebx));
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, rd32(ebx));
    d10 = fr(g, d9 * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d10);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
    wr32(sp0 - 0x3cu, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0xdu;
    wr32(sp0 - 0x40u, t12);
    g->eax = t11;
    t13 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x24u), 8, t12, t11, cow_f2bits((double)(float)d10), 0x3f800000u, rd32(ebx), 0u, 8u, 0u);
    if ((int32_t)(esi - self - 0x3bu) < 3)
    {
        ebx = ebx + 4u;
        esi = esi + 1u;
        goto L_10198e76;
    }
    eax = t13;
    edx = esi - self - 0x3bu;
    COW_AT(10198ede)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10198e00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10198e26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10198e5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10198e76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0xffffffc5u - self;
        wr32(sp0 - 0xcu, 0xffffffc4u - self);
        (void)sp0;
        return 1;
    }
    case 0x10198edeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10198e00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10198e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
