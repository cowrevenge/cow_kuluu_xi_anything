/* f_0x101c0fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c0fc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 572u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c1039u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x22cu); in_esi = rd32(sp0 - 0x228u); g->edi = rd32(sp0 - 0x22cu); g->esi = rd32(sp0 - 0x228u); goto E_101c1039;
    case 0x101c1047u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x22cu); in_esi = rd32(sp0 - 0x228u); g->edi = rd32(sp0 - 0x22cu); g->esi = rd32(sp0 - 0x228u); goto E_101c1047;
    default: break;
    }
#endif

    COW_AT(101c0fc0)
    wr32(sp0 - 0x228u, in_esi);
    wr32(sp0 - 0x22cu, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    wr32(sp0 - 0x230u, arg2);
    wr32(sp0 - 0x234u, sp0 - 0x100u);
    wr32(sp0 - 0x238u, arg1);
    g->eax = arg2;
    g->edx = arg1;
    g->esp = sp0 - 0x22cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c3d00u), self, 3, arg1, sp0 - 0x100u, arg2);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        edx = t2;
        goto L_101c1047;
    }
    eax = t1;
    COW_AT(101c1039)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101c1047: ;
    COW_AT(101c1047)
    wr32(sp0 - 0x230u, sp0 - 0x100u);
    wr32(sp0 - 0x234u, 0x100u);
    wr32(sp0 - 0x238u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 6u);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x22cu;
    t3 = cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    wr32(sp0 - 0x230u, sp0 - 0x224u);
    t4 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), sp0 - 0x224u, 1, sp0 - 0x224u);
    g->esi = in_esi;
    g->edi = in_edi;
    return t4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c0fc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c1039u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x22cu);
        in_esi = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x22cu;
        wr32(sp0 - 0x234u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101c1047u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x22cu);
        in_esi = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x22cu;
        wr32(sp0 - 0x234u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c0fc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c0fc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
