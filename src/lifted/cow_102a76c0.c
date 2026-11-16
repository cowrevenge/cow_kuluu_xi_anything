/* f_0x102a76c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a76c0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x14u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1036bf68u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102a7705;
    }
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x10u, 0x1a9u);
    wr32(sp0 - 0x14u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103be41cu));
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be41cu), arg1);
    return t7 & 0xffffff00u;
L_102a7705: ;
    wr32(COW_IMG(0x109a286cu), 0u);
    wr16(COW_IMG(0x109aa89cu), 0u);
    wr32(sp0 - 0x10u, sp0 - 2u);
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, esi);
    g->eax = sp0 - 2u;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x102a7750u), 7, esi, 2u, 3u, sp0 - 2u, in_edi, in_esi, self);
    t9 = g->edx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->ecx = sp0 + 4u;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102a7750u), 7, esi, 2u, 3u, sp0 + 4u, rd32(sp0 - 0x1cu), 2u, 3u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x30u, esi);
    g->edi = arg1;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t11, 1, 3, esi, rd32(sp0 - 0x2cu), 2u);
    g->edi = in_edi;
    return (uint16_t)arg1 == 0x2au;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a76c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a76c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
