/* f_0x10004970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10004970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 320u);

    wr32(sp0 - 0x108u, in_esi);
    if (rd32(COW_IMG(0x10455afcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10455afcu));
        edx = in_edx;
        goto L_10004a05;
    }
    eax = rd32(COW_IMG(0x10455afcu));
    if (eax == 1u) goto L_10004992;
    eax = eax - 1u;
    return eax & 0xffffff00u;
L_10004992: ;
    wr32(sp0 - 0x10cu, COW_IMG(0x1034f824u));
    wr32(sp0 - 0x110u, sp0 - 0x104u);
    g->edx = in_edx;
    g->esp = sp0 - 0xfcu;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x104u, COW_IMG(0x1034f824u), in_esi, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t2 = g->edx;
    wr32(sp0 - 0x114u, sp0 - 0x104u);
    g->esp = sp0 - 0x110u;
    t3 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, sp0 - 0x104u, t2, 1, 1, sp0 - 0x104u);
    t4 = g->ecx;
    wr32(sp0 - 0x118u, COW_IMG(0x1034f7fcu));
    wr32(sp0 - 0x11cu, sp0 - 0x104u);
    g->ecx = t4;
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x108u;
    t5 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x104u, COW_IMG(0x1034f7fcu), sp0 - 0x104u, sp0 - 0x104u, COW_IMG(0x1034f824u));
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t7;
    }
    else
    {
        ecx = t6;
        edx = t7;
        esi = t5;
        wr32(sp0 - 0x10cu, esi);
        wr32(sp0 - 0x110u, 1u);
        wr32(sp0 - 0x114u, 0x40e38u);
        wr32(sp0 - 0x118u, arg1);
        g->esp = sp0 - 0x100u;
        cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, arg1, 0x40e38u, 1u, esi, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
        t8 = g->edx;
        wr32(sp0 - 0x11cu, esi);
        wr32(sp0 - 0x120u, 1u);
        wr32(sp0 - 0x124u, 0x1cu);
        wr32(sp0 - 0x128u, arg2);
        g->ecx = arg2;
        g->esp = sp0 - 0x110u;
        cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t8, 1, 6, arg2, 0x1cu, 1u, esi, arg1, 0x40e38u);
        t9 = g->ecx;
        wr32(sp0 - 0x12cu, esi);
        wr32(sp0 - 0x130u, 1u);
        wr32(sp0 - 0x134u, 0x70u);
        wr32(sp0 - 0x138u, arg3);
        g->ecx = t9;
        g->esp = sp0 - 0x120u;
        cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, arg3, 1, 6, arg3, 0x70u, 1u, esi, arg2, 0x1cu);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x13cu, esi);
        g->esp = sp0 - 0x130u;
        t12 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t11, 1, 3, esi, arg3, 0x70u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
L_10004a05: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10004970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
