/* f_0x101c08c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101c08c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 320u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c093eu: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x12cu); in_esi = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x128u); goto E_101c093e;
    case 0x101c094cu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x12cu); in_esi = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x128u); goto E_101c094c;
    default: break;
    }
#endif

    COW_AT(101c08c0)
    wr32(sp0 - 0x128u, in_esi);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x120u, 0u);
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x130u, arg6);
    wr32(sp0 - 0x134u, sp0 - 0x11cu);
    wr32(sp0 - 0x138u, arg2);
    wr32(sp0 - 0x13cu, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x12cu;
    t1 = cow_stdcall(g, COW_IMG(0x101c3e40u), 4, arg1, arg2, sp0 - 0x11cu, arg6);
    if ((int32_t)t1 >= 0) goto L_101c094c;
    eax = t1;
    COW_AT(101c093e)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_101c094c: ;
    COW_AT(101c094c)
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x130u, arg5);
    wr32(sp0 - 0x120u, 3u);
    wr32(sp0 - 0x14u, arg4);
    g->eax = arg5;
    g->edx = arg4;
    g->esp = sp0 - 0x12cu;
    t2 = cow_stdcall(g, COW_IMG(0x101c3fb0u), 1, arg5);
    t3 = g->edx;
    wr32(sp0 - 0x10u, t2);
    wr32(sp0 - 0x130u, sp0 - 0x124u);
    t4 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), t3, 1, sp0 - 0x124u);
    g->esi = in_esi;
    g->edi = in_edi;
    return t4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c08c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c093eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x12cu);
        in_esi = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x134u, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    case 0x101c094cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x12cu);
        in_esi = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x134u, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c08c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c08c0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
