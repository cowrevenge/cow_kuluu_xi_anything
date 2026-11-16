/* f_0x100e2c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100e2c30(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 244u);

    wr32(sp0 - 0xacu, in_esi);
    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e2cc4;
    }
    eax = rd32(COW_IMG(0x104df770u));
    if (rd32(eax + 0x1369cu) == 0u) goto L_100e2cc4;
    esi = rd32(eax + 0x1369cu);
    wr32(sp0 - 0xb0u, sp0 - 0xa8u);
    g->eax = sp0 - 0xa8u;
    g->esp = sp0 - 0xa4u;
    t1 = cow_cdecl(g, COW_IMG(0x10103f80u), 3, sp0 - 0xa8u, in_esi, rd32(sp0 - 0xa8u));
    wr32(sp0 - 0xb4u, arg2);
    wr32(sp0 - 0xb8u, sp0 - 0xa8u);
    g->edx = sp0 - 0xa8u;
    g->esp = sp0 - 0xb0u;
    cow_call_regs(g, COW_IMG(0x10103f90u), t1, g->ecx, g->edx, 1, 2, sp0 - 0xa8u, arg2);
    t2 = g->edx;
    wr32(sp0 - 0xbcu, arg1);
    wr32(sp0 - 0xc0u, sp0 - 0xa8u);
    g->esp = sp0 - 0xb8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10103fe0u), sp0 - 0xa8u, 2, sp0 - 0xa8u, arg1);
    wr32(sp0 - 0xc4u, arg6);
    wr32(sp0 - 0xc8u, arg5);
    wr32(sp0 - 0xccu, arg4);
    wr32(sp0 - 0xd0u, arg3);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xe0u, sp0 - 0xa8u);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0u);
    wr32(sp0 - 0xf0u, esi);
    g->esp = sp0 - 0xc0u;
    t3 = cow_cdecl(g, COW_IMG(0x100e1c30u), 12, esi, 0u, 0u, 0u, sp0 - 0xa8u, 0u, 0u, 0u, arg3, arg4, arg5, arg6);
    if (t3 == 0u)
    {
        eax = t3;
        goto L_100e2cc4;
    }
    eax = t3;
    g->esi = rd32(sp0 - 0xacu);
    return (eax & 0xffffff00u) | 1u;
L_100e2cc4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e2c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
