/* f_0x101f08b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f08b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f08bdu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101f08bd;
    case 0x101f08c7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101f08c7;
    case 0x101f08d1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101f08d1;
    case 0x101f08e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f08e6;
    case 0x101f08f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f08f0;
    case 0x101f090au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f090a;
    case 0x101f0915u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f0915;
    case 0x101f0928u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f0928;
    case 0x101f0932u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f0932;
    case 0x101f094cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f094c;
    case 0x101f0957u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f0957;
    case 0x101f096fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f096f;
    case 0x101f0974u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f0974;
    default: break;
    }
#endif

    COW_AT(101f08b0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd8(self + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
        ecx = self;
        goto L_101f08d1;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
    COW_AT(101f08bd)
    if (rd8(self + 6u) != rd8(arg1 + 2u))
    {
        eax = (eax & 0xffffff00u) | rd8(self + 6u);
        ecx = (self & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_101f08d1;
    }
    COW_AT(101f08c7)
    g->esi = in_esi;
    return 0x80804020u;
L_101f08d1: ;
    COW_AT(101f08d1)
    wr32(sp0 - 0xcu, 0u);
    t1 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x10u, t1);
    g->eax = eax;
    t2 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x10131f10u), t2, in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        ecx = t4;
        goto L_101f08f0;
    }
    edx = t5;
    COW_AT(101f08e6)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80509050u;
L_101f08f0: ;
    COW_AT(101f08f0)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, 0u);
    g->eax = sp0 + 4u;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 + 4u, sp0 - 4u, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t8;
        goto L_101f0932;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(101f090a)
    if ((uint8_t)arg1 != rd8(arg1 + 2u)) goto L_101f0932;
    COW_AT(101f0915)
    if ((uint8_t)rd32(sp0 - 4u) != rd32(COW_IMG(0x10663780u)))
    {
        edx = (uint8_t)rd32(sp0 - 4u);
        goto L_101f0932;
    }
    edx = (uint8_t)rd32(sp0 - 4u);
    COW_AT(101f0928)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80509050u;
L_101f0932: ;
    COW_AT(101f0932)
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, 0u);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, 0u, sp0 + 4u, sp0 - 4u, 2u);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        edx = t10;
        goto L_101f096f;
    }
    eax = t9;
    edx = t10;
    COW_AT(101f094c)
    if ((uint8_t)arg1 != rd8(arg1 + 2u))
    {
        edx = (edx & 0xffffff00u) | (uint8_t)arg1;
        goto L_101f096f;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(101f0957)
    if ((uint8_t)rd32(sp0 - 4u) == rd32(COW_IMG(0x10663780u)))
    {
        eax = 0x80509050u;
        goto L_101f0974;
    }
L_101f096f: ;
    COW_AT(101f096f)
    eax = 0x80808080u;
L_101f0974: ;
    COW_AT(101f0974)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f08b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f08bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101f08c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101f08d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f08e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101f08f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f090au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f0915u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f0928u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f0932u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f094cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f0957u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f096fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101f0974u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f08b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f08b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
